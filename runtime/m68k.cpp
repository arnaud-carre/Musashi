#include <assert.h>
#include <stdlib.h>
#include "m68kops.h"


/* Execute some instructions until we use up num_cycles clock cycles */
/* ASG: removed per-instruction interrupt checks */
int M68k::Execute(int num_cycles)
{
	/* eat up any reset cycles */
	if (RESET_CYCLES) {
	    int rc = RESET_CYCLES;
	    RESET_CYCLES = 0;
	    num_cycles -= rc;
	    if (num_cycles <= 0)
			return rc;
	}

	/* Set our pool of clock cycles available */
	SET_CYCLES(num_cycles);
	m68ki_initial_cycles = num_cycles;

	/* See if interrupts came in */
	m68ki_check_interrupts();

	/* Make sure we're not stopped */
	if(!CPU_STOPPED)
	{
		/* Return point if we had an address error */
//		m68ki_set_address_error_trap(); /* auto-disable (see m68kcpu.h) */

//		m68ki_check_bus_error_trap();

		/* Main loop.  Keep going until we run out of clock cycles */
		do
		{
			int i;
			/* Set tracing accodring to T1. (T0 is done inside instruction) */
			m68ki_trace_t1(); /* auto-disable (see m68kcpu.h) */

			/* Set the address space for reads */
			m68ki_use_data_space(); /* auto-disable (see m68kcpu.h) */

			/* Call external hook to peek at CPU */
			m68ki_instr_hook(REG_PC); /* auto-disable (see m68kcpu.h) */

			/* Record previous program counter */
			REG_PPC = REG_PC;

			/* Record previous D/A register state (in case of bus error) */
			for (i = 15; i >= 0; i--){
				REG_DA_SAVE[i] = REG_DA[i];
			}

			/* Read an instruction and call its handler */
			REG_IR = m68ki_read_imm_16();
			(this->*m68ki_instruction_jump_table[REG_IR])();
			USE_CYCLES(CYC_INSTRUCTION[REG_IR]);

			/* Trace m68k_exception, if necessary */
			m68ki_exception_if_trace(); /* auto-disable (see m68kcpu.h) */
		} while(GET_CYCLES() > 0);

		/* set previous PC to current PC for the next entry into the loop */
		REG_PPC = REG_PC;
	}
	else
		SET_CYCLES(0);

	/* return how many clocks we used */
	return m68ki_initial_cycles - GET_CYCLES();
}

/* Handles all immediate reads, does address error check, function code setting,
	* and prefetching if they are enabled in m68kconf.h
	*/
uint M68k::m68ki_read_imm_16(void)
{
	m68ki_set_fc(FLAG_S | FUNCTION_CODE_USER_PROGRAM); /* auto-disable (see m68kcpu.h) */
	m68ki_check_address_error(REG_PC, MODE_READ, FLAG_S | FUNCTION_CODE_USER_PROGRAM); /* auto-disable (see m68kcpu.h) */

	#if M68K_EMULATE_PREFETCH
	{
		uint result;
		if(REG_PC != CPU_PREF_ADDR)
		{
			CPU_PREF_ADDR = REG_PC;
			CPU_PREF_DATA = m68k_read_immediate_16(ADDRESS_68K(CPU_PREF_ADDR));
		}
		result = MASK_OUT_ABOVE_16(CPU_PREF_DATA);
		REG_PC += 2;
		CPU_PREF_ADDR = REG_PC;
		CPU_PREF_DATA = m68k_read_immediate_16(ADDRESS_68K(CPU_PREF_ADDR));
		return result;
	}
	#else
	REG_PC += 2;
	return m68k_read_immediate_16(ADDRESS_68K(REG_PC-2));
	#endif /* M68K_EMULATE_PREFETCH */
}

uint M68k::m68ki_read_imm_8(void)
{
	/* map read immediate 8 to read immediate 16 */
	return MASK_OUT_ABOVE_8(m68ki_read_imm_16());
}

uint M68k::m68ki_read_imm_32(void)
{

	#if M68K_EMULATE_PREFETCH
	uint temp_val;

	m68ki_set_fc(FLAG_S | FUNCTION_CODE_USER_PROGRAM); /* auto-disable (see m68kcpu.h) */
	m68ki_check_address_error(REG_PC, MODE_READ, FLAG_S | FUNCTION_CODE_USER_PROGRAM); /* auto-disable (see m68kcpu.h) */

	if(REG_PC != CPU_PREF_ADDR)
	{
		CPU_PREF_ADDR = REG_PC;
		CPU_PREF_DATA = m68k_read_immediate_16(ADDRESS_68K(CPU_PREF_ADDR));
	}
	temp_val = MASK_OUT_ABOVE_16(CPU_PREF_DATA);
	REG_PC += 2;
	CPU_PREF_ADDR = REG_PC;
	CPU_PREF_DATA = m68k_read_immediate_16(ADDRESS_68K(CPU_PREF_ADDR));

	temp_val = MASK_OUT_ABOVE_32((temp_val << 16) | MASK_OUT_ABOVE_16(CPU_PREF_DATA));
	REG_PC += 2;
	CPU_PREF_ADDR = REG_PC;
	CPU_PREF_DATA = m68k_read_immediate_16(ADDRESS_68K(CPU_PREF_ADDR));

	return temp_val;
	#else
	m68ki_set_fc(FLAG_S | FUNCTION_CODE_USER_PROGRAM); /* auto-disable (see m68kcpu.h) */
	m68ki_check_address_error(REG_PC, MODE_READ, FLAG_S | FUNCTION_CODE_USER_PROGRAM); /* auto-disable (see m68kcpu.h) */
	REG_PC += 4;
	return m68k_read_immediate_32(ADDRESS_68K(REG_PC-4));
	#endif /* M68K_EMULATE_PREFETCH */
}

uint M68k::m68ki_get_ea_pcdi(void)
{
	uint old_pc = REG_PC;
	m68ki_use_program_space(); /* auto-disable */
	return old_pc + MAKE_INT_16(m68ki_read_imm_16());
}


uint M68k::m68ki_get_ea_pcix(void)
{
	m68ki_use_program_space(); /* auto-disable */
	return m68ki_get_ea_ix(REG_PC);
}

/* Indexed addressing modes are encoded as follows:
	*
	* Base instruction format:
	* F E D C B A 9 8 7 6 | 5 4 3 | 2 1 0
	* x x x x x x x x x x | 1 1 0 | BASE REGISTER      (An)
	*
	* Base instruction format for destination EA in move instructions:
	* F E D C | B A 9    | 8 7 6 | 5 4 3 2 1 0
	* x x x x | BASE REG | 1 1 0 | X X X X X X       (An)
	*
	* Brief extension format:
	*  F  |  E D C   |  B  |  A 9  | 8 | 7 6 5 4 3 2 1 0
	* D/A | REGISTER | W/L | SCALE | 0 |  DISPLACEMENT
	*
	* Full extension format:
	*  F     E D C      B     A 9    8   7    6    5 4       3   2 1 0
	* D/A | REGISTER | W/L | SCALE | 1 | BS | IS | BD SIZE | 0 | I/IS
	* BASE DISPLACEMENT (0, 16, 32 bit)                (bd)
	* OUTER DISPLACEMENT (0, 16, 32 bit)               (od)
	*
	* D/A:     0 = Dn, 1 = An                          (Xn)
	* W/L:     0 = W (sign extend), 1 = L              (.SIZE)
	* SCALE:   00=1, 01=2, 10=4, 11=8                  (*SCALE)
	* BS:      0=add base reg, 1=suppress base reg     (An suppressed)
	* IS:      0=add index, 1=suppress index           (Xn suppressed)
	* BD SIZE: 00=reserved, 01=NULL, 10=Word, 11=Long  (size of bd)
	*
	* IS I/IS Operation
	* 0  000  No Memory Indirect
	* 0  001  indir prex with null outer
	* 0  010  indir prex with word outer
	* 0  011  indir prex with long outer
	* 0  100  reserved
	* 0  101  indir postx with null outer
	* 0  110  indir postx with word outer
	* 0  111  indir postx with long outer
	* 1  000  no memory indirect
	* 1  001  mem indir with null outer
	* 1  010  mem indir with word outer
	* 1  011  mem indir with long outer
	* 1  100-111  reserved
	*/
uint M68k::m68ki_get_ea_ix(uint An)
{
	/* An = base register */
	uint extension = m68ki_read_imm_16();
	uint Xn = 0;                        /* Index register */
	uint bd = 0;                        /* Base Displacement */
	uint od = 0;                        /* Outer Displacement */

	if(CPU_TYPE_IS_010_LESS(CPU_TYPE))
	{
		/* Calculate index */
		Xn = REG_DA[extension>>12];     /* Xn */
		if(!BIT_B(extension))           /* W/L */
			Xn = MAKE_INT_16(Xn);

		/* Add base register and displacement and return */
		return An + Xn + MAKE_INT_8(extension);
	}

	/* Brief extension format */
	if(!BIT_8(extension))
	{
		/* Calculate index */
		Xn = REG_DA[extension>>12];     /* Xn */
		if(!BIT_B(extension))           /* W/L */
			Xn = MAKE_INT_16(Xn);
		/* Add scale if proper CPU type */
		if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
			Xn <<= (extension>>9) & 3;  /* SCALE */

		/* Add base register and displacement and return */
		return An + Xn + MAKE_INT_8(extension);
	}

	/* Full extension format */

	USE_CYCLES(m68ki_ea_idx_cycle_table[extension&0x3f]);

	/* Check if base register is present */
	if(BIT_7(extension))                /* BS */
		An = 0;                         /* An */

	/* Check if index is present */
	if(!BIT_6(extension))               /* IS */
	{
		Xn = REG_DA[extension>>12];     /* Xn */
		if(!BIT_B(extension))           /* W/L */
			Xn = MAKE_INT_16(Xn);
		Xn <<= (extension>>9) & 3;      /* SCALE */
	}

	/* Check if base displacement is present */
	if(BIT_5(extension))                /* BD SIZE */
		bd = BIT_4(extension) ? m68ki_read_imm_32() : (uint32)MAKE_INT_16(m68ki_read_imm_16());

	/* If no indirect action, we are done */
	if(!(extension&7))                  /* No Memory Indirect */
		return An + bd + Xn;

	/* Check if outer displacement is present */
	if(BIT_1(extension))                /* I/IS:  od */
		od = BIT_0(extension) ? m68ki_read_imm_32() : (uint32)MAKE_INT_16(m68ki_read_imm_16());

	/* Postindex */
	if(BIT_2(extension))                /* I/IS:  0 = preindex, 1 = postindex */
		return m68ki_read_32(An + bd) + Xn + od;

	/* Preindex */
	return m68ki_read_32(An + bd + Xn) + od;
}


/* Fetch operands */
static inline uint OPER_AY_AI_8(void)  {uint ea = EA_AY_AI_8();  return m68ki_read_8(ea); }
static inline uint OPER_AY_AI_16(void) {uint ea = EA_AY_AI_16(); return m68ki_read_16(ea);}
static inline uint OPER_AY_AI_32(void) {uint ea = EA_AY_AI_32(); return m68ki_read_32(ea);}
static inline uint OPER_AY_PI_8(void)  {uint ea = EA_AY_PI_8();  return m68ki_read_8(ea); }
static inline uint OPER_AY_PI_16(void) {uint ea = EA_AY_PI_16(); return m68ki_read_16(ea);}
static inline uint OPER_AY_PI_32(void) {uint ea = EA_AY_PI_32(); return m68ki_read_32(ea);}
static inline uint OPER_AY_PD_8(void)  {uint ea = EA_AY_PD_8();  return m68ki_read_8(ea); }
static inline uint OPER_AY_PD_16(void) {uint ea = EA_AY_PD_16(); return m68ki_read_16(ea);}
static inline uint OPER_AY_PD_32(void) {uint ea = EA_AY_PD_32(); return m68ki_read_32(ea);}
static inline uint OPER_AY_DI_8(void)  {uint ea = EA_AY_DI_8();  return m68ki_read_8(ea); }
static inline uint OPER_AY_DI_16(void) {uint ea = EA_AY_DI_16(); return m68ki_read_16(ea);}
static inline uint OPER_AY_DI_32(void) {uint ea = EA_AY_DI_32(); return m68ki_read_32(ea);}
static inline uint OPER_AY_IX_8(void)  {uint ea = EA_AY_IX_8();  return m68ki_read_8(ea); }
static inline uint OPER_AY_IX_16(void) {uint ea = EA_AY_IX_16(); return m68ki_read_16(ea);}
static inline uint OPER_AY_IX_32(void) {uint ea = EA_AY_IX_32(); return m68ki_read_32(ea);}

static inline uint OPER_AX_AI_8(void)  {uint ea = EA_AX_AI_8();  return m68ki_read_8(ea); }
static inline uint OPER_AX_AI_16(void) {uint ea = EA_AX_AI_16(); return m68ki_read_16(ea);}
static inline uint OPER_AX_AI_32(void) {uint ea = EA_AX_AI_32(); return m68ki_read_32(ea);}
static inline uint OPER_AX_PI_8(void)  {uint ea = EA_AX_PI_8();  return m68ki_read_8(ea); }
static inline uint OPER_AX_PI_16(void) {uint ea = EA_AX_PI_16(); return m68ki_read_16(ea);}
static inline uint OPER_AX_PI_32(void) {uint ea = EA_AX_PI_32(); return m68ki_read_32(ea);}
static inline uint OPER_AX_PD_8(void)  {uint ea = EA_AX_PD_8();  return m68ki_read_8(ea); }
static inline uint OPER_AX_PD_16(void) {uint ea = EA_AX_PD_16(); return m68ki_read_16(ea);}
static inline uint OPER_AX_PD_32(void) {uint ea = EA_AX_PD_32(); return m68ki_read_32(ea);}
static inline uint OPER_AX_DI_8(void)  {uint ea = EA_AX_DI_8();  return m68ki_read_8(ea); }
static inline uint OPER_AX_DI_16(void) {uint ea = EA_AX_DI_16(); return m68ki_read_16(ea);}
static inline uint OPER_AX_DI_32(void) {uint ea = EA_AX_DI_32(); return m68ki_read_32(ea);}
static inline uint OPER_AX_IX_8(void)  {uint ea = EA_AX_IX_8();  return m68ki_read_8(ea); }
static inline uint OPER_AX_IX_16(void) {uint ea = EA_AX_IX_16(); return m68ki_read_16(ea);}
static inline uint OPER_AX_IX_32(void) {uint ea = EA_AX_IX_32(); return m68ki_read_32(ea);}

static inline uint OPER_A7_PI_8(void)  {uint ea = EA_A7_PI_8();  return m68ki_read_8(ea); }
static inline uint OPER_A7_PD_8(void)  {uint ea = EA_A7_PD_8();  return m68ki_read_8(ea); }

static inline uint OPER_AW_8(void)     {uint ea = EA_AW_8();     return m68ki_read_8(ea); }
static inline uint OPER_AW_16(void)    {uint ea = EA_AW_16();    return m68ki_read_16(ea);}
static inline uint OPER_AW_32(void)    {uint ea = EA_AW_32();    return m68ki_read_32(ea);}
static inline uint OPER_AL_8(void)     {uint ea = EA_AL_8();     return m68ki_read_8(ea); }
static inline uint OPER_AL_16(void)    {uint ea = EA_AL_16();    return m68ki_read_16(ea);}
static inline uint OPER_AL_32(void)    {uint ea = EA_AL_32();    return m68ki_read_32(ea);}
static inline uint OPER_PCDI_8(void)   {uint ea = EA_PCDI_8();   return m68ki_read_pcrel_8(ea); }
static inline uint OPER_PCDI_16(void)  {uint ea = EA_PCDI_16();  return m68ki_read_pcrel_16(ea);}
static inline uint OPER_PCDI_32(void)  {uint ea = EA_PCDI_32();  return m68ki_read_pcrel_32(ea);}
static inline uint OPER_PCIX_8(void)   {uint ea = EA_PCIX_8();   return m68ki_read_pcrel_8(ea); }
static inline uint OPER_PCIX_16(void)  {uint ea = EA_PCIX_16();  return m68ki_read_pcrel_16(ea);}
static inline uint OPER_PCIX_32(void)  {uint ea = EA_PCIX_32();  return m68ki_read_pcrel_32(ea);}


