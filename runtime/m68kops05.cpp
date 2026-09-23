#include "m68kops.h"

void M68k::op_movea_16_ai(void)
{
	AX = MAKE_INT_16(OPER_AY_AI_16());
}


void M68k::op_movea_16_pi(void)
{
	AX = MAKE_INT_16(OPER_AY_PI_16());
}


void M68k::op_movea_16_pd(void)
{
	AX = MAKE_INT_16(OPER_AY_PD_16());
}


void M68k::op_movea_16_di(void)
{
	AX = MAKE_INT_16(OPER_AY_DI_16());
}


void M68k::op_movea_16_ix(void)
{
	AX = MAKE_INT_16(OPER_AY_IX_16());
}


void M68k::op_movea_16_aw(void)
{
	AX = MAKE_INT_16(OPER_AW_16());
}


void M68k::op_movea_16_al(void)
{
	AX = MAKE_INT_16(OPER_AL_16());
}


void M68k::op_movea_16_pcdi(void)
{
	AX = MAKE_INT_16(OPER_PCDI_16());
}


void M68k::op_movea_16_pcix(void)
{
	AX = MAKE_INT_16(OPER_PCIX_16());
}


void M68k::op_movea_16_i(void)
{
	AX = MAKE_INT_16(OPER_I_16());
}


void M68k::op_movea_32_d(void)
{
	AX = DY;
}


void M68k::op_movea_32_a(void)
{
	AX = AY;
}


void M68k::op_movea_32_ai(void)
{
	AX = OPER_AY_AI_32();
}


void M68k::op_movea_32_pi(void)
{
	AX = OPER_AY_PI_32();
}


void M68k::op_movea_32_pd(void)
{
	AX = OPER_AY_PD_32();
}


void M68k::op_movea_32_di(void)
{
	AX = OPER_AY_DI_32();
}


void M68k::op_movea_32_ix(void)
{
	AX = OPER_AY_IX_32();
}


void M68k::op_movea_32_aw(void)
{
	AX = OPER_AW_32();
}


void M68k::op_movea_32_al(void)
{
	AX = OPER_AL_32();
}


void M68k::op_movea_32_pcdi(void)
{
	AX = OPER_PCDI_32();
}


void M68k::op_movea_32_pcix(void)
{
	AX = OPER_PCIX_32();
}


void M68k::op_movea_32_i(void)
{
	AX = OPER_I_32();
}


void M68k::op_move_16_frc_d(void)
{
	if(CPU_TYPE_IS_010_PLUS(CPU_TYPE))
	{
		DY = MASK_OUT_BELOW_16(DY) | m68ki_get_ccr();
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_move_16_frc_ai(void)
{
	if(CPU_TYPE_IS_010_PLUS(CPU_TYPE))
	{
		m68ki_write_16(EA_AY_AI_16(), m68ki_get_ccr());
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_move_16_frc_pi(void)
{
	if(CPU_TYPE_IS_010_PLUS(CPU_TYPE))
	{
		m68ki_write_16(EA_AY_PI_16(), m68ki_get_ccr());
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_move_16_frc_pd(void)
{
	if(CPU_TYPE_IS_010_PLUS(CPU_TYPE))
	{
		m68ki_write_16(EA_AY_PD_16(), m68ki_get_ccr());
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_move_16_frc_di(void)
{
	if(CPU_TYPE_IS_010_PLUS(CPU_TYPE))
	{
		m68ki_write_16(EA_AY_DI_16(), m68ki_get_ccr());
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_move_16_frc_ix(void)
{
	if(CPU_TYPE_IS_010_PLUS(CPU_TYPE))
	{
		m68ki_write_16(EA_AY_IX_16(), m68ki_get_ccr());
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_move_16_frc_aw(void)
{
	if(CPU_TYPE_IS_010_PLUS(CPU_TYPE))
	{
		m68ki_write_16(EA_AW_16(), m68ki_get_ccr());
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_move_16_frc_al(void)
{
	if(CPU_TYPE_IS_010_PLUS(CPU_TYPE))
	{
		m68ki_write_16(EA_AL_16(), m68ki_get_ccr());
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_move_16_toc_d(void)
{
	m68ki_set_ccr(DY);
}


void M68k::op_move_16_toc_ai(void)
{
	m68ki_set_ccr(OPER_AY_AI_16());
}


void M68k::op_move_16_toc_pi(void)
{
	m68ki_set_ccr(OPER_AY_PI_16());
}


void M68k::op_move_16_toc_pd(void)
{
	m68ki_set_ccr(OPER_AY_PD_16());
}


void M68k::op_move_16_toc_di(void)
{
	m68ki_set_ccr(OPER_AY_DI_16());
}


void M68k::op_move_16_toc_ix(void)
{
	m68ki_set_ccr(OPER_AY_IX_16());
}


void M68k::op_move_16_toc_aw(void)
{
	m68ki_set_ccr(OPER_AW_16());
}


void M68k::op_move_16_toc_al(void)
{
	m68ki_set_ccr(OPER_AL_16());
}


void M68k::op_move_16_toc_pcdi(void)
{
	m68ki_set_ccr(OPER_PCDI_16());
}


void M68k::op_move_16_toc_pcix(void)
{
	m68ki_set_ccr(OPER_PCIX_16());
}


void M68k::op_move_16_toc_i(void)
{
	m68ki_set_ccr(OPER_I_16());
}


void M68k::op_move_16_frs_d(void)
{
	if(CPU_TYPE_IS_000(CPU_TYPE) || FLAG_S)	/* NS990408 */
	{
		DY = MASK_OUT_BELOW_16(DY) | m68ki_get_sr();
		return;
	}
	m68ki_exception_privilege_violation();
}


void M68k::op_move_16_frs_ai(void)
{
	if(CPU_TYPE_IS_000(CPU_TYPE) || FLAG_S)	/* NS990408 */
	{
		uint ea = EA_AY_AI_16();
		m68ki_write_16(ea, m68ki_get_sr());
		return;
	}
	m68ki_exception_privilege_violation();
}


void M68k::op_move_16_frs_pi(void)
{
	if(CPU_TYPE_IS_000(CPU_TYPE) || FLAG_S)	/* NS990408 */
	{
		uint ea = EA_AY_PI_16();
		m68ki_write_16(ea, m68ki_get_sr());
		return;
	}
	m68ki_exception_privilege_violation();
}


void M68k::op_move_16_frs_pd(void)
{
	if(CPU_TYPE_IS_000(CPU_TYPE) || FLAG_S)	/* NS990408 */
	{
		uint ea = EA_AY_PD_16();
		m68ki_write_16(ea, m68ki_get_sr());
		return;
	}
	m68ki_exception_privilege_violation();
}


void M68k::op_move_16_frs_di(void)
{
	if(CPU_TYPE_IS_000(CPU_TYPE) || FLAG_S)	/* NS990408 */
	{
		uint ea = EA_AY_DI_16();
		m68ki_write_16(ea, m68ki_get_sr());
		return;
	}
	m68ki_exception_privilege_violation();
}


void M68k::op_move_16_frs_ix(void)
{
	if(CPU_TYPE_IS_000(CPU_TYPE) || FLAG_S)	/* NS990408 */
	{
		uint ea = EA_AY_IX_16();
		m68ki_write_16(ea, m68ki_get_sr());
		return;
	}
	m68ki_exception_privilege_violation();
}


void M68k::op_move_16_frs_aw(void)
{
	if(CPU_TYPE_IS_000(CPU_TYPE) || FLAG_S)	/* NS990408 */
	{
		uint ea = EA_AW_16();
		m68ki_write_16(ea, m68ki_get_sr());
		return;
	}
	m68ki_exception_privilege_violation();
}


void M68k::op_move_16_frs_al(void)
{
	if(CPU_TYPE_IS_000(CPU_TYPE) || FLAG_S)	/* NS990408 */
	{
		uint ea = EA_AL_16();
		m68ki_write_16(ea, m68ki_get_sr());
		return;
	}
	m68ki_exception_privilege_violation();
}


void M68k::op_move_16_tos_d(void)
{
	if(FLAG_S)
	{
		m68ki_set_sr(DY);
		return;
	}
	m68ki_exception_privilege_violation();
}


void M68k::op_move_16_tos_ai(void)
{
	if(FLAG_S)
	{
		uint new_sr = OPER_AY_AI_16();
		m68ki_trace_t0();			   /* auto-disable (see m68kcpu.h) */
		m68ki_set_sr(new_sr);
		return;
	}
	m68ki_exception_privilege_violation();
}


void M68k::op_move_16_tos_pi(void)
{
	if(FLAG_S)
	{
		uint new_sr = OPER_AY_PI_16();
		m68ki_trace_t0();			   /* auto-disable (see m68kcpu.h) */
		m68ki_set_sr(new_sr);
		return;
	}
	m68ki_exception_privilege_violation();
}


void M68k::op_move_16_tos_pd(void)
{
	if(FLAG_S)
	{
		uint new_sr = OPER_AY_PD_16();
		m68ki_trace_t0();			   /* auto-disable (see m68kcpu.h) */
		m68ki_set_sr(new_sr);
		return;
	}
	m68ki_exception_privilege_violation();
}


void M68k::op_move_16_tos_di(void)
{
	if(FLAG_S)
	{
		uint new_sr = OPER_AY_DI_16();
		m68ki_trace_t0();			   /* auto-disable (see m68kcpu.h) */
		m68ki_set_sr(new_sr);
		return;
	}
	m68ki_exception_privilege_violation();
}


void M68k::op_move_16_tos_ix(void)
{
	if(FLAG_S)
	{
		uint new_sr = OPER_AY_IX_16();
		m68ki_trace_t0();			   /* auto-disable (see m68kcpu.h) */
		m68ki_set_sr(new_sr);
		return;
	}
	m68ki_exception_privilege_violation();
}


void M68k::op_move_16_tos_aw(void)
{
	if(FLAG_S)
	{
		uint new_sr = OPER_AW_16();
		m68ki_trace_t0();			   /* auto-disable (see m68kcpu.h) */
		m68ki_set_sr(new_sr);
		return;
	}
	m68ki_exception_privilege_violation();
}


void M68k::op_move_16_tos_al(void)
{
	if(FLAG_S)
	{
		uint new_sr = OPER_AL_16();
		m68ki_trace_t0();			   /* auto-disable (see m68kcpu.h) */
		m68ki_set_sr(new_sr);
		return;
	}
	m68ki_exception_privilege_violation();
}


void M68k::op_move_16_tos_pcdi(void)
{
	if(FLAG_S)
	{
		uint new_sr = OPER_PCDI_16();
		m68ki_trace_t0();			   /* auto-disable (see m68kcpu.h) */
		m68ki_set_sr(new_sr);
		return;
	}
	m68ki_exception_privilege_violation();
}


void M68k::op_move_16_tos_pcix(void)
{
	if(FLAG_S)
	{
		uint new_sr = OPER_PCIX_16();
		m68ki_trace_t0();			   /* auto-disable (see m68kcpu.h) */
		m68ki_set_sr(new_sr);
		return;
	}
	m68ki_exception_privilege_violation();
}


void M68k::op_move_16_tos_i(void)
{
	if(FLAG_S)
	{
		uint new_sr = OPER_I_16();
		m68ki_trace_t0();			   /* auto-disable (see m68kcpu.h) */
		m68ki_set_sr(new_sr);
		return;
	}
	m68ki_exception_privilege_violation();
}


void M68k::op_move_32_fru(void)
{
	if(FLAG_S)
	{
		AY = REG_USP;
		return;
	}
	m68ki_exception_privilege_violation();
}


void M68k::op_move_32_tou(void)
{
	if(FLAG_S)
	{
		m68ki_trace_t0();			   /* auto-disable (see m68kcpu.h) */
		REG_USP = AY;
		return;
	}
	m68ki_exception_privilege_violation();
}


void M68k::op_movec_32_cr(void)
{
	if(CPU_TYPE_IS_010_PLUS(CPU_TYPE))
	{
		if(FLAG_S)
		{
			uint word2 = OPER_I_16();

			m68ki_trace_t0();		   /* auto-disable (see m68kcpu.h) */
			switch (word2 & 0xfff)
			{
			case 0x000:			   /* SFC */
				REG_DA[(word2 >> 12) & 15] = REG_SFC;
				return;
			case 0x001:			   /* DFC */
				REG_DA[(word2 >> 12) & 15] = REG_DFC;
				return;
			case 0x002:			   /* CACR */
				if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
				{
					REG_DA[(word2 >> 12) & 15] = REG_CACR;
					return;
				}
				return;
			case 0x800:			   /* USP */
				REG_DA[(word2 >> 12) & 15] = REG_USP;
				return;
			case 0x801:			   /* VBR */
				REG_DA[(word2 >> 12) & 15] = REG_VBR;
				return;
			case 0x802:			   /* CAAR */
				if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
				{
					REG_DA[(word2 >> 12) & 15] = REG_CAAR;
					return;
				}
				m68ki_exception_illegal();
				break;
			case 0x803:			   /* MSP */
				if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
				{
					REG_DA[(word2 >> 12) & 15] = FLAG_M ? REG_SP : REG_MSP;
					return;
				}
				m68ki_exception_illegal();
				return;
			case 0x804:			   /* ISP */
				if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
				{
					REG_DA[(word2 >> 12) & 15] = FLAG_M ? REG_ISP : REG_SP;
					return;
				}
				m68ki_exception_illegal();
				return;
			case 0x003:				/* TC */
				if(CPU_TYPE_IS_040_PLUS(CPU_TYPE))
				{
					/* TODO */
					return;
				}
				m68ki_exception_illegal();
				return;
			case 0x004:				/* ITT0 */
				if(CPU_TYPE_IS_040_PLUS(CPU_TYPE))
				{
					/* TODO */
					return;
				}
				m68ki_exception_illegal();
				return;
			case 0x005:				/* ITT1 */
				if(CPU_TYPE_IS_040_PLUS(CPU_TYPE))
				{
					/* TODO */
					return;
				}
				m68ki_exception_illegal();
				return;
			case 0x006:				/* DTT0 */
				if(CPU_TYPE_IS_040_PLUS(CPU_TYPE))
				{
					/* TODO */
					return;
				}
				m68ki_exception_illegal();
				return;
			case 0x007:				/* DTT1 */
				if(CPU_TYPE_IS_040_PLUS(CPU_TYPE))
				{
					/* TODO */
					return;
				}
				m68ki_exception_illegal();
				return;
			case 0x805:				/* MMUSR */
				if(CPU_TYPE_IS_040_PLUS(CPU_TYPE))
				{
					/* TODO */
					return;
				}
				m68ki_exception_illegal();
				return;
			case 0x806:				/* URP */
				if(CPU_TYPE_IS_040_PLUS(CPU_TYPE))
				{
					/* TODO */
					return;
				}
				m68ki_exception_illegal();
				return;
			case 0x807:				/* SRP */
				if(CPU_TYPE_IS_040_PLUS(CPU_TYPE))
				{
					/* TODO */
					return;
				}
				m68ki_exception_illegal();
				return;
			default:
				m68ki_exception_illegal();
				return;
			}
		}
		m68ki_exception_privilege_violation();
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_movec_32_rc(void)
{
	if(CPU_TYPE_IS_010_PLUS(CPU_TYPE))
	{
		if(FLAG_S)
		{
			uint word2 = OPER_I_16();

			m68ki_trace_t0();		   /* auto-disable (see m68kcpu.h) */
			switch (word2 & 0xfff)
			{
			case 0x000:			   /* SFC */
				REG_SFC = REG_DA[(word2 >> 12) & 15] & 7;
				return;
			case 0x001:			   /* DFC */
				REG_DFC = REG_DA[(word2 >> 12) & 15] & 7;
				return;
			case 0x002:			   /* CACR */
				/* Only EC020 and later have CACR */
				if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
				{
					/* 68030 can write all bits except 5-7, 040 can write all */
					if (CPU_TYPE_IS_040_PLUS(CPU_TYPE))
					{
						REG_CACR = REG_DA[(word2 >> 12) & 15];
					}
					else if (CPU_TYPE_IS_030_PLUS(CPU_TYPE))
					{
						REG_CACR = REG_DA[(word2 >> 12) & 15] & 0xff1f;
					}
					else
					{
						REG_CACR = REG_DA[(word2 >> 12) & 15] & 0x0f;
					}
					return;
				}
				m68ki_exception_illegal();
				return;
			case 0x800:			   /* USP */
				REG_USP = REG_DA[(word2 >> 12) & 15];
				return;
			case 0x801:			   /* VBR */
				REG_VBR = REG_DA[(word2 >> 12) & 15];
				return;
			case 0x802:			   /* CAAR */
				if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
				{
					REG_CAAR = REG_DA[(word2 >> 12) & 15];
					return;
				}
				m68ki_exception_illegal();
				return;
			case 0x803:			   /* MSP */
				if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
				{
					/* we are in supervisor mode so just check for M flag */
					if(!FLAG_M)
					{
						REG_MSP = REG_DA[(word2 >> 12) & 15];
						return;
					}
					REG_SP = REG_DA[(word2 >> 12) & 15];
					return;
				}
				m68ki_exception_illegal();
				return;
			case 0x804:			   /* ISP */
				if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
				{
					if(!FLAG_M)
					{
						REG_SP = REG_DA[(word2 >> 12) & 15];
						return;
					}
					REG_ISP = REG_DA[(word2 >> 12) & 15];
					return;
				}
				m68ki_exception_illegal();
				return;
			case 0x003:			/* TC */
				if (CPU_TYPE_IS_040_PLUS(CPU_TYPE))
				{
					/* TODO */
					return;
				}
				m68ki_exception_illegal();
				return;
			case 0x004:			/* ITT0 */
				if (CPU_TYPE_IS_040_PLUS(CPU_TYPE))
				{
					/* TODO */
					return;
				}
				m68ki_exception_illegal();
				return;
			case 0x005:			/* ITT1 */
				if (CPU_TYPE_IS_040_PLUS(CPU_TYPE))
				{
					/* TODO */
					return;
				}
				m68ki_exception_illegal();
				return;
			case 0x006:			/* DTT0 */
				if (CPU_TYPE_IS_040_PLUS(CPU_TYPE))
				{
					/* TODO */
					return;
				}
				m68ki_exception_illegal();
				return;
			case 0x007:			/* DTT1 */
				if (CPU_TYPE_IS_040_PLUS(CPU_TYPE))
				{
					/* TODO */
					return;
				}
				m68ki_exception_illegal();
				return;
			case 0x805:			/* MMUSR */
				if (CPU_TYPE_IS_040_PLUS(CPU_TYPE))
				{
					/* TODO */
					return;
				}
				m68ki_exception_illegal();
				return;
			case 0x806:			/* URP */
				if (CPU_TYPE_IS_040_PLUS(CPU_TYPE))
				{
					/* TODO */
					return;
				}
				m68ki_exception_illegal();
				return;
			case 0x807:			/* SRP */
				if (CPU_TYPE_IS_040_PLUS(CPU_TYPE))
				{
					/* TODO */
					return;
				}
				m68ki_exception_illegal();
				return;
			default:
				m68ki_exception_illegal();
				return;
			}
		}
		m68ki_exception_privilege_violation();
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_movem_16_re_pd(void)
{
	uint i = 0;
	uint register_list = OPER_I_16();
	uint ea = AY;
	uint count = 0;

	for(; i < 16; i++)
		if(register_list & (1 << i))
		{
			ea -= 2;
			m68ki_write_16(ea, MASK_OUT_ABOVE_16(REG_DA[15-i]));
			count++;
		}
	AY = ea;

	USE_CYCLES(count<<CYC_MOVEM_W);
}


void M68k::op_movem_16_re_ai(void)
{
	uint i = 0;
	uint register_list = OPER_I_16();
	uint ea = EA_AY_AI_16();
	uint count = 0;

	for(; i < 16; i++)
		if(register_list & (1 << i))
		{
			m68ki_write_16(ea, MASK_OUT_ABOVE_16(REG_DA[i]));
			ea += 2;
			count++;
		}

	USE_CYCLES(count<<CYC_MOVEM_W);
}


void M68k::op_movem_16_re_di(void)
{
	uint i = 0;
	uint register_list = OPER_I_16();
	uint ea = EA_AY_DI_16();
	uint count = 0;

	for(; i < 16; i++)
		if(register_list & (1 << i))
		{
			m68ki_write_16(ea, MASK_OUT_ABOVE_16(REG_DA[i]));
			ea += 2;
			count++;
		}

	USE_CYCLES(count<<CYC_MOVEM_W);
}


void M68k::op_movem_16_re_ix(void)
{
	uint i = 0;
	uint register_list = OPER_I_16();
	uint ea = EA_AY_IX_16();
	uint count = 0;

	for(; i < 16; i++)
		if(register_list & (1 << i))
		{
			m68ki_write_16(ea, MASK_OUT_ABOVE_16(REG_DA[i]));
			ea += 2;
			count++;
		}

	USE_CYCLES(count<<CYC_MOVEM_W);
}


void M68k::op_movem_16_re_aw(void)
{
	uint i = 0;
	uint register_list = OPER_I_16();
	uint ea = EA_AW_16();
	uint count = 0;

	for(; i < 16; i++)
		if(register_list & (1 << i))
		{
			m68ki_write_16(ea, MASK_OUT_ABOVE_16(REG_DA[i]));
			ea += 2;
			count++;
		}

	USE_CYCLES(count<<CYC_MOVEM_W);
}


void M68k::op_movem_16_re_al(void)
{
	uint i = 0;
	uint register_list = OPER_I_16();
	uint ea = EA_AL_16();
	uint count = 0;

	for(; i < 16; i++)
		if(register_list & (1 << i))
		{
			m68ki_write_16(ea, MASK_OUT_ABOVE_16(REG_DA[i]));
			ea += 2;
			count++;
		}

	USE_CYCLES(count<<CYC_MOVEM_W);
}


void M68k::op_movem_32_re_pd(void)
{
	uint i = 0;
	uint register_list = OPER_I_16();
	uint ea = AY;
	uint count = 0;

	for(; i < 16; i++)
		if(register_list & (1 << i))
		{
			ea -= 4;
			m68ki_write_16(ea+2, REG_DA[15-i] & 0xFFFF );
			m68ki_write_16(ea, (REG_DA[15-i] >> 16) & 0xFFFF );
			count++;
		}
	AY = ea;

	USE_CYCLES(count<<CYC_MOVEM_L);
}


void M68k::op_movem_32_re_ai(void)
{
	uint i = 0;
	uint register_list = OPER_I_16();
	uint ea = EA_AY_AI_32();
	uint count = 0;

	for(; i < 16; i++)
		if(register_list & (1 << i))
		{
			m68ki_write_32(ea, REG_DA[i]);
			ea += 4;
			count++;
		}

	USE_CYCLES(count<<CYC_MOVEM_L);
}


void M68k::op_movem_32_re_di(void)
{
	uint i = 0;
	uint register_list = OPER_I_16();
	uint ea = EA_AY_DI_32();
	uint count = 0;

	for(; i < 16; i++)
		if(register_list & (1 << i))
		{
			m68ki_write_32(ea, REG_DA[i]);
			ea += 4;
			count++;
		}

	USE_CYCLES(count<<CYC_MOVEM_L);
}


void M68k::op_movem_32_re_ix(void)
{
	uint i = 0;
	uint register_list = OPER_I_16();
	uint ea = EA_AY_IX_32();
	uint count = 0;

	for(; i < 16; i++)
		if(register_list & (1 << i))
		{
			m68ki_write_32(ea, REG_DA[i]);
			ea += 4;
			count++;
		}

	USE_CYCLES(count<<CYC_MOVEM_L);
}


void M68k::op_movem_32_re_aw(void)
{
	uint i = 0;
	uint register_list = OPER_I_16();
	uint ea = EA_AW_32();
	uint count = 0;

	for(; i < 16; i++)
		if(register_list & (1 << i))
		{
			m68ki_write_32(ea, REG_DA[i]);
			ea += 4;
			count++;
		}

	USE_CYCLES(count<<CYC_MOVEM_L);
}


void M68k::op_movem_32_re_al(void)
{
	uint i = 0;
	uint register_list = OPER_I_16();
	uint ea = EA_AL_32();
	uint count = 0;

	for(; i < 16; i++)
		if(register_list & (1 << i))
		{
			m68ki_write_32(ea, REG_DA[i]);
			ea += 4;
			count++;
		}

	USE_CYCLES(count<<CYC_MOVEM_L);
}


void M68k::op_movem_16_er_pi(void)
{
	uint i = 0;
	uint register_list = OPER_I_16();
	uint ea = AY;
	uint count = 0;

	for(; i < 16; i++)
		if(register_list & (1 << i))
		{
			REG_DA[i] = MAKE_INT_16(MASK_OUT_ABOVE_16(m68ki_read_16(ea)));
			ea += 2;
			count++;
		}
	AY = ea;

	USE_CYCLES(count<<CYC_MOVEM_W);
}


void M68k::op_movem_16_er_pcdi(void)
{
	uint i = 0;
	uint register_list = OPER_I_16();
	uint ea = EA_PCDI_16();
	uint count = 0;

	for(; i < 16; i++)
		if(register_list & (1 << i))
		{
			REG_DA[i] = MAKE_INT_16(MASK_OUT_ABOVE_16(m68ki_read_pcrel_16(ea)));
			ea += 2;
			count++;
		}

	USE_CYCLES(count<<CYC_MOVEM_W);
}


void M68k::op_movem_16_er_pcix(void)
{
	uint i = 0;
	uint register_list = OPER_I_16();
	uint ea = EA_PCIX_16();
	uint count = 0;

	for(; i < 16; i++)
		if(register_list & (1 << i))
		{
			REG_DA[i] = MAKE_INT_16(MASK_OUT_ABOVE_16(m68ki_read_pcrel_16(ea)));
			ea += 2;
			count++;
		}

	USE_CYCLES(count<<CYC_MOVEM_W);
}


void M68k::op_movem_16_er_ai(void)
{
	uint i = 0;
	uint register_list = OPER_I_16();
	uint ea = EA_AY_AI_16();
	uint count = 0;

	for(; i < 16; i++)
		if(register_list & (1 << i))
		{
			REG_DA[i] = MAKE_INT_16(MASK_OUT_ABOVE_16(m68ki_read_16(ea)));
			ea += 2;
			count++;
		}

	USE_CYCLES(count<<CYC_MOVEM_W);
}


void M68k::op_movem_16_er_di(void)
{
	uint i = 0;
	uint register_list = OPER_I_16();
	uint ea = EA_AY_DI_16();
	uint count = 0;

	for(; i < 16; i++)
		if(register_list & (1 << i))
		{
			REG_DA[i] = MAKE_INT_16(MASK_OUT_ABOVE_16(m68ki_read_16(ea)));
			ea += 2;
			count++;
		}

	USE_CYCLES(count<<CYC_MOVEM_W);
}


void M68k::op_movem_16_er_ix(void)
{
	uint i = 0;
	uint register_list = OPER_I_16();
	uint ea = EA_AY_IX_16();
	uint count = 0;

	for(; i < 16; i++)
		if(register_list & (1 << i))
		{
			REG_DA[i] = MAKE_INT_16(MASK_OUT_ABOVE_16(m68ki_read_16(ea)));
			ea += 2;
			count++;
		}

	USE_CYCLES(count<<CYC_MOVEM_W);
}


void M68k::op_movem_16_er_aw(void)
{
	uint i = 0;
	uint register_list = OPER_I_16();
	uint ea = EA_AW_16();
	uint count = 0;

	for(; i < 16; i++)
		if(register_list & (1 << i))
		{
			REG_DA[i] = MAKE_INT_16(MASK_OUT_ABOVE_16(m68ki_read_16(ea)));
			ea += 2;
			count++;
		}

	USE_CYCLES(count<<CYC_MOVEM_W);
}


void M68k::op_movem_16_er_al(void)
{
	uint i = 0;
	uint register_list = OPER_I_16();
	uint ea = EA_AL_16();
	uint count = 0;

	for(; i < 16; i++)
		if(register_list & (1 << i))
		{
			REG_DA[i] = MAKE_INT_16(MASK_OUT_ABOVE_16(m68ki_read_16(ea)));
			ea += 2;
			count++;
		}

	USE_CYCLES(count<<CYC_MOVEM_W);
}


void M68k::op_movem_32_er_pi(void)
{
	uint i = 0;
	uint register_list = OPER_I_16();
	uint ea = AY;
	uint count = 0;

	for(; i < 16; i++)
		if(register_list & (1 << i))
		{
			REG_DA[i] = m68ki_read_32(ea);
			ea += 4;
			count++;
		}
	AY = ea;

	USE_CYCLES(count<<CYC_MOVEM_L);
}


void M68k::op_movem_32_er_pcdi(void)
{
	uint i = 0;
	uint register_list = OPER_I_16();
	uint ea = EA_PCDI_32();
	uint count = 0;

	for(; i < 16; i++)
		if(register_list & (1 << i))
		{
			REG_DA[i] = m68ki_read_pcrel_32(ea);
			ea += 4;
			count++;
		}

	USE_CYCLES(count<<CYC_MOVEM_L);
}


void M68k::op_movem_32_er_pcix(void)
{
	uint i = 0;
	uint register_list = OPER_I_16();
	uint ea = EA_PCIX_32();
	uint count = 0;

	for(; i < 16; i++)
		if(register_list & (1 << i))
		{
			REG_DA[i] = m68ki_read_pcrel_32(ea);
			ea += 4;
			count++;
		}

	USE_CYCLES(count<<CYC_MOVEM_L);
}


void M68k::op_movem_32_er_ai(void)
{
	uint i = 0;
	uint register_list = OPER_I_16();
	uint ea = EA_AY_AI_32();
	uint count = 0;

	for(; i < 16; i++)
		if(register_list & (1 << i))
		{
			REG_DA[i] = m68ki_read_32(ea);
			ea += 4;
			count++;
		}

	USE_CYCLES(count<<CYC_MOVEM_L);
}


void M68k::op_movem_32_er_di(void)
{
	uint i = 0;
	uint register_list = OPER_I_16();
	uint ea = EA_AY_DI_32();
	uint count = 0;

	for(; i < 16; i++)
		if(register_list & (1 << i))
		{
			REG_DA[i] = m68ki_read_32(ea);
			ea += 4;
			count++;
		}

	USE_CYCLES(count<<CYC_MOVEM_L);
}


void M68k::op_movem_32_er_ix(void)
{
	uint i = 0;
	uint register_list = OPER_I_16();
	uint ea = EA_AY_IX_32();
	uint count = 0;

	for(; i < 16; i++)
		if(register_list & (1 << i))
		{
			REG_DA[i] = m68ki_read_32(ea);
			ea += 4;
			count++;
		}

	USE_CYCLES(count<<CYC_MOVEM_L);
}


void M68k::op_movem_32_er_aw(void)
{
	uint i = 0;
	uint register_list = OPER_I_16();
	uint ea = EA_AW_32();
	uint count = 0;

	for(; i < 16; i++)
		if(register_list & (1 << i))
		{
			REG_DA[i] = m68ki_read_32(ea);
			ea += 4;
			count++;
		}

	USE_CYCLES(count<<CYC_MOVEM_L);
}


void M68k::op_movem_32_er_al(void)
{
	uint i = 0;
	uint register_list = OPER_I_16();
	uint ea = EA_AL_32();
	uint count = 0;

	for(; i < 16; i++)
		if(register_list & (1 << i))
		{
			REG_DA[i] = m68ki_read_32(ea);
			ea += 4;
			count++;
		}

	USE_CYCLES(count<<CYC_MOVEM_L);
}


void M68k::op_movep_16_re(void)
{
	uint ea = EA_AY_DI_16();
	uint src = DX;

	m68ki_write_8(ea, MASK_OUT_ABOVE_8(src >> 8));
	m68ki_write_8(ea += 2, MASK_OUT_ABOVE_8(src));
}


void M68k::op_movep_32_re(void)
{
	uint ea = EA_AY_DI_32();
	uint src = DX;

	m68ki_write_8(ea, MASK_OUT_ABOVE_8(src >> 24));
	m68ki_write_8(ea += 2, MASK_OUT_ABOVE_8(src >> 16));
	m68ki_write_8(ea += 2, MASK_OUT_ABOVE_8(src >> 8));
	m68ki_write_8(ea += 2, MASK_OUT_ABOVE_8(src));
}


void M68k::op_movep_16_er(void)
{
	uint ea = EA_AY_DI_16();
	uint* r_dst = &DX;

	*r_dst = MASK_OUT_BELOW_16(*r_dst) | ((m68ki_read_8(ea) << 8) + m68ki_read_8(ea + 2));
}


void M68k::op_movep_32_er(void)
{
	uint ea = EA_AY_DI_32();

	DX = (m68ki_read_8(ea) << 24) + (m68ki_read_8(ea + 2) << 16)
		+ (m68ki_read_8(ea + 4) << 8) + m68ki_read_8(ea + 6);
}


void M68k::op_moves_8_ai(void)
{
	if(CPU_TYPE_IS_010_PLUS(CPU_TYPE))
	{
		if(FLAG_S)
		{
			uint word2 = OPER_I_16();
			uint ea = EA_AY_AI_8();

			m68ki_trace_t0();			   /* auto-disable (see m68kcpu.h) */
			if(BIT_B(word2))		   /* Register to memory */
			{
				m68ki_write_8_fc(ea, REG_DFC, MASK_OUT_ABOVE_8(REG_DA[(word2 >> 12) & 15]));
				return;
			}
			if(BIT_F(word2))		   /* Memory to address register */
			{
				REG_A[(word2 >> 12) & 7] = MAKE_INT_8(m68ki_read_8_fc(ea, REG_SFC));
				if(CPU_TYPE_IS_020_VARIANT(CPU_TYPE))
					USE_CYCLES(2);
				return;
			}
			/* Memory to data register */
			REG_D[(word2 >> 12) & 7] = MASK_OUT_BELOW_8(REG_D[(word2 >> 12) & 7]) | m68ki_read_8_fc(ea, REG_SFC);
			if(CPU_TYPE_IS_020_VARIANT(CPU_TYPE))
				USE_CYCLES(2);
			return;
		}
		m68ki_exception_privilege_violation();
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_moves_8_pi(void)
{
	if(CPU_TYPE_IS_010_PLUS(CPU_TYPE))
	{
		if(FLAG_S)
		{
			uint word2 = OPER_I_16();
			uint ea = EA_AY_PI_8();

			m68ki_trace_t0();			   /* auto-disable (see m68kcpu.h) */
			if(BIT_B(word2))		   /* Register to memory */
			{
				m68ki_write_8_fc(ea, REG_DFC, MASK_OUT_ABOVE_8(REG_DA[(word2 >> 12) & 15]));
				return;
			}
			if(BIT_F(word2))		   /* Memory to address register */
			{
				REG_A[(word2 >> 12) & 7] = MAKE_INT_8(m68ki_read_8_fc(ea, REG_SFC));
				if(CPU_TYPE_IS_020_VARIANT(CPU_TYPE))
					USE_CYCLES(2);
				return;
			}
			/* Memory to data register */
			REG_D[(word2 >> 12) & 7] = MASK_OUT_BELOW_8(REG_D[(word2 >> 12) & 7]) | m68ki_read_8_fc(ea, REG_SFC);
			if(CPU_TYPE_IS_020_VARIANT(CPU_TYPE))
				USE_CYCLES(2);
			return;
		}
		m68ki_exception_privilege_violation();
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_moves_8_pi7(void)
{
	if(CPU_TYPE_IS_010_PLUS(CPU_TYPE))
	{
		if(FLAG_S)
		{
			uint word2 = OPER_I_16();
			uint ea = EA_A7_PI_8();

			m68ki_trace_t0();			   /* auto-disable (see m68kcpu.h) */
			if(BIT_B(word2))		   /* Register to memory */
			{
				m68ki_write_8_fc(ea, REG_DFC, MASK_OUT_ABOVE_8(REG_DA[(word2 >> 12) & 15]));
				return;
			}
			if(BIT_F(word2))		   /* Memory to address register */
			{
				REG_A[(word2 >> 12) & 7] = MAKE_INT_8(m68ki_read_8_fc(ea, REG_SFC));
				if(CPU_TYPE_IS_020_VARIANT(CPU_TYPE))
					USE_CYCLES(2);
				return;
			}
			/* Memory to data register */
			REG_D[(word2 >> 12) & 7] = MASK_OUT_BELOW_8(REG_D[(word2 >> 12) & 7]) | m68ki_read_8_fc(ea, REG_SFC);
			if(CPU_TYPE_IS_020_VARIANT(CPU_TYPE))
				USE_CYCLES(2);
			return;
		}
		m68ki_exception_privilege_violation();
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_moves_8_pd(void)
{
	if(CPU_TYPE_IS_010_PLUS(CPU_TYPE))
	{
		if(FLAG_S)
		{
			uint word2 = OPER_I_16();
			uint ea = EA_AY_PD_8();

			m68ki_trace_t0();			   /* auto-disable (see m68kcpu.h) */
			if(BIT_B(word2))		   /* Register to memory */
			{
				m68ki_write_8_fc(ea, REG_DFC, MASK_OUT_ABOVE_8(REG_DA[(word2 >> 12) & 15]));
				return;
			}
			if(BIT_F(word2))		   /* Memory to address register */
			{
				REG_A[(word2 >> 12) & 7] = MAKE_INT_8(m68ki_read_8_fc(ea, REG_SFC));
				if(CPU_TYPE_IS_020_VARIANT(CPU_TYPE))
					USE_CYCLES(2);
				return;
			}
			/* Memory to data register */
			REG_D[(word2 >> 12) & 7] = MASK_OUT_BELOW_8(REG_D[(word2 >> 12) & 7]) | m68ki_read_8_fc(ea, REG_SFC);
			if(CPU_TYPE_IS_020_VARIANT(CPU_TYPE))
				USE_CYCLES(2);
			return;
		}
		m68ki_exception_privilege_violation();
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_moves_8_pd7(void)
{
	if(CPU_TYPE_IS_010_PLUS(CPU_TYPE))
	{
		if(FLAG_S)
		{
			uint word2 = OPER_I_16();
			uint ea = EA_A7_PD_8();

			m68ki_trace_t0();			   /* auto-disable (see m68kcpu.h) */
			if(BIT_B(word2))		   /* Register to memory */
			{
				m68ki_write_8_fc(ea, REG_DFC, MASK_OUT_ABOVE_8(REG_DA[(word2 >> 12) & 15]));
				return;
			}
			if(BIT_F(word2))		   /* Memory to address register */
			{
				REG_A[(word2 >> 12) & 7] = MAKE_INT_8(m68ki_read_8_fc(ea, REG_SFC));
				if(CPU_TYPE_IS_020_VARIANT(CPU_TYPE))
					USE_CYCLES(2);
				return;
			}
			/* Memory to data register */
			REG_D[(word2 >> 12) & 7] = MASK_OUT_BELOW_8(REG_D[(word2 >> 12) & 7]) | m68ki_read_8_fc(ea, REG_SFC);
			if(CPU_TYPE_IS_020_VARIANT(CPU_TYPE))
				USE_CYCLES(2);
			return;
		}
		m68ki_exception_privilege_violation();
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_moves_8_di(void)
{
	if(CPU_TYPE_IS_010_PLUS(CPU_TYPE))
	{
		if(FLAG_S)
		{
			uint word2 = OPER_I_16();
			uint ea = EA_AY_DI_8();

			m68ki_trace_t0();			   /* auto-disable (see m68kcpu.h) */
			if(BIT_B(word2))		   /* Register to memory */
			{
				m68ki_write_8_fc(ea, REG_DFC, MASK_OUT_ABOVE_8(REG_DA[(word2 >> 12) & 15]));
				return;
			}
			if(BIT_F(word2))		   /* Memory to address register */
			{
				REG_A[(word2 >> 12) & 7] = MAKE_INT_8(m68ki_read_8_fc(ea, REG_SFC));
				if(CPU_TYPE_IS_020_VARIANT(CPU_TYPE))
					USE_CYCLES(2);
				return;
			}
			/* Memory to data register */
			REG_D[(word2 >> 12) & 7] = MASK_OUT_BELOW_8(REG_D[(word2 >> 12) & 7]) | m68ki_read_8_fc(ea, REG_SFC);
			if(CPU_TYPE_IS_020_VARIANT(CPU_TYPE))
				USE_CYCLES(2);
			return;
		}
		m68ki_exception_privilege_violation();
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_moves_8_ix(void)
{
	if(CPU_TYPE_IS_010_PLUS(CPU_TYPE))
	{
		if(FLAG_S)
		{
			uint word2 = OPER_I_16();
			uint ea = EA_AY_IX_8();

			m68ki_trace_t0();			   /* auto-disable (see m68kcpu.h) */
			if(BIT_B(word2))		   /* Register to memory */
			{
				m68ki_write_8_fc(ea, REG_DFC, MASK_OUT_ABOVE_8(REG_DA[(word2 >> 12) & 15]));
				return;
			}
			if(BIT_F(word2))		   /* Memory to address register */
			{
				REG_A[(word2 >> 12) & 7] = MAKE_INT_8(m68ki_read_8_fc(ea, REG_SFC));
				if(CPU_TYPE_IS_020_VARIANT(CPU_TYPE))
					USE_CYCLES(2);
				return;
			}
			/* Memory to data register */
			REG_D[(word2 >> 12) & 7] = MASK_OUT_BELOW_8(REG_D[(word2 >> 12) & 7]) | m68ki_read_8_fc(ea, REG_SFC);
			if(CPU_TYPE_IS_020_VARIANT(CPU_TYPE))
				USE_CYCLES(2);
			return;
		}
		m68ki_exception_privilege_violation();
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_moves_8_aw(void)
{
	if(CPU_TYPE_IS_010_PLUS(CPU_TYPE))
	{
		if(FLAG_S)
		{
			uint word2 = OPER_I_16();
			uint ea = EA_AW_8();

			m68ki_trace_t0();			   /* auto-disable (see m68kcpu.h) */
			if(BIT_B(word2))		   /* Register to memory */
			{
				m68ki_write_8_fc(ea, REG_DFC, MASK_OUT_ABOVE_8(REG_DA[(word2 >> 12) & 15]));
				return;
			}
			if(BIT_F(word2))		   /* Memory to address register */
			{
				REG_A[(word2 >> 12) & 7] = MAKE_INT_8(m68ki_read_8_fc(ea, REG_SFC));
				if(CPU_TYPE_IS_020_VARIANT(CPU_TYPE))
					USE_CYCLES(2);
				return;
			}
			/* Memory to data register */
			REG_D[(word2 >> 12) & 7] = MASK_OUT_BELOW_8(REG_D[(word2 >> 12) & 7]) | m68ki_read_8_fc(ea, REG_SFC);
			if(CPU_TYPE_IS_020_VARIANT(CPU_TYPE))
				USE_CYCLES(2);
			return;
		}
		m68ki_exception_privilege_violation();
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_moves_8_al(void)
{
	if(CPU_TYPE_IS_010_PLUS(CPU_TYPE))
	{
		if(FLAG_S)
		{
			uint word2 = OPER_I_16();
			uint ea = EA_AL_8();

			m68ki_trace_t0();			   /* auto-disable (see m68kcpu.h) */
			if(BIT_B(word2))		   /* Register to memory */
			{
				m68ki_write_8_fc(ea, REG_DFC, MASK_OUT_ABOVE_8(REG_DA[(word2 >> 12) & 15]));
				return;
			}
			if(BIT_F(word2))		   /* Memory to address register */
			{
				REG_A[(word2 >> 12) & 7] = MAKE_INT_8(m68ki_read_8_fc(ea, REG_SFC));
				if(CPU_TYPE_IS_020_VARIANT(CPU_TYPE))
					USE_CYCLES(2);
				return;
			}
			/* Memory to data register */
			REG_D[(word2 >> 12) & 7] = MASK_OUT_BELOW_8(REG_D[(word2 >> 12) & 7]) | m68ki_read_8_fc(ea, REG_SFC);
			if(CPU_TYPE_IS_020_VARIANT(CPU_TYPE))
				USE_CYCLES(2);
			return;
		}
		m68ki_exception_privilege_violation();
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_moves_16_ai(void)
{
	if(CPU_TYPE_IS_010_PLUS(CPU_TYPE))
	{
		if(FLAG_S)
		{
			uint word2 = OPER_I_16();
			uint ea = EA_AY_AI_16();

			m68ki_trace_t0();			   /* auto-disable (see m68kcpu.h) */
			if(BIT_B(word2))		   /* Register to memory */
			{
				m68ki_write_16_fc(ea, REG_DFC, MASK_OUT_ABOVE_16(REG_DA[(word2 >> 12) & 15]));
				return;
			}
			if(BIT_F(word2))		   /* Memory to address register */
			{
				REG_A[(word2 >> 12) & 7] = MAKE_INT_16(m68ki_read_16_fc(ea, REG_SFC));
				if(CPU_TYPE_IS_020_VARIANT(CPU_TYPE))
					USE_CYCLES(2);
				return;
			}
			/* Memory to data register */
			REG_D[(word2 >> 12) & 7] = MASK_OUT_BELOW_16(REG_D[(word2 >> 12) & 7]) | m68ki_read_16_fc(ea, REG_SFC);
			if(CPU_TYPE_IS_020_VARIANT(CPU_TYPE))
				USE_CYCLES(2);
			return;
		}
		m68ki_exception_privilege_violation();
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_moves_16_pi(void)
{
	if(CPU_TYPE_IS_010_PLUS(CPU_TYPE))
	{
		if(FLAG_S)
		{
			uint word2 = OPER_I_16();
			uint ea = EA_AY_PI_16();

			m68ki_trace_t0();			   /* auto-disable (see m68kcpu.h) */
			if(BIT_B(word2))		   /* Register to memory */
			{
				m68ki_write_16_fc(ea, REG_DFC, MASK_OUT_ABOVE_16(REG_DA[(word2 >> 12) & 15]));
				return;
			}
			if(BIT_F(word2))		   /* Memory to address register */
			{
				REG_A[(word2 >> 12) & 7] = MAKE_INT_16(m68ki_read_16_fc(ea, REG_SFC));
				if(CPU_TYPE_IS_020_VARIANT(CPU_TYPE))
					USE_CYCLES(2);
				return;
			}
			/* Memory to data register */
			REG_D[(word2 >> 12) & 7] = MASK_OUT_BELOW_16(REG_D[(word2 >> 12) & 7]) | m68ki_read_16_fc(ea, REG_SFC);
			if(CPU_TYPE_IS_020_VARIANT(CPU_TYPE))
				USE_CYCLES(2);
			return;
		}
		m68ki_exception_privilege_violation();
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_moves_16_pd(void)
{
	if(CPU_TYPE_IS_010_PLUS(CPU_TYPE))
	{
		if(FLAG_S)
		{
			uint word2 = OPER_I_16();
			uint ea = EA_AY_PD_16();

			m68ki_trace_t0();			   /* auto-disable (see m68kcpu.h) */
			if(BIT_B(word2))		   /* Register to memory */
			{
				m68ki_write_16_fc(ea, REG_DFC, MASK_OUT_ABOVE_16(REG_DA[(word2 >> 12) & 15]));
				return;
			}
			if(BIT_F(word2))		   /* Memory to address register */
			{
				REG_A[(word2 >> 12) & 7] = MAKE_INT_16(m68ki_read_16_fc(ea, REG_SFC));
				if(CPU_TYPE_IS_020_VARIANT(CPU_TYPE))
					USE_CYCLES(2);
				return;
			}
			/* Memory to data register */
			REG_D[(word2 >> 12) & 7] = MASK_OUT_BELOW_16(REG_D[(word2 >> 12) & 7]) | m68ki_read_16_fc(ea, REG_SFC);
			if(CPU_TYPE_IS_020_VARIANT(CPU_TYPE))
				USE_CYCLES(2);
			return;
		}
		m68ki_exception_privilege_violation();
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_moves_16_di(void)
{
	if(CPU_TYPE_IS_010_PLUS(CPU_TYPE))
	{
		if(FLAG_S)
		{
			uint word2 = OPER_I_16();
			uint ea = EA_AY_DI_16();

			m68ki_trace_t0();			   /* auto-disable (see m68kcpu.h) */
			if(BIT_B(word2))		   /* Register to memory */
			{
				m68ki_write_16_fc(ea, REG_DFC, MASK_OUT_ABOVE_16(REG_DA[(word2 >> 12) & 15]));
				return;
			}
			if(BIT_F(word2))		   /* Memory to address register */
			{
				REG_A[(word2 >> 12) & 7] = MAKE_INT_16(m68ki_read_16_fc(ea, REG_SFC));
				if(CPU_TYPE_IS_020_VARIANT(CPU_TYPE))
					USE_CYCLES(2);
				return;
			}
			/* Memory to data register */
			REG_D[(word2 >> 12) & 7] = MASK_OUT_BELOW_16(REG_D[(word2 >> 12) & 7]) | m68ki_read_16_fc(ea, REG_SFC);
			if(CPU_TYPE_IS_020_VARIANT(CPU_TYPE))
				USE_CYCLES(2);
			return;
		}
		m68ki_exception_privilege_violation();
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_moves_16_ix(void)
{
	if(CPU_TYPE_IS_010_PLUS(CPU_TYPE))
	{
		if(FLAG_S)
		{
			uint word2 = OPER_I_16();
			uint ea = EA_AY_IX_16();

			m68ki_trace_t0();			   /* auto-disable (see m68kcpu.h) */
			if(BIT_B(word2))		   /* Register to memory */
			{
				m68ki_write_16_fc(ea, REG_DFC, MASK_OUT_ABOVE_16(REG_DA[(word2 >> 12) & 15]));
				return;
			}
			if(BIT_F(word2))		   /* Memory to address register */
			{
				REG_A[(word2 >> 12) & 7] = MAKE_INT_16(m68ki_read_16_fc(ea, REG_SFC));
				if(CPU_TYPE_IS_020_VARIANT(CPU_TYPE))
					USE_CYCLES(2);
				return;
			}
			/* Memory to data register */
			REG_D[(word2 >> 12) & 7] = MASK_OUT_BELOW_16(REG_D[(word2 >> 12) & 7]) | m68ki_read_16_fc(ea, REG_SFC);
			if(CPU_TYPE_IS_020_VARIANT(CPU_TYPE))
				USE_CYCLES(2);
			return;
		}
		m68ki_exception_privilege_violation();
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_moves_16_aw(void)
{
	if(CPU_TYPE_IS_010_PLUS(CPU_TYPE))
	{
		if(FLAG_S)
		{
			uint word2 = OPER_I_16();
			uint ea = EA_AW_16();

			m68ki_trace_t0();			   /* auto-disable (see m68kcpu.h) */
			if(BIT_B(word2))		   /* Register to memory */
			{
				m68ki_write_16_fc(ea, REG_DFC, MASK_OUT_ABOVE_16(REG_DA[(word2 >> 12) & 15]));
				return;
			}
			if(BIT_F(word2))		   /* Memory to address register */
			{
				REG_A[(word2 >> 12) & 7] = MAKE_INT_16(m68ki_read_16_fc(ea, REG_SFC));
				if(CPU_TYPE_IS_020_VARIANT(CPU_TYPE))
					USE_CYCLES(2);
				return;
			}
			/* Memory to data register */
			REG_D[(word2 >> 12) & 7] = MASK_OUT_BELOW_16(REG_D[(word2 >> 12) & 7]) | m68ki_read_16_fc(ea, REG_SFC);
			if(CPU_TYPE_IS_020_VARIANT(CPU_TYPE))
				USE_CYCLES(2);
			return;
		}
		m68ki_exception_privilege_violation();
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_moves_16_al(void)
{
	if(CPU_TYPE_IS_010_PLUS(CPU_TYPE))
	{
		if(FLAG_S)
		{
			uint word2 = OPER_I_16();
			uint ea = EA_AL_16();

			m68ki_trace_t0();			   /* auto-disable (see m68kcpu.h) */
			if(BIT_B(word2))		   /* Register to memory */
			{
				m68ki_write_16_fc(ea, REG_DFC, MASK_OUT_ABOVE_16(REG_DA[(word2 >> 12) & 15]));
				return;
			}
			if(BIT_F(word2))		   /* Memory to address register */
			{
				REG_A[(word2 >> 12) & 7] = MAKE_INT_16(m68ki_read_16_fc(ea, REG_SFC));
				if(CPU_TYPE_IS_020_VARIANT(CPU_TYPE))
					USE_CYCLES(2);
				return;
			}
			/* Memory to data register */
			REG_D[(word2 >> 12) & 7] = MASK_OUT_BELOW_16(REG_D[(word2 >> 12) & 7]) | m68ki_read_16_fc(ea, REG_SFC);
			if(CPU_TYPE_IS_020_VARIANT(CPU_TYPE))
				USE_CYCLES(2);
			return;
		}
		m68ki_exception_privilege_violation();
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_moves_32_ai(void)
{
	if(CPU_TYPE_IS_010_PLUS(CPU_TYPE))
	{
		if(FLAG_S)
		{
			uint word2 = OPER_I_16();
			uint ea = EA_AY_AI_32();

			m68ki_trace_t0();			   /* auto-disable (see m68kcpu.h) */
			if(BIT_B(word2))		   /* Register to memory */
			{
				m68ki_write_32_fc(ea, REG_DFC, REG_DA[(word2 >> 12) & 15]);
				if(CPU_TYPE_IS_020_VARIANT(CPU_TYPE))
					USE_CYCLES(2);
				return;
			}
			/* Memory to register */
			REG_DA[(word2 >> 12) & 15] = m68ki_read_32_fc(ea, REG_SFC);
			if(CPU_TYPE_IS_020_VARIANT(CPU_TYPE))
				USE_CYCLES(2);
			return;
		}
		m68ki_exception_privilege_violation();
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_moves_32_pi(void)
{
	if(CPU_TYPE_IS_010_PLUS(CPU_TYPE))
	{
		if(FLAG_S)
		{
			uint word2 = OPER_I_16();
			uint ea = EA_AY_PI_32();

			m68ki_trace_t0();			   /* auto-disable (see m68kcpu.h) */
			if(BIT_B(word2))		   /* Register to memory */
			{
				m68ki_write_32_fc(ea, REG_DFC, REG_DA[(word2 >> 12) & 15]);
				if(CPU_TYPE_IS_020_VARIANT(CPU_TYPE))
					USE_CYCLES(2);
				return;
			}
			/* Memory to register */
			REG_DA[(word2 >> 12) & 15] = m68ki_read_32_fc(ea, REG_SFC);
			if(CPU_TYPE_IS_020_VARIANT(CPU_TYPE))
				USE_CYCLES(2);
			return;
		}
		m68ki_exception_privilege_violation();
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_moves_32_pd(void)
{
	if(CPU_TYPE_IS_010_PLUS(CPU_TYPE))
	{
		if(FLAG_S)
		{
			uint word2 = OPER_I_16();
			uint ea = EA_AY_PD_32();

			m68ki_trace_t0();			   /* auto-disable (see m68kcpu.h) */
			if(BIT_B(word2))		   /* Register to memory */
			{
				m68ki_write_32_fc(ea, REG_DFC, REG_DA[(word2 >> 12) & 15]);
				if(CPU_TYPE_IS_020_VARIANT(CPU_TYPE))
					USE_CYCLES(2);
				return;
			}
			/* Memory to register */
			REG_DA[(word2 >> 12) & 15] = m68ki_read_32_fc(ea, REG_SFC);
			if(CPU_TYPE_IS_020_VARIANT(CPU_TYPE))
				USE_CYCLES(2);
			return;
		}
		m68ki_exception_privilege_violation();
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_moves_32_di(void)
{
	if(CPU_TYPE_IS_010_PLUS(CPU_TYPE))
	{
		if(FLAG_S)
		{
			uint word2 = OPER_I_16();
			uint ea = EA_AY_DI_32();

			m68ki_trace_t0();			   /* auto-disable (see m68kcpu.h) */
			if(BIT_B(word2))		   /* Register to memory */
			{
				m68ki_write_32_fc(ea, REG_DFC, REG_DA[(word2 >> 12) & 15]);
				if(CPU_TYPE_IS_020_VARIANT(CPU_TYPE))
					USE_CYCLES(2);
				return;
			}
			/* Memory to register */
			REG_DA[(word2 >> 12) & 15] = m68ki_read_32_fc(ea, REG_SFC);
			if(CPU_TYPE_IS_020_VARIANT(CPU_TYPE))
				USE_CYCLES(2);
			return;
		}
		m68ki_exception_privilege_violation();
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_moves_32_ix(void)
{
	if(CPU_TYPE_IS_010_PLUS(CPU_TYPE))
	{
		if(FLAG_S)
		{
			uint word2 = OPER_I_16();
			uint ea = EA_AY_IX_32();

			m68ki_trace_t0();			   /* auto-disable (see m68kcpu.h) */
			if(BIT_B(word2))		   /* Register to memory */
			{
				m68ki_write_32_fc(ea, REG_DFC, REG_DA[(word2 >> 12) & 15]);
				if(CPU_TYPE_IS_020_VARIANT(CPU_TYPE))
					USE_CYCLES(2);
				return;
			}
			/* Memory to register */
			REG_DA[(word2 >> 12) & 15] = m68ki_read_32_fc(ea, REG_SFC);
			if(CPU_TYPE_IS_020_VARIANT(CPU_TYPE))
				USE_CYCLES(2);
			return;
		}
		m68ki_exception_privilege_violation();
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_moves_32_aw(void)
{
	if(CPU_TYPE_IS_010_PLUS(CPU_TYPE))
	{
		if(FLAG_S)
		{
			uint word2 = OPER_I_16();
			uint ea = EA_AW_32();

			m68ki_trace_t0();			   /* auto-disable (see m68kcpu.h) */
			if(BIT_B(word2))		   /* Register to memory */
			{
				m68ki_write_32_fc(ea, REG_DFC, REG_DA[(word2 >> 12) & 15]);
				if(CPU_TYPE_IS_020_VARIANT(CPU_TYPE))
					USE_CYCLES(2);
				return;
			}
			/* Memory to register */
			REG_DA[(word2 >> 12) & 15] = m68ki_read_32_fc(ea, REG_SFC);
			if(CPU_TYPE_IS_020_VARIANT(CPU_TYPE))
				USE_CYCLES(2);
			return;
		}
		m68ki_exception_privilege_violation();
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_moves_32_al(void)
{
	if(CPU_TYPE_IS_010_PLUS(CPU_TYPE))
	{
		if(FLAG_S)
		{
			uint word2 = OPER_I_16();
			uint ea = EA_AL_32();

			m68ki_trace_t0();			   /* auto-disable (see m68kcpu.h) */
			if(BIT_B(word2))		   /* Register to memory */
			{
				m68ki_write_32_fc(ea, REG_DFC, REG_DA[(word2 >> 12) & 15]);
				if(CPU_TYPE_IS_020_VARIANT(CPU_TYPE))
					USE_CYCLES(2);
				return;
			}
			/* Memory to register */
			REG_DA[(word2 >> 12) & 15] = m68ki_read_32_fc(ea, REG_SFC);
			if(CPU_TYPE_IS_020_VARIANT(CPU_TYPE))
				USE_CYCLES(2);
			return;
		}
		m68ki_exception_privilege_violation();
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_moveq_32(void)
{
	uint res = DX = MAKE_INT_8(MASK_OUT_ABOVE_8(REG_IR));

	FLAG_N = NFLAG_32(res);
	FLAG_Z = (uint)res;
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;
}


void M68k::op_move16_32(void)
{
	uint16 w2 = OPER_I_16();
	int ax = REG_IR & 7;
	int ay = (w2 >> 12) & 7;

	m68ki_write_32(REG_A[ay],    m68ki_read_32(REG_A[ax]));
	m68ki_write_32(REG_A[ay]+4,  m68ki_read_32(REG_A[ax]+4));
	m68ki_write_32(REG_A[ay]+8,  m68ki_read_32(REG_A[ax]+8));
	m68ki_write_32(REG_A[ay]+12, m68ki_read_32(REG_A[ax]+12));

	REG_A[ax] += 16;
	REG_A[ay] += 16;
}


void M68k::op_muls_16_d(void)
{
	uint* r_dst = &DX;
	uint x = MAKE_INT_16(DY);
	if(CPU_TYPE_IS_010_LESS(CPU_TYPE)) {
		uint c = 0;
		for (uint y = x, f = 0; y; y>>=1) {
			if ((y&1) != f) {
				c += 2;
				f = 1 - f;
			}
		}
		USE_CYCLES(c);
	}

	uint res = MASK_OUT_ABOVE_32(x * MAKE_INT_16(MASK_OUT_ABOVE_16(*r_dst)));

	*r_dst = res;

	FLAG_Z = (uint)res;
	FLAG_N = NFLAG_32(res);
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;
}


void M68k::op_muls_16_ai(void)
{
	uint* r_dst = &DX;
	uint x = MAKE_INT_16(OPER_AY_AI_16());
	if(CPU_TYPE_IS_010_LESS(CPU_TYPE)) {
		uint c = 0;
		for (uint y = x, f = 0; y; y>>=1) {
			if ((y&1) != f) {
				c += 2;
				f = 1 - f;
			}
		}
		USE_CYCLES(c);
	}
	uint res = MASK_OUT_ABOVE_32(x * MAKE_INT_16(MASK_OUT_ABOVE_16(*r_dst)));

	*r_dst = res;

	FLAG_Z = (uint)res;
	FLAG_N = NFLAG_32(res);
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;
}


void M68k::op_muls_16_pi(void)
{
	uint* r_dst = &DX;
	uint x = MAKE_INT_16(OPER_AY_PI_16());
	if(CPU_TYPE_IS_010_LESS(CPU_TYPE)) {
		uint c = 0;
		for (uint y = x, f = 0; y; y>>=1) {
			if ((y&1) != f) {
				c += 2;
				f = 1 - f;
			}
		}
		USE_CYCLES(c);
	}
	uint res = MASK_OUT_ABOVE_32(x * MAKE_INT_16(MASK_OUT_ABOVE_16(*r_dst)));

	*r_dst = res;

	FLAG_Z = (uint)res;
	FLAG_N = NFLAG_32(res);
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;
}


void M68k::op_muls_16_pd(void)
{
	uint* r_dst = &DX;
	uint x = MAKE_INT_16(OPER_AY_PD_16());
	if(CPU_TYPE_IS_010_LESS(CPU_TYPE)) {
		uint c = 0;
		for (uint y = x, f = 0; y; y>>=1) {
			if ((y&1) != f) {
				c += 2;
				f = 1 - f;
			}
		}
		USE_CYCLES(c);
	}
	uint res = MASK_OUT_ABOVE_32(x * MAKE_INT_16(MASK_OUT_ABOVE_16(*r_dst)));

	*r_dst = res;

	FLAG_Z = (uint)res;
	FLAG_N = NFLAG_32(res);
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;
}


void M68k::op_muls_16_di(void)
{
	uint* r_dst = &DX;
	uint x = MAKE_INT_16(OPER_AY_DI_16());
	if(CPU_TYPE_IS_010_LESS(CPU_TYPE)) {
		uint c = 0;
		for (uint y = x, f = 0; y; y>>=1) {
			if ((y&1) != f) {
				c += 2;
				f = 1 - f;
			}
		}
		USE_CYCLES(c);
	}
	uint res = MASK_OUT_ABOVE_32(x * MAKE_INT_16(MASK_OUT_ABOVE_16(*r_dst)));

	*r_dst = res;

	FLAG_Z = (uint)res;
	FLAG_N = NFLAG_32(res);
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;
}


void M68k::op_muls_16_ix(void)
{
	uint* r_dst = &DX;
	uint x = MAKE_INT_16(OPER_AY_IX_16());
	if(CPU_TYPE_IS_010_LESS(CPU_TYPE)) {
		uint c = 0;
		for (uint y = x, f = 0; y; y>>=1) {
			if ((y&1) != f) {
				c += 2;
				f = 1 - f;
			}
		}
		USE_CYCLES(c);
	}
	uint res = MASK_OUT_ABOVE_32(x * MAKE_INT_16(MASK_OUT_ABOVE_16(*r_dst)));

	*r_dst = res;

	FLAG_Z = (uint)res;
	FLAG_N = NFLAG_32(res);
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;
}


void M68k::op_muls_16_aw(void)
{
	uint* r_dst = &DX;
	uint x = MAKE_INT_16(OPER_AW_16());
	if(CPU_TYPE_IS_010_LESS(CPU_TYPE)) {
		uint c = 0;
		for (uint y = x, f = 0; y; y>>=1) {
			if ((y&1) != f) {
				c += 2;
				f = 1 - f;
			}
		}
		USE_CYCLES(c);
	}
	uint res = MASK_OUT_ABOVE_32(x * MAKE_INT_16(MASK_OUT_ABOVE_16(*r_dst)));

	*r_dst = res;

	FLAG_Z = (uint)res;
	FLAG_N = NFLAG_32(res);
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;
}


void M68k::op_muls_16_al(void)
{
	uint* r_dst = &DX;
	uint x = MAKE_INT_16(OPER_AL_16());
	if(CPU_TYPE_IS_010_LESS(CPU_TYPE)) {
		uint c = 0;
		for (uint y = x, f = 0; y; y>>=1) {
			if ((y&1) != f) {
				c += 2;
				f = 1 - f;
			}
		}
		USE_CYCLES(c);
	}
	uint res = MASK_OUT_ABOVE_32(x * MAKE_INT_16(MASK_OUT_ABOVE_16(*r_dst)));

	*r_dst = res;

	FLAG_Z = (uint)res;
	FLAG_N = NFLAG_32(res);
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;
}


void M68k::op_muls_16_pcdi(void)
{
	uint* r_dst = &DX;
	uint x = MAKE_INT_16(OPER_PCDI_16());
	if(CPU_TYPE_IS_010_LESS(CPU_TYPE)) {
		uint c = 0;
		for (uint y = x, f = 0; y; y>>=1) {
			if ((y&1) != f) {
				c += 2;
				f = 1 - f;
			}
		}
		USE_CYCLES(c);
	}
	uint res = MASK_OUT_ABOVE_32(x * MAKE_INT_16(MASK_OUT_ABOVE_16(*r_dst)));

	*r_dst = res;

	FLAG_Z = (uint)res;
	FLAG_N = NFLAG_32(res);
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;
}


void M68k::op_muls_16_pcix(void)
{
	uint* r_dst = &DX;
	uint x = MAKE_INT_16(OPER_PCIX_16());
	if(CPU_TYPE_IS_010_LESS(CPU_TYPE)) {
		uint c = 0;
		for (uint y = x, f = 0; y; y>>=1) {
			if ((y&1) != f) {
				c += 2;
				f = 1 - f;
			}
		}
		USE_CYCLES(c);
	}
	uint res = MASK_OUT_ABOVE_32(x * MAKE_INT_16(MASK_OUT_ABOVE_16(*r_dst)));

	*r_dst = res;

	FLAG_Z = (uint)res;
	FLAG_N = NFLAG_32(res);
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;
}


void M68k::op_muls_16_i(void)
{
	uint* r_dst = &DX;
	uint x = MAKE_INT_16(OPER_I_16());
	if(CPU_TYPE_IS_010_LESS(CPU_TYPE)) {
		uint c = 0;
		for (uint y = x, f = 0; y; y>>=1) {
			if ((y&1) != f) {
				c += 2;
				f = 1 - f;
			}
		}
		USE_CYCLES(c);
	}
	uint res = MASK_OUT_ABOVE_32(x * MAKE_INT_16(MASK_OUT_ABOVE_16(*r_dst)));

	*r_dst = res;

	FLAG_Z = (uint)res;
	FLAG_N = NFLAG_32(res);
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;
}


void M68k::op_mulu_16_d(void)
{
	uint* r_dst = &DX;
	uint x = MASK_OUT_ABOVE_16(DY);
	if(CPU_TYPE_IS_010_LESS(CPU_TYPE)) {
		uint c = 0;
		for (uint y = x; y; y>>=1) {
			if ((y&1)) {
				c += 2;
			}
		}
		USE_CYCLES(c);
	}
	uint res = x * MASK_OUT_ABOVE_16(*r_dst);

	*r_dst = res;

	FLAG_Z = (uint)res;
	FLAG_N = NFLAG_32(res);
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;
}


void M68k::op_mulu_16_ai(void)
{
	uint* r_dst = &DX;
	uint x = OPER_AY_AI_16();
	if(CPU_TYPE_IS_010_LESS(CPU_TYPE)) {
		uint c = 0;
		for (uint y = x; y; y>>=1) {
			if ((y&1)) {
				c += 2;
			}
		}
		USE_CYCLES(c);
	}

	uint res = x * MASK_OUT_ABOVE_16(*r_dst);

	*r_dst = res;

	FLAG_Z = (uint)res;
	FLAG_N = NFLAG_32(res);
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;
}


void M68k::op_mulu_16_pi(void)
{
	uint* r_dst = &DX;
	uint x = OPER_AY_PI_16();
	if(CPU_TYPE_IS_010_LESS(CPU_TYPE)) {
		uint c = 0;
		for (uint y = x; y; y>>=1) {
			if ((y&1)) {
				c += 2;
			}
		}
		USE_CYCLES(c);
	}

	uint res = x * MASK_OUT_ABOVE_16(*r_dst);

	*r_dst = res;

	FLAG_Z = (uint)res;
	FLAG_N = NFLAG_32(res);
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;
}


void M68k::op_mulu_16_pd(void)
{
	uint* r_dst = &DX;
	uint x = OPER_AY_PD_16();
	if(CPU_TYPE_IS_010_LESS(CPU_TYPE)) {
		uint c = 0;
		for (uint y = x; y; y>>=1) {
			if ((y&1)) {
				c += 2;
			}
		}
		USE_CYCLES(c);
	}

	uint res = x * MASK_OUT_ABOVE_16(*r_dst);

	*r_dst = res;

	FLAG_Z = (uint)res;
	FLAG_N = NFLAG_32(res);
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;
}


void M68k::op_mulu_16_di(void)
{
	uint* r_dst = &DX;
	uint x = OPER_AY_DI_16();
	if(CPU_TYPE_IS_010_LESS(CPU_TYPE)) {
		uint c = 0;
		for (uint y = x; y; y>>=1) {
			if ((y&1)) {
				c += 2;
			}
		}
		USE_CYCLES(c);
	}

	uint res = x * MASK_OUT_ABOVE_16(*r_dst);

	*r_dst = res;

	FLAG_Z = (uint)res;
	FLAG_N = NFLAG_32(res);
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;
}


void M68k::op_mulu_16_ix(void)
{
	uint* r_dst = &DX;
	uint x = OPER_AY_IX_16();
	if(CPU_TYPE_IS_010_LESS(CPU_TYPE)) {
		uint c = 0;
		for (uint y = x; y; y>>=1) {
			if ((y&1)) {
				c += 2;
			}
		}
		USE_CYCLES(c);
	}

	uint res = x * MASK_OUT_ABOVE_16(*r_dst);

	*r_dst = res;

	FLAG_Z = (uint)res;
	FLAG_N = NFLAG_32(res);
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;
}


void M68k::op_mulu_16_aw(void)
{
	uint* r_dst = &DX;
	uint x = OPER_AW_16();
	if(CPU_TYPE_IS_010_LESS(CPU_TYPE)) {
		uint c = 0;
		for (uint y = x; y; y>>=1) {
			if ((y&1)) {
				c += 2;
			}
		}
		USE_CYCLES(c);
	}

	uint res = x * MASK_OUT_ABOVE_16(*r_dst);

	*r_dst = res;

	FLAG_Z = (uint)res;
	FLAG_N = NFLAG_32(res);
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;
}


void M68k::op_mulu_16_al(void)
{
	uint* r_dst = &DX;
	uint x = OPER_AL_16();
	if(CPU_TYPE_IS_010_LESS(CPU_TYPE)) {
		uint c = 0;
		for (uint y = x; y; y>>=1) {
			if ((y&1)) {
				c += 2;
			}
		}
		USE_CYCLES(c);
	}

	uint res = x * MASK_OUT_ABOVE_16(*r_dst);

	*r_dst = res;

	FLAG_Z = (uint)res;
	FLAG_N = NFLAG_32(res);
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;
}


void M68k::op_mulu_16_pcdi(void)
{
	uint* r_dst = &DX;
	uint x = OPER_PCDI_16();
	if(CPU_TYPE_IS_010_LESS(CPU_TYPE)) {
		uint c = 0;
		for (uint y = x; y; y>>=1) {
			if ((y&1)) {
				c += 2;
			}
		}
		USE_CYCLES(c);
	}

	uint res = x * MASK_OUT_ABOVE_16(*r_dst);

	*r_dst = res;

	FLAG_Z = (uint)res;
	FLAG_N = NFLAG_32(res);
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;
}


void M68k::op_mulu_16_pcix(void)
{
	uint* r_dst = &DX;
	uint x = OPER_PCIX_16();
	if(CPU_TYPE_IS_010_LESS(CPU_TYPE)) {
		uint c = 0;
		for (uint y = x; y; y>>=1) {
			if ((y&1)) {
				c += 2;
			}
		}
		USE_CYCLES(c);
	}

	uint res = x * MASK_OUT_ABOVE_16(*r_dst);

	*r_dst = res;

	FLAG_Z = (uint)res;
	FLAG_N = NFLAG_32(res);
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;
}


void M68k::op_mulu_16_i(void)
{
	uint* r_dst = &DX;
	uint x = OPER_I_16();
	if(CPU_TYPE_IS_010_LESS(CPU_TYPE)) {
		uint c = 0;
		for (uint y = x; y; y>>=1) {
			if ((y&1)) {
				c += 2;
			}
		}
		USE_CYCLES(c);
	}

	uint res = x * MASK_OUT_ABOVE_16(*r_dst);

	*r_dst = res;

	FLAG_Z = (uint)res;
	FLAG_N = NFLAG_32(res);
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;
}


void M68k::op_mull_32_d(void)
{
#if M68K_USE_64_BIT

	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		uint word2 = OPER_I_16();
		uint64 src = DY;
		uint64 dst = REG_D[(word2 >> 12) & 7];
		uint64 res;

		FLAG_C = CFLAG_CLEAR;

		if(BIT_B(word2))			   /* signed */
		{
			res = (sint64)((sint32)src) * (sint64)((sint32)dst);
			if(!BIT_A(word2))
			{
				FLAG_Z = MASK_OUT_ABOVE_32(res);
				FLAG_N = NFLAG_32(res);
				FLAG_V = ((sint64)res != (sint32)res)<<7;
				REG_D[(word2 >> 12) & 7] = FLAG_Z;
				return;
			}
			FLAG_Z = MASK_OUT_ABOVE_32(res) | (res>>32);
			FLAG_N = NFLAG_64(res);
			FLAG_V = VFLAG_CLEAR;
			REG_D[word2 & 7] = (res >> 32);
			REG_D[(word2 >> 12) & 7] = MASK_OUT_ABOVE_32(res);
			return;
		}

		res = src * dst;
		if(!BIT_A(word2))
		{
			FLAG_Z = MASK_OUT_ABOVE_32(res);
			FLAG_N = NFLAG_32(res);
			FLAG_V = (res > 0xffffffff)<<7;
			REG_D[(word2 >> 12) & 7] = FLAG_Z;
			return;
		}
		FLAG_Z = MASK_OUT_ABOVE_32(res) | (res>>32);
		FLAG_N = NFLAG_64(res);
		FLAG_V = VFLAG_CLEAR;
		REG_D[word2 & 7] = (res >> 32);
		REG_D[(word2 >> 12) & 7] = MASK_OUT_ABOVE_32(res);
		return;
	}
	m68ki_exception_illegal();

#else

	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		uint word2 = OPER_I_16();
		uint src = DY;
		uint dst = REG_D[(word2 >> 12) & 7];
		uint neg = GET_MSB_32(src ^ dst);
		uint src1;
		uint src2;
		uint dst1;
		uint dst2;
		uint r1;
		uint r2;
		uint r3;
		uint r4;
		uint lo;
		uint hi;

		FLAG_C = CFLAG_CLEAR;

		if(BIT_B(word2))			   /* signed */
		{
			if(GET_MSB_32(src))
				src = (uint)MASK_OUT_ABOVE_32(-(sint)src);
			if(GET_MSB_32(dst))
				dst = (uint)MASK_OUT_ABOVE_32(-(sint)dst);
		}

		src1 = MASK_OUT_ABOVE_16(src);
		src2 = src>>16;
		dst1 = MASK_OUT_ABOVE_16(dst);
		dst2 = dst>>16;


		r1 = src1 * dst1;
		r2 = src1 * dst2;
		r3 = src2 * dst1;
		r4 = src2 * dst2;

		lo = r1 + (MASK_OUT_ABOVE_16(r2)<<16) + (MASK_OUT_ABOVE_16(r3)<<16);
		hi = r4 + (r2>>16) + (r3>>16) + (((r1>>16) + MASK_OUT_ABOVE_16(r2) + MASK_OUT_ABOVE_16(r3)) >> 16);

		if(BIT_B(word2) && neg)
		{
			hi = (uint)MASK_OUT_ABOVE_32((-(sint)hi) - (lo != 0));
			lo = (uint)MASK_OUT_ABOVE_32(-(sint)lo);
		}

		if(BIT_A(word2))
		{
			REG_D[word2 & 7] = hi;
			REG_D[(word2 >> 12) & 7] = lo;
			FLAG_N = NFLAG_32(hi);
			FLAG_Z = hi | lo;
			FLAG_V = VFLAG_CLEAR;
			return;
		}

		REG_D[(word2 >> 12) & 7] = lo;
		FLAG_N = NFLAG_32(lo);
		FLAG_Z = lo;
		if(BIT_B(word2))
			FLAG_V = (!((GET_MSB_32(lo) && hi == 0xffffffff) || (!GET_MSB_32(lo) && !hi)))<<7;
		else
			FLAG_V = (hi != 0) << 7;
		return;
	}
	m68ki_exception_illegal();

#endif
}


void M68k::op_mull_32_ai(void)
{
#if M68K_USE_64_BIT

	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		uint word2 = OPER_I_16();
		uint64 src = OPER_AY_AI_32();
		uint64 dst = REG_D[(word2 >> 12) & 7];
		uint64 res;

		FLAG_C = CFLAG_CLEAR;

		if(BIT_B(word2))			   /* signed */
		{
			res = (sint64)((sint32)src) * (sint64)((sint32)dst);
			if(!BIT_A(word2))
			{
				FLAG_Z = MASK_OUT_ABOVE_32(res);
				FLAG_N = NFLAG_32(res);
				FLAG_V = ((sint64)res != (sint32)res)<<7;
				REG_D[(word2 >> 12) & 7] = FLAG_Z;
				return;
			}
			FLAG_Z = MASK_OUT_ABOVE_32(res) | (res>>32);
			FLAG_N = NFLAG_64(res);
			FLAG_V = VFLAG_CLEAR;
			REG_D[word2 & 7] = (res >> 32);
			REG_D[(word2 >> 12) & 7] = MASK_OUT_ABOVE_32(res);
			return;
		}

		res = src * dst;
		if(!BIT_A(word2))
		{
			FLAG_Z = MASK_OUT_ABOVE_32(res);
			FLAG_N = NFLAG_32(res);
			FLAG_V = (res > 0xffffffff)<<7;
			REG_D[(word2 >> 12) & 7] = FLAG_Z;
			return;
		}
		FLAG_Z = MASK_OUT_ABOVE_32(res) | (res>>32);
		FLAG_N = NFLAG_64(res);
		FLAG_V = VFLAG_CLEAR;
		REG_D[word2 & 7] = (res >> 32);
		REG_D[(word2 >> 12) & 7] = MASK_OUT_ABOVE_32(res);
		return;
	}
	m68ki_exception_illegal();

#else

	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		uint word2 = OPER_I_16();
		uint src = OPER_AY_AI_32();
		uint dst = REG_D[(word2 >> 12) & 7];
		uint neg = GET_MSB_32(src ^ dst);
		uint src1;
		uint src2;
		uint dst1;
		uint dst2;
		uint r1;
		uint r2;
		uint r3;
		uint r4;
		uint lo;
		uint hi;

		FLAG_C = CFLAG_CLEAR;

		if(BIT_B(word2))			   /* signed */
		{
			if(GET_MSB_32(src))
				src = (uint)MASK_OUT_ABOVE_32(-(sint)src);
			if(GET_MSB_32(dst))
				dst = (uint)MASK_OUT_ABOVE_32(-(sint)dst);
		}

		src1 = MASK_OUT_ABOVE_16(src);
		src2 = src>>16;
		dst1 = MASK_OUT_ABOVE_16(dst);
		dst2 = dst>>16;


		r1 = src1 * dst1;
		r2 = src1 * dst2;
		r3 = src2 * dst1;
		r4 = src2 * dst2;

		lo = r1 + (MASK_OUT_ABOVE_16(r2)<<16) + (MASK_OUT_ABOVE_16(r3)<<16);
		hi = r4 + (r2>>16) + (r3>>16) + (((r1>>16) + MASK_OUT_ABOVE_16(r2) + MASK_OUT_ABOVE_16(r3)) >> 16);

		if(BIT_B(word2) && neg)
		{
			hi = (uint)MASK_OUT_ABOVE_32((-(sint)hi) - (lo != 0));
			lo = (uint)MASK_OUT_ABOVE_32(-(sint)lo);
		}

		if(BIT_A(word2))
		{
			REG_D[word2 & 7] = hi;
			REG_D[(word2 >> 12) & 7] = lo;
			FLAG_N = NFLAG_32(hi);
			FLAG_Z = hi | lo;
			FLAG_V = VFLAG_CLEAR;
			return;
		}

		REG_D[(word2 >> 12) & 7] = lo;
		FLAG_N = NFLAG_32(lo);
		FLAG_Z = lo;
		if(BIT_B(word2))
			FLAG_V = (!((GET_MSB_32(lo) && hi == 0xffffffff) || (!GET_MSB_32(lo) && !hi)))<<7;
		else
			FLAG_V = (hi != 0) << 7;
		return;
	}
	m68ki_exception_illegal();

#endif
}


void M68k::op_mull_32_pi(void)
{
#if M68K_USE_64_BIT

	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		uint word2 = OPER_I_16();
		uint64 src = OPER_AY_PI_32();
		uint64 dst = REG_D[(word2 >> 12) & 7];
		uint64 res;

		FLAG_C = CFLAG_CLEAR;

		if(BIT_B(word2))			   /* signed */
		{
			res = (sint64)((sint32)src) * (sint64)((sint32)dst);
			if(!BIT_A(word2))
			{
				FLAG_Z = MASK_OUT_ABOVE_32(res);
				FLAG_N = NFLAG_32(res);
				FLAG_V = ((sint64)res != (sint32)res)<<7;
				REG_D[(word2 >> 12) & 7] = FLAG_Z;
				return;
			}
			FLAG_Z = MASK_OUT_ABOVE_32(res) | (res>>32);
			FLAG_N = NFLAG_64(res);
			FLAG_V = VFLAG_CLEAR;
			REG_D[word2 & 7] = (res >> 32);
			REG_D[(word2 >> 12) & 7] = MASK_OUT_ABOVE_32(res);
			return;
		}

		res = src * dst;
		if(!BIT_A(word2))
		{
			FLAG_Z = MASK_OUT_ABOVE_32(res);
			FLAG_N = NFLAG_32(res);
			FLAG_V = (res > 0xffffffff)<<7;
			REG_D[(word2 >> 12) & 7] = FLAG_Z;
			return;
		}
		FLAG_Z = MASK_OUT_ABOVE_32(res) | (res>>32);
		FLAG_N = NFLAG_64(res);
		FLAG_V = VFLAG_CLEAR;
		REG_D[word2 & 7] = (res >> 32);
		REG_D[(word2 >> 12) & 7] = MASK_OUT_ABOVE_32(res);
		return;
	}
	m68ki_exception_illegal();

#else

	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		uint word2 = OPER_I_16();
		uint src = OPER_AY_PI_32();
		uint dst = REG_D[(word2 >> 12) & 7];
		uint neg = GET_MSB_32(src ^ dst);
		uint src1;
		uint src2;
		uint dst1;
		uint dst2;
		uint r1;
		uint r2;
		uint r3;
		uint r4;
		uint lo;
		uint hi;

		FLAG_C = CFLAG_CLEAR;

		if(BIT_B(word2))			   /* signed */
		{
			if(GET_MSB_32(src))
				src = (uint)MASK_OUT_ABOVE_32(-(sint)src);
			if(GET_MSB_32(dst))
				dst = (uint)MASK_OUT_ABOVE_32(-(sint)dst);
		}

		src1 = MASK_OUT_ABOVE_16(src);
		src2 = src>>16;
		dst1 = MASK_OUT_ABOVE_16(dst);
		dst2 = dst>>16;


		r1 = src1 * dst1;
		r2 = src1 * dst2;
		r3 = src2 * dst1;
		r4 = src2 * dst2;

		lo = r1 + (MASK_OUT_ABOVE_16(r2)<<16) + (MASK_OUT_ABOVE_16(r3)<<16);
		hi = r4 + (r2>>16) + (r3>>16) + (((r1>>16) + MASK_OUT_ABOVE_16(r2) + MASK_OUT_ABOVE_16(r3)) >> 16);

		if(BIT_B(word2) && neg)
		{
			hi = (uint)MASK_OUT_ABOVE_32((-(sint)hi) - (lo != 0));
			lo = (uint)MASK_OUT_ABOVE_32(-(sint)lo);
		}

		if(BIT_A(word2))
		{
			REG_D[word2 & 7] = hi;
			REG_D[(word2 >> 12) & 7] = lo;
			FLAG_N = NFLAG_32(hi);
			FLAG_Z = hi | lo;
			FLAG_V = VFLAG_CLEAR;
			return;
		}

		REG_D[(word2 >> 12) & 7] = lo;
		FLAG_N = NFLAG_32(lo);
		FLAG_Z = lo;
		if(BIT_B(word2))
			FLAG_V = (!((GET_MSB_32(lo) && hi == 0xffffffff) || (!GET_MSB_32(lo) && !hi)))<<7;
		else
			FLAG_V = (hi != 0) << 7;
		return;
	}
	m68ki_exception_illegal();

#endif
}


void M68k::op_mull_32_pd(void)
{
#if M68K_USE_64_BIT

	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		uint word2 = OPER_I_16();
		uint64 src = OPER_AY_PD_32();
		uint64 dst = REG_D[(word2 >> 12) & 7];
		uint64 res;

		FLAG_C = CFLAG_CLEAR;

		if(BIT_B(word2))			   /* signed */
		{
			res = (sint64)((sint32)src) * (sint64)((sint32)dst);
			if(!BIT_A(word2))
			{
				FLAG_Z = MASK_OUT_ABOVE_32(res);
				FLAG_N = NFLAG_32(res);
				FLAG_V = ((sint64)res != (sint32)res)<<7;
				REG_D[(word2 >> 12) & 7] = FLAG_Z;
				return;
			}
			FLAG_Z = MASK_OUT_ABOVE_32(res) | (res>>32);
			FLAG_N = NFLAG_64(res);
			FLAG_V = VFLAG_CLEAR;
			REG_D[word2 & 7] = (res >> 32);
			REG_D[(word2 >> 12) & 7] = MASK_OUT_ABOVE_32(res);
			return;
		}

		res = src * dst;
		if(!BIT_A(word2))
		{
			FLAG_Z = MASK_OUT_ABOVE_32(res);
			FLAG_N = NFLAG_32(res);
			FLAG_V = (res > 0xffffffff)<<7;
			REG_D[(word2 >> 12) & 7] = FLAG_Z;
			return;
		}
		FLAG_Z = MASK_OUT_ABOVE_32(res) | (res>>32);
		FLAG_N = NFLAG_64(res);
		FLAG_V = VFLAG_CLEAR;
		REG_D[word2 & 7] = (res >> 32);
		REG_D[(word2 >> 12) & 7] = MASK_OUT_ABOVE_32(res);
		return;
	}
	m68ki_exception_illegal();

#else

	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		uint word2 = OPER_I_16();
		uint src = OPER_AY_PD_32();
		uint dst = REG_D[(word2 >> 12) & 7];
		uint neg = GET_MSB_32(src ^ dst);
		uint src1;
		uint src2;
		uint dst1;
		uint dst2;
		uint r1;
		uint r2;
		uint r3;
		uint r4;
		uint lo;
		uint hi;

		FLAG_C = CFLAG_CLEAR;

		if(BIT_B(word2))			   /* signed */
		{
			if(GET_MSB_32(src))
				src = (uint)MASK_OUT_ABOVE_32(-(sint)src);
			if(GET_MSB_32(dst))
				dst = (uint)MASK_OUT_ABOVE_32(-(sint)dst);
		}

		src1 = MASK_OUT_ABOVE_16(src);
		src2 = src>>16;
		dst1 = MASK_OUT_ABOVE_16(dst);
		dst2 = dst>>16;


		r1 = src1 * dst1;
		r2 = src1 * dst2;
		r3 = src2 * dst1;
		r4 = src2 * dst2;

		lo = r1 + (MASK_OUT_ABOVE_16(r2)<<16) + (MASK_OUT_ABOVE_16(r3)<<16);
		hi = r4 + (r2>>16) + (r3>>16) + (((r1>>16) + MASK_OUT_ABOVE_16(r2) + MASK_OUT_ABOVE_16(r3)) >> 16);

		if(BIT_B(word2) && neg)
		{
			hi = (uint)MASK_OUT_ABOVE_32((-(sint)hi) - (lo != 0));
			lo = (uint)MASK_OUT_ABOVE_32(-(sint)lo);
		}

		if(BIT_A(word2))
		{
			REG_D[word2 & 7] = hi;
			REG_D[(word2 >> 12) & 7] = lo;
			FLAG_N = NFLAG_32(hi);
			FLAG_Z = hi | lo;
			FLAG_V = VFLAG_CLEAR;
			return;
		}

		REG_D[(word2 >> 12) & 7] = lo;
		FLAG_N = NFLAG_32(lo);
		FLAG_Z = lo;
		if(BIT_B(word2))
			FLAG_V = (!((GET_MSB_32(lo) && hi == 0xffffffff) || (!GET_MSB_32(lo) && !hi)))<<7;
		else
			FLAG_V = (hi != 0) << 7;
		return;
	}
	m68ki_exception_illegal();

#endif
}


void M68k::op_mull_32_di(void)
{
#if M68K_USE_64_BIT

	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		uint word2 = OPER_I_16();
		uint64 src = OPER_AY_DI_32();
		uint64 dst = REG_D[(word2 >> 12) & 7];
		uint64 res;

		FLAG_C = CFLAG_CLEAR;

		if(BIT_B(word2))			   /* signed */
		{
			res = (sint64)((sint32)src) * (sint64)((sint32)dst);
			if(!BIT_A(word2))
			{
				FLAG_Z = MASK_OUT_ABOVE_32(res);
				FLAG_N = NFLAG_32(res);
				FLAG_V = ((sint64)res != (sint32)res)<<7;
				REG_D[(word2 >> 12) & 7] = FLAG_Z;
				return;
			}
			FLAG_Z = MASK_OUT_ABOVE_32(res) | (res>>32);
			FLAG_N = NFLAG_64(res);
			FLAG_V = VFLAG_CLEAR;
			REG_D[word2 & 7] = (res >> 32);
			REG_D[(word2 >> 12) & 7] = MASK_OUT_ABOVE_32(res);
			return;
		}

		res = src * dst;
		if(!BIT_A(word2))
		{
			FLAG_Z = MASK_OUT_ABOVE_32(res);
			FLAG_N = NFLAG_32(res);
			FLAG_V = (res > 0xffffffff)<<7;
			REG_D[(word2 >> 12) & 7] = FLAG_Z;
			return;
		}
		FLAG_Z = MASK_OUT_ABOVE_32(res) | (res>>32);
		FLAG_N = NFLAG_64(res);
		FLAG_V = VFLAG_CLEAR;
		REG_D[word2 & 7] = (res >> 32);
		REG_D[(word2 >> 12) & 7] = MASK_OUT_ABOVE_32(res);
		return;
	}
	m68ki_exception_illegal();

#else

	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		uint word2 = OPER_I_16();
		uint src = OPER_AY_DI_32();
		uint dst = REG_D[(word2 >> 12) & 7];
		uint neg = GET_MSB_32(src ^ dst);
		uint src1;
		uint src2;
		uint dst1;
		uint dst2;
		uint r1;
		uint r2;
		uint r3;
		uint r4;
		uint lo;
		uint hi;

		FLAG_C = CFLAG_CLEAR;

		if(BIT_B(word2))			   /* signed */
		{
			if(GET_MSB_32(src))
				src = (uint)MASK_OUT_ABOVE_32(-(sint)src);
			if(GET_MSB_32(dst))
				dst = (uint)MASK_OUT_ABOVE_32(-(sint)dst);
		}

		src1 = MASK_OUT_ABOVE_16(src);
		src2 = src>>16;
		dst1 = MASK_OUT_ABOVE_16(dst);
		dst2 = dst>>16;


		r1 = src1 * dst1;
		r2 = src1 * dst2;
		r3 = src2 * dst1;
		r4 = src2 * dst2;

		lo = r1 + (MASK_OUT_ABOVE_16(r2)<<16) + (MASK_OUT_ABOVE_16(r3)<<16);
		hi = r4 + (r2>>16) + (r3>>16) + (((r1>>16) + MASK_OUT_ABOVE_16(r2) + MASK_OUT_ABOVE_16(r3)) >> 16);

		if(BIT_B(word2) && neg)
		{
			hi = (uint)MASK_OUT_ABOVE_32((-(sint)hi) - (lo != 0));
			lo = (uint)MASK_OUT_ABOVE_32(-(sint)lo);
		}

		if(BIT_A(word2))
		{
			REG_D[word2 & 7] = hi;
			REG_D[(word2 >> 12) & 7] = lo;
			FLAG_N = NFLAG_32(hi);
			FLAG_Z = hi | lo;
			FLAG_V = VFLAG_CLEAR;
			return;
		}

		REG_D[(word2 >> 12) & 7] = lo;
		FLAG_N = NFLAG_32(lo);
		FLAG_Z = lo;
		if(BIT_B(word2))
			FLAG_V = (!((GET_MSB_32(lo) && hi == 0xffffffff) || (!GET_MSB_32(lo) && !hi)))<<7;
		else
			FLAG_V = (hi != 0) << 7;
		return;
	}
	m68ki_exception_illegal();

#endif
}


void M68k::op_mull_32_ix(void)
{
#if M68K_USE_64_BIT

	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		uint word2 = OPER_I_16();
		uint64 src = OPER_AY_IX_32();
		uint64 dst = REG_D[(word2 >> 12) & 7];
		uint64 res;

		FLAG_C = CFLAG_CLEAR;

		if(BIT_B(word2))			   /* signed */
		{
			res = (sint64)((sint32)src) * (sint64)((sint32)dst);
			if(!BIT_A(word2))
			{
				FLAG_Z = MASK_OUT_ABOVE_32(res);
				FLAG_N = NFLAG_32(res);
				FLAG_V = ((sint64)res != (sint32)res)<<7;
				REG_D[(word2 >> 12) & 7] = FLAG_Z;
				return;
			}
			FLAG_Z = MASK_OUT_ABOVE_32(res) | (res>>32);
			FLAG_N = NFLAG_64(res);
			FLAG_V = VFLAG_CLEAR;
			REG_D[word2 & 7] = (res >> 32);
			REG_D[(word2 >> 12) & 7] = MASK_OUT_ABOVE_32(res);
			return;
		}

		res = src * dst;
		if(!BIT_A(word2))
		{
			FLAG_Z = MASK_OUT_ABOVE_32(res);
			FLAG_N = NFLAG_32(res);
			FLAG_V = (res > 0xffffffff)<<7;
			REG_D[(word2 >> 12) & 7] = FLAG_Z;
			return;
		}
		FLAG_Z = MASK_OUT_ABOVE_32(res) | (res>>32);
		FLAG_N = NFLAG_64(res);
		FLAG_V = VFLAG_CLEAR;
		REG_D[word2 & 7] = (res >> 32);
		REG_D[(word2 >> 12) & 7] = MASK_OUT_ABOVE_32(res);
		return;
	}
	m68ki_exception_illegal();

#else

	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		uint word2 = OPER_I_16();
		uint src = OPER_AY_IX_32();
		uint dst = REG_D[(word2 >> 12) & 7];
		uint neg = GET_MSB_32(src ^ dst);
		uint src1;
		uint src2;
		uint dst1;
		uint dst2;
		uint r1;
		uint r2;
		uint r3;
		uint r4;
		uint lo;
		uint hi;

		FLAG_C = CFLAG_CLEAR;

		if(BIT_B(word2))			   /* signed */
		{
			if(GET_MSB_32(src))
				src = (uint)MASK_OUT_ABOVE_32(-(sint)src);
			if(GET_MSB_32(dst))
				dst = (uint)MASK_OUT_ABOVE_32(-(sint)dst);
		}

		src1 = MASK_OUT_ABOVE_16(src);
		src2 = src>>16;
		dst1 = MASK_OUT_ABOVE_16(dst);
		dst2 = dst>>16;


		r1 = src1 * dst1;
		r2 = src1 * dst2;
		r3 = src2 * dst1;
		r4 = src2 * dst2;

		lo = r1 + (MASK_OUT_ABOVE_16(r2)<<16) + (MASK_OUT_ABOVE_16(r3)<<16);
		hi = r4 + (r2>>16) + (r3>>16) + (((r1>>16) + MASK_OUT_ABOVE_16(r2) + MASK_OUT_ABOVE_16(r3)) >> 16);

		if(BIT_B(word2) && neg)
		{
			hi = (uint)MASK_OUT_ABOVE_32((-(sint)hi) - (lo != 0));
			lo = (uint)MASK_OUT_ABOVE_32(-(sint)lo);
		}

		if(BIT_A(word2))
		{
			REG_D[word2 & 7] = hi;
			REG_D[(word2 >> 12) & 7] = lo;
			FLAG_N = NFLAG_32(hi);
			FLAG_Z = hi | lo;
			FLAG_V = VFLAG_CLEAR;
			return;
		}

		REG_D[(word2 >> 12) & 7] = lo;
		FLAG_N = NFLAG_32(lo);
		FLAG_Z = lo;
		if(BIT_B(word2))
			FLAG_V = (!((GET_MSB_32(lo) && hi == 0xffffffff) || (!GET_MSB_32(lo) && !hi)))<<7;
		else
			FLAG_V = (hi != 0) << 7;
		return;
	}
	m68ki_exception_illegal();

#endif
}


void M68k::op_mull_32_aw(void)
{
#if M68K_USE_64_BIT

	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		uint word2 = OPER_I_16();
		uint64 src = OPER_AW_32();
		uint64 dst = REG_D[(word2 >> 12) & 7];
		uint64 res;

		FLAG_C = CFLAG_CLEAR;

		if(BIT_B(word2))			   /* signed */
		{
			res = (sint64)((sint32)src) * (sint64)((sint32)dst);
			if(!BIT_A(word2))
			{
				FLAG_Z = MASK_OUT_ABOVE_32(res);
				FLAG_N = NFLAG_32(res);
				FLAG_V = ((sint64)res != (sint32)res)<<7;
				REG_D[(word2 >> 12) & 7] = FLAG_Z;
				return;
			}
			FLAG_Z = MASK_OUT_ABOVE_32(res) | (res>>32);
			FLAG_N = NFLAG_64(res);
			FLAG_V = VFLAG_CLEAR;
			REG_D[word2 & 7] = (res >> 32);
			REG_D[(word2 >> 12) & 7] = MASK_OUT_ABOVE_32(res);
			return;
		}

		res = src * dst;
		if(!BIT_A(word2))
		{
			FLAG_Z = MASK_OUT_ABOVE_32(res);
			FLAG_N = NFLAG_32(res);
			FLAG_V = (res > 0xffffffff)<<7;
			REG_D[(word2 >> 12) & 7] = FLAG_Z;
			return;
		}
		FLAG_Z = MASK_OUT_ABOVE_32(res) | (res>>32);
		FLAG_N = NFLAG_64(res);
		FLAG_V = VFLAG_CLEAR;
		REG_D[word2 & 7] = (res >> 32);
		REG_D[(word2 >> 12) & 7] = MASK_OUT_ABOVE_32(res);
		return;
	}
	m68ki_exception_illegal();

#else

	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		uint word2 = OPER_I_16();
		uint src = OPER_AW_32();
		uint dst = REG_D[(word2 >> 12) & 7];
		uint neg = GET_MSB_32(src ^ dst);
		uint src1;
		uint src2;
		uint dst1;
		uint dst2;
		uint r1;
		uint r2;
		uint r3;
		uint r4;
		uint lo;
		uint hi;

		FLAG_C = CFLAG_CLEAR;

		if(BIT_B(word2))			   /* signed */
		{
			if(GET_MSB_32(src))
				src = (uint)MASK_OUT_ABOVE_32(-(sint)src);
			if(GET_MSB_32(dst))
				dst = (uint)MASK_OUT_ABOVE_32(-(sint)dst);
		}

		src1 = MASK_OUT_ABOVE_16(src);
		src2 = src>>16;
		dst1 = MASK_OUT_ABOVE_16(dst);
		dst2 = dst>>16;


		r1 = src1 * dst1;
		r2 = src1 * dst2;
		r3 = src2 * dst1;
		r4 = src2 * dst2;

		lo = r1 + (MASK_OUT_ABOVE_16(r2)<<16) + (MASK_OUT_ABOVE_16(r3)<<16);
		hi = r4 + (r2>>16) + (r3>>16) + (((r1>>16) + MASK_OUT_ABOVE_16(r2) + MASK_OUT_ABOVE_16(r3)) >> 16);

		if(BIT_B(word2) && neg)
		{
			hi = (uint)MASK_OUT_ABOVE_32((-(sint)hi) - (lo != 0));
			lo = (uint)MASK_OUT_ABOVE_32(-(sint)lo);
		}

		if(BIT_A(word2))
		{
			REG_D[word2 & 7] = hi;
			REG_D[(word2 >> 12) & 7] = lo;
			FLAG_N = NFLAG_32(hi);
			FLAG_Z = hi | lo;
			FLAG_V = VFLAG_CLEAR;
			return;
		}

		REG_D[(word2 >> 12) & 7] = lo;
		FLAG_N = NFLAG_32(lo);
		FLAG_Z = lo;
		if(BIT_B(word2))
			FLAG_V = (!((GET_MSB_32(lo) && hi == 0xffffffff) || (!GET_MSB_32(lo) && !hi)))<<7;
		else
			FLAG_V = (hi != 0) << 7;
		return;
	}
	m68ki_exception_illegal();

#endif
}


void M68k::op_mull_32_al(void)
{
#if M68K_USE_64_BIT

	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		uint word2 = OPER_I_16();
		uint64 src = OPER_AL_32();
		uint64 dst = REG_D[(word2 >> 12) & 7];
		uint64 res;

		FLAG_C = CFLAG_CLEAR;

		if(BIT_B(word2))			   /* signed */
		{
			res = (sint64)((sint32)src) * (sint64)((sint32)dst);
			if(!BIT_A(word2))
			{
				FLAG_Z = MASK_OUT_ABOVE_32(res);
				FLAG_N = NFLAG_32(res);
				FLAG_V = ((sint64)res != (sint32)res)<<7;
				REG_D[(word2 >> 12) & 7] = FLAG_Z;
				return;
			}
			FLAG_Z = MASK_OUT_ABOVE_32(res) | (res>>32);
			FLAG_N = NFLAG_64(res);
			FLAG_V = VFLAG_CLEAR;
			REG_D[word2 & 7] = (res >> 32);
			REG_D[(word2 >> 12) & 7] = MASK_OUT_ABOVE_32(res);
			return;
		}

		res = src * dst;
		if(!BIT_A(word2))
		{
			FLAG_Z = MASK_OUT_ABOVE_32(res);
			FLAG_N = NFLAG_32(res);
			FLAG_V = (res > 0xffffffff)<<7;
			REG_D[(word2 >> 12) & 7] = FLAG_Z;
			return;
		}
		FLAG_Z = MASK_OUT_ABOVE_32(res) | (res>>32);
		FLAG_N = NFLAG_64(res);
		FLAG_V = VFLAG_CLEAR;
		REG_D[word2 & 7] = (res >> 32);
		REG_D[(word2 >> 12) & 7] = MASK_OUT_ABOVE_32(res);
		return;
	}
	m68ki_exception_illegal();

#else

	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		uint word2 = OPER_I_16();
		uint src = OPER_AL_32();
		uint dst = REG_D[(word2 >> 12) & 7];
		uint neg = GET_MSB_32(src ^ dst);
		uint src1;
		uint src2;
		uint dst1;
		uint dst2;
		uint r1;
		uint r2;
		uint r3;
		uint r4;
		uint lo;
		uint hi;

		FLAG_C = CFLAG_CLEAR;

		if(BIT_B(word2))			   /* signed */
		{
			if(GET_MSB_32(src))
				src = (uint)MASK_OUT_ABOVE_32(-(sint)src);
			if(GET_MSB_32(dst))
				dst = (uint)MASK_OUT_ABOVE_32(-(sint)dst);
		}

		src1 = MASK_OUT_ABOVE_16(src);
		src2 = src>>16;
		dst1 = MASK_OUT_ABOVE_16(dst);
		dst2 = dst>>16;


		r1 = src1 * dst1;
		r2 = src1 * dst2;
		r3 = src2 * dst1;
		r4 = src2 * dst2;

		lo = r1 + (MASK_OUT_ABOVE_16(r2)<<16) + (MASK_OUT_ABOVE_16(r3)<<16);
		hi = r4 + (r2>>16) + (r3>>16) + (((r1>>16) + MASK_OUT_ABOVE_16(r2) + MASK_OUT_ABOVE_16(r3)) >> 16);

		if(BIT_B(word2) && neg)
		{
			hi = (uint)MASK_OUT_ABOVE_32((-(sint)hi) - (lo != 0));
			lo = (uint)MASK_OUT_ABOVE_32(-(sint)lo);
		}

		if(BIT_A(word2))
		{
			REG_D[word2 & 7] = hi;
			REG_D[(word2 >> 12) & 7] = lo;
			FLAG_N = NFLAG_32(hi);
			FLAG_Z = hi | lo;
			FLAG_V = VFLAG_CLEAR;
			return;
		}

		REG_D[(word2 >> 12) & 7] = lo;
		FLAG_N = NFLAG_32(lo);
		FLAG_Z = lo;
		if(BIT_B(word2))
			FLAG_V = (!((GET_MSB_32(lo) && hi == 0xffffffff) || (!GET_MSB_32(lo) && !hi)))<<7;
		else
			FLAG_V = (hi != 0) << 7;
		return;
	}
	m68ki_exception_illegal();

#endif
}


void M68k::op_mull_32_pcdi(void)
{
#if M68K_USE_64_BIT

	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		uint word2 = OPER_I_16();
		uint64 src = OPER_PCDI_32();
		uint64 dst = REG_D[(word2 >> 12) & 7];
		uint64 res;

		FLAG_C = CFLAG_CLEAR;

		if(BIT_B(word2))			   /* signed */
		{
			res = (sint64)((sint32)src) * (sint64)((sint32)dst);
			if(!BIT_A(word2))
			{
				FLAG_Z = MASK_OUT_ABOVE_32(res);
				FLAG_N = NFLAG_32(res);
				FLAG_V = ((sint64)res != (sint32)res)<<7;
				REG_D[(word2 >> 12) & 7] = FLAG_Z;
				return;
			}
			FLAG_Z = MASK_OUT_ABOVE_32(res) | (res>>32);
			FLAG_N = NFLAG_64(res);
			FLAG_V = VFLAG_CLEAR;
			REG_D[word2 & 7] = (res >> 32);
			REG_D[(word2 >> 12) & 7] = MASK_OUT_ABOVE_32(res);
			return;
		}

		res = src * dst;
		if(!BIT_A(word2))
		{
			FLAG_Z = MASK_OUT_ABOVE_32(res);
			FLAG_N = NFLAG_32(res);
			FLAG_V = (res > 0xffffffff)<<7;
			REG_D[(word2 >> 12) & 7] = FLAG_Z;
			return;
		}
		FLAG_Z = MASK_OUT_ABOVE_32(res) | (res>>32);
		FLAG_N = NFLAG_64(res);
		FLAG_V = VFLAG_CLEAR;
		REG_D[word2 & 7] = (res >> 32);
		REG_D[(word2 >> 12) & 7] = MASK_OUT_ABOVE_32(res);
		return;
	}
	m68ki_exception_illegal();

#else

	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		uint word2 = OPER_I_16();
		uint src = OPER_PCDI_32();
		uint dst = REG_D[(word2 >> 12) & 7];
		uint neg = GET_MSB_32(src ^ dst);
		uint src1;
		uint src2;
		uint dst1;
		uint dst2;
		uint r1;
		uint r2;
		uint r3;
		uint r4;
		uint lo;
		uint hi;

		FLAG_C = CFLAG_CLEAR;

		if(BIT_B(word2))			   /* signed */
		{
			if(GET_MSB_32(src))
				src = (uint)MASK_OUT_ABOVE_32(-(sint)src);
			if(GET_MSB_32(dst))
				dst = (uint)MASK_OUT_ABOVE_32(-(sint)dst);
		}

		src1 = MASK_OUT_ABOVE_16(src);
		src2 = src>>16;
		dst1 = MASK_OUT_ABOVE_16(dst);
		dst2 = dst>>16;


		r1 = src1 * dst1;
		r2 = src1 * dst2;
		r3 = src2 * dst1;
		r4 = src2 * dst2;

		lo = r1 + (MASK_OUT_ABOVE_16(r2)<<16) + (MASK_OUT_ABOVE_16(r3)<<16);
		hi = r4 + (r2>>16) + (r3>>16) + (((r1>>16) + MASK_OUT_ABOVE_16(r2) + MASK_OUT_ABOVE_16(r3)) >> 16);

		if(BIT_B(word2) && neg)
		{
			hi = (uint)MASK_OUT_ABOVE_32((-(sint)hi) - (lo != 0));
			lo = (uint)MASK_OUT_ABOVE_32(-(sint)lo);
		}

		if(BIT_A(word2))
		{
			REG_D[word2 & 7] = hi;
			REG_D[(word2 >> 12) & 7] = lo;
			FLAG_N = NFLAG_32(hi);
			FLAG_Z = hi | lo;
			FLAG_V = VFLAG_CLEAR;
			return;
		}

		REG_D[(word2 >> 12) & 7] = lo;
		FLAG_N = NFLAG_32(lo);
		FLAG_Z = lo;
		if(BIT_B(word2))
			FLAG_V = (!((GET_MSB_32(lo) && hi == 0xffffffff) || (!GET_MSB_32(lo) && !hi)))<<7;
		else
			FLAG_V = (hi != 0) << 7;
		return;
	}
	m68ki_exception_illegal();

#endif
}


void M68k::op_mull_32_pcix(void)
{
#if M68K_USE_64_BIT

	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		uint word2 = OPER_I_16();
		uint64 src = OPER_PCIX_32();
		uint64 dst = REG_D[(word2 >> 12) & 7];
		uint64 res;

		FLAG_C = CFLAG_CLEAR;

		if(BIT_B(word2))			   /* signed */
		{
			res = (sint64)((sint32)src) * (sint64)((sint32)dst);
			if(!BIT_A(word2))
			{
				FLAG_Z = MASK_OUT_ABOVE_32(res);
				FLAG_N = NFLAG_32(res);
				FLAG_V = ((sint64)res != (sint32)res)<<7;
				REG_D[(word2 >> 12) & 7] = FLAG_Z;
				return;
			}
			FLAG_Z = MASK_OUT_ABOVE_32(res) | (res>>32);
			FLAG_N = NFLAG_64(res);
			FLAG_V = VFLAG_CLEAR;
			REG_D[word2 & 7] = (res >> 32);
			REG_D[(word2 >> 12) & 7] = MASK_OUT_ABOVE_32(res);
			return;
		}

		res = src * dst;
		if(!BIT_A(word2))
		{
			FLAG_Z = MASK_OUT_ABOVE_32(res);
			FLAG_N = NFLAG_32(res);
			FLAG_V = (res > 0xffffffff)<<7;
			REG_D[(word2 >> 12) & 7] = FLAG_Z;
			return;
		}
		FLAG_Z = MASK_OUT_ABOVE_32(res) | (res>>32);
		FLAG_N = NFLAG_64(res);
		FLAG_V = VFLAG_CLEAR;
		REG_D[word2 & 7] = (res >> 32);
		REG_D[(word2 >> 12) & 7] = MASK_OUT_ABOVE_32(res);
		return;
	}
	m68ki_exception_illegal();

#else

	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		uint word2 = OPER_I_16();
		uint src = OPER_PCIX_32();
		uint dst = REG_D[(word2 >> 12) & 7];
		uint neg = GET_MSB_32(src ^ dst);
		uint src1;
		uint src2;
		uint dst1;
		uint dst2;
		uint r1;
		uint r2;
		uint r3;
		uint r4;
		uint lo;
		uint hi;

		FLAG_C = CFLAG_CLEAR;

		if(BIT_B(word2))			   /* signed */
		{
			if(GET_MSB_32(src))
				src = (uint)MASK_OUT_ABOVE_32(-(sint)src);
			if(GET_MSB_32(dst))
				dst = (uint)MASK_OUT_ABOVE_32(-(sint)dst);
		}

		src1 = MASK_OUT_ABOVE_16(src);
		src2 = src>>16;
		dst1 = MASK_OUT_ABOVE_16(dst);
		dst2 = dst>>16;


		r1 = src1 * dst1;
		r2 = src1 * dst2;
		r3 = src2 * dst1;
		r4 = src2 * dst2;

		lo = r1 + (MASK_OUT_ABOVE_16(r2)<<16) + (MASK_OUT_ABOVE_16(r3)<<16);
		hi = r4 + (r2>>16) + (r3>>16) + (((r1>>16) + MASK_OUT_ABOVE_16(r2) + MASK_OUT_ABOVE_16(r3)) >> 16);

		if(BIT_B(word2) && neg)
		{
			hi = (uint)MASK_OUT_ABOVE_32((-(sint)hi) - (lo != 0));
			lo = (uint)MASK_OUT_ABOVE_32(-(sint)lo);
		}

		if(BIT_A(word2))
		{
			REG_D[word2 & 7] = hi;
			REG_D[(word2 >> 12) & 7] = lo;
			FLAG_N = NFLAG_32(hi);
			FLAG_Z = hi | lo;
			FLAG_V = VFLAG_CLEAR;
			return;
		}

		REG_D[(word2 >> 12) & 7] = lo;
		FLAG_N = NFLAG_32(lo);
		FLAG_Z = lo;
		if(BIT_B(word2))
			FLAG_V = (!((GET_MSB_32(lo) && hi == 0xffffffff) || (!GET_MSB_32(lo) && !hi)))<<7;
		else
			FLAG_V = (hi != 0) << 7;
		return;
	}
	m68ki_exception_illegal();

#endif
}


void M68k::op_mull_32_i(void)
{
#if M68K_USE_64_BIT

	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		uint word2 = OPER_I_16();
		uint64 src = OPER_I_32();
		uint64 dst = REG_D[(word2 >> 12) & 7];
		uint64 res;

		FLAG_C = CFLAG_CLEAR;

		if(BIT_B(word2))			   /* signed */
		{
			res = (sint64)((sint32)src) * (sint64)((sint32)dst);
			if(!BIT_A(word2))
			{
				FLAG_Z = MASK_OUT_ABOVE_32(res);
				FLAG_N = NFLAG_32(res);
				FLAG_V = ((sint64)res != (sint32)res)<<7;
				REG_D[(word2 >> 12) & 7] = FLAG_Z;
				return;
			}
			FLAG_Z = MASK_OUT_ABOVE_32(res) | (res>>32);
			FLAG_N = NFLAG_64(res);
			FLAG_V = VFLAG_CLEAR;
			REG_D[word2 & 7] = (res >> 32);
			REG_D[(word2 >> 12) & 7] = MASK_OUT_ABOVE_32(res);
			return;
		}

		res = src * dst;
		if(!BIT_A(word2))
		{
			FLAG_Z = MASK_OUT_ABOVE_32(res);
			FLAG_N = NFLAG_32(res);
			FLAG_V = (res > 0xffffffff)<<7;
			REG_D[(word2 >> 12) & 7] = FLAG_Z;
			return;
		}
		FLAG_Z = MASK_OUT_ABOVE_32(res) | (res>>32);
		FLAG_N = NFLAG_64(res);
		FLAG_V = VFLAG_CLEAR;
		REG_D[word2 & 7] = (res >> 32);
		REG_D[(word2 >> 12) & 7] = MASK_OUT_ABOVE_32(res);
		return;
	}
	m68ki_exception_illegal();

#else

	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		uint word2 = OPER_I_16();
		uint src = OPER_I_32();
		uint dst = REG_D[(word2 >> 12) & 7];
		uint neg = GET_MSB_32(src ^ dst);
		uint src1;
		uint src2;
		uint dst1;
		uint dst2;
		uint r1;
		uint r2;
		uint r3;
		uint r4;
		uint lo;
		uint hi;

		FLAG_C = CFLAG_CLEAR;

		if(BIT_B(word2))			   /* signed */
		{
			if(GET_MSB_32(src))
				src = (uint)MASK_OUT_ABOVE_32(-(sint)src);
			if(GET_MSB_32(dst))
				dst = (uint)MASK_OUT_ABOVE_32(-(sint)dst);
		}

		src1 = MASK_OUT_ABOVE_16(src);
		src2 = src>>16;
		dst1 = MASK_OUT_ABOVE_16(dst);
		dst2 = dst>>16;


		r1 = src1 * dst1;
		r2 = src1 * dst2;
		r3 = src2 * dst1;
		r4 = src2 * dst2;

		lo = r1 + (MASK_OUT_ABOVE_16(r2)<<16) + (MASK_OUT_ABOVE_16(r3)<<16);
		hi = r4 + (r2>>16) + (r3>>16) + (((r1>>16) + MASK_OUT_ABOVE_16(r2) + MASK_OUT_ABOVE_16(r3)) >> 16);

		if(BIT_B(word2) && neg)
		{
			hi = (uint)MASK_OUT_ABOVE_32((-(sint)hi) - (lo != 0));
			lo = (uint)MASK_OUT_ABOVE_32(-(sint)lo);
		}

		if(BIT_A(word2))
		{
			REG_D[word2 & 7] = hi;
			REG_D[(word2 >> 12) & 7] = lo;
			FLAG_N = NFLAG_32(hi);
			FLAG_Z = hi | lo;
			FLAG_V = VFLAG_CLEAR;
			return;
		}

		REG_D[(word2 >> 12) & 7] = lo;
		FLAG_N = NFLAG_32(lo);
		FLAG_Z = lo;
		if(BIT_B(word2))
			FLAG_V = (!((GET_MSB_32(lo) && hi == 0xffffffff) || (!GET_MSB_32(lo) && !hi)))<<7;
		else
			FLAG_V = (hi != 0) << 7;
		return;
	}
	m68ki_exception_illegal();

#endif
}


