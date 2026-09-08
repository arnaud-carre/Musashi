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
		m68ki_set_address_error_trap(); /* auto-disable (see m68kcpu.h) */

		m68ki_check_bus_error_trap();

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
