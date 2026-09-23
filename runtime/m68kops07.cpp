#include "m68kops.h"

void M68k::op_shi_8_ai(void)
{
	m68ki_write_8(EA_AY_AI_8(), COND_HI() ? 0xff : 0);
}


void M68k::op_shi_8_pi(void)
{
	m68ki_write_8(EA_AY_PI_8(), COND_HI() ? 0xff : 0);
}


void M68k::op_shi_8_pi7(void)
{
	m68ki_write_8(EA_A7_PI_8(), COND_HI() ? 0xff : 0);
}


void M68k::op_shi_8_pd(void)
{
	m68ki_write_8(EA_AY_PD_8(), COND_HI() ? 0xff : 0);
}


void M68k::op_shi_8_pd7(void)
{
	m68ki_write_8(EA_A7_PD_8(), COND_HI() ? 0xff : 0);
}


void M68k::op_shi_8_di(void)
{
	m68ki_write_8(EA_AY_DI_8(), COND_HI() ? 0xff : 0);
}


void M68k::op_shi_8_ix(void)
{
	m68ki_write_8(EA_AY_IX_8(), COND_HI() ? 0xff : 0);
}


void M68k::op_shi_8_aw(void)
{
	m68ki_write_8(EA_AW_8(), COND_HI() ? 0xff : 0);
}


void M68k::op_shi_8_al(void)
{
	m68ki_write_8(EA_AL_8(), COND_HI() ? 0xff : 0);
}


void M68k::op_sls_8_ai(void)
{
	m68ki_write_8(EA_AY_AI_8(), COND_LS() ? 0xff : 0);
}


void M68k::op_sls_8_pi(void)
{
	m68ki_write_8(EA_AY_PI_8(), COND_LS() ? 0xff : 0);
}


void M68k::op_sls_8_pi7(void)
{
	m68ki_write_8(EA_A7_PI_8(), COND_LS() ? 0xff : 0);
}


void M68k::op_sls_8_pd(void)
{
	m68ki_write_8(EA_AY_PD_8(), COND_LS() ? 0xff : 0);
}


void M68k::op_sls_8_pd7(void)
{
	m68ki_write_8(EA_A7_PD_8(), COND_LS() ? 0xff : 0);
}


void M68k::op_sls_8_di(void)
{
	m68ki_write_8(EA_AY_DI_8(), COND_LS() ? 0xff : 0);
}


void M68k::op_sls_8_ix(void)
{
	m68ki_write_8(EA_AY_IX_8(), COND_LS() ? 0xff : 0);
}


void M68k::op_sls_8_aw(void)
{
	m68ki_write_8(EA_AW_8(), COND_LS() ? 0xff : 0);
}


void M68k::op_sls_8_al(void)
{
	m68ki_write_8(EA_AL_8(), COND_LS() ? 0xff : 0);
}


void M68k::op_scc_8_ai(void)
{
	m68ki_write_8(EA_AY_AI_8(), COND_CC() ? 0xff : 0);
}


void M68k::op_scc_8_pi(void)
{
	m68ki_write_8(EA_AY_PI_8(), COND_CC() ? 0xff : 0);
}


void M68k::op_scc_8_pi7(void)
{
	m68ki_write_8(EA_A7_PI_8(), COND_CC() ? 0xff : 0);
}


void M68k::op_scc_8_pd(void)
{
	m68ki_write_8(EA_AY_PD_8(), COND_CC() ? 0xff : 0);
}


void M68k::op_scc_8_pd7(void)
{
	m68ki_write_8(EA_A7_PD_8(), COND_CC() ? 0xff : 0);
}


void M68k::op_scc_8_di(void)
{
	m68ki_write_8(EA_AY_DI_8(), COND_CC() ? 0xff : 0);
}


void M68k::op_scc_8_ix(void)
{
	m68ki_write_8(EA_AY_IX_8(), COND_CC() ? 0xff : 0);
}


void M68k::op_scc_8_aw(void)
{
	m68ki_write_8(EA_AW_8(), COND_CC() ? 0xff : 0);
}


void M68k::op_scc_8_al(void)
{
	m68ki_write_8(EA_AL_8(), COND_CC() ? 0xff : 0);
}


void M68k::op_scs_8_ai(void)
{
	m68ki_write_8(EA_AY_AI_8(), COND_CS() ? 0xff : 0);
}


void M68k::op_scs_8_pi(void)
{
	m68ki_write_8(EA_AY_PI_8(), COND_CS() ? 0xff : 0);
}


void M68k::op_scs_8_pi7(void)
{
	m68ki_write_8(EA_A7_PI_8(), COND_CS() ? 0xff : 0);
}


void M68k::op_scs_8_pd(void)
{
	m68ki_write_8(EA_AY_PD_8(), COND_CS() ? 0xff : 0);
}


void M68k::op_scs_8_pd7(void)
{
	m68ki_write_8(EA_A7_PD_8(), COND_CS() ? 0xff : 0);
}


void M68k::op_scs_8_di(void)
{
	m68ki_write_8(EA_AY_DI_8(), COND_CS() ? 0xff : 0);
}


void M68k::op_scs_8_ix(void)
{
	m68ki_write_8(EA_AY_IX_8(), COND_CS() ? 0xff : 0);
}


void M68k::op_scs_8_aw(void)
{
	m68ki_write_8(EA_AW_8(), COND_CS() ? 0xff : 0);
}


void M68k::op_scs_8_al(void)
{
	m68ki_write_8(EA_AL_8(), COND_CS() ? 0xff : 0);
}


void M68k::op_sne_8_ai(void)
{
	m68ki_write_8(EA_AY_AI_8(), COND_NE() ? 0xff : 0);
}


void M68k::op_sne_8_pi(void)
{
	m68ki_write_8(EA_AY_PI_8(), COND_NE() ? 0xff : 0);
}


void M68k::op_sne_8_pi7(void)
{
	m68ki_write_8(EA_A7_PI_8(), COND_NE() ? 0xff : 0);
}


void M68k::op_sne_8_pd(void)
{
	m68ki_write_8(EA_AY_PD_8(), COND_NE() ? 0xff : 0);
}


void M68k::op_sne_8_pd7(void)
{
	m68ki_write_8(EA_A7_PD_8(), COND_NE() ? 0xff : 0);
}


void M68k::op_sne_8_di(void)
{
	m68ki_write_8(EA_AY_DI_8(), COND_NE() ? 0xff : 0);
}


void M68k::op_sne_8_ix(void)
{
	m68ki_write_8(EA_AY_IX_8(), COND_NE() ? 0xff : 0);
}


void M68k::op_sne_8_aw(void)
{
	m68ki_write_8(EA_AW_8(), COND_NE() ? 0xff : 0);
}


void M68k::op_sne_8_al(void)
{
	m68ki_write_8(EA_AL_8(), COND_NE() ? 0xff : 0);
}


void M68k::op_seq_8_ai(void)
{
	m68ki_write_8(EA_AY_AI_8(), COND_EQ() ? 0xff : 0);
}


void M68k::op_seq_8_pi(void)
{
	m68ki_write_8(EA_AY_PI_8(), COND_EQ() ? 0xff : 0);
}


void M68k::op_seq_8_pi7(void)
{
	m68ki_write_8(EA_A7_PI_8(), COND_EQ() ? 0xff : 0);
}


void M68k::op_seq_8_pd(void)
{
	m68ki_write_8(EA_AY_PD_8(), COND_EQ() ? 0xff : 0);
}


void M68k::op_seq_8_pd7(void)
{
	m68ki_write_8(EA_A7_PD_8(), COND_EQ() ? 0xff : 0);
}


void M68k::op_seq_8_di(void)
{
	m68ki_write_8(EA_AY_DI_8(), COND_EQ() ? 0xff : 0);
}


void M68k::op_seq_8_ix(void)
{
	m68ki_write_8(EA_AY_IX_8(), COND_EQ() ? 0xff : 0);
}


void M68k::op_seq_8_aw(void)
{
	m68ki_write_8(EA_AW_8(), COND_EQ() ? 0xff : 0);
}


void M68k::op_seq_8_al(void)
{
	m68ki_write_8(EA_AL_8(), COND_EQ() ? 0xff : 0);
}


void M68k::op_svc_8_ai(void)
{
	m68ki_write_8(EA_AY_AI_8(), COND_VC() ? 0xff : 0);
}


void M68k::op_svc_8_pi(void)
{
	m68ki_write_8(EA_AY_PI_8(), COND_VC() ? 0xff : 0);
}


void M68k::op_svc_8_pi7(void)
{
	m68ki_write_8(EA_A7_PI_8(), COND_VC() ? 0xff : 0);
}


void M68k::op_svc_8_pd(void)
{
	m68ki_write_8(EA_AY_PD_8(), COND_VC() ? 0xff : 0);
}


void M68k::op_svc_8_pd7(void)
{
	m68ki_write_8(EA_A7_PD_8(), COND_VC() ? 0xff : 0);
}


void M68k::op_svc_8_di(void)
{
	m68ki_write_8(EA_AY_DI_8(), COND_VC() ? 0xff : 0);
}


void M68k::op_svc_8_ix(void)
{
	m68ki_write_8(EA_AY_IX_8(), COND_VC() ? 0xff : 0);
}


void M68k::op_svc_8_aw(void)
{
	m68ki_write_8(EA_AW_8(), COND_VC() ? 0xff : 0);
}


void M68k::op_svc_8_al(void)
{
	m68ki_write_8(EA_AL_8(), COND_VC() ? 0xff : 0);
}


void M68k::op_svs_8_ai(void)
{
	m68ki_write_8(EA_AY_AI_8(), COND_VS() ? 0xff : 0);
}


void M68k::op_svs_8_pi(void)
{
	m68ki_write_8(EA_AY_PI_8(), COND_VS() ? 0xff : 0);
}


void M68k::op_svs_8_pi7(void)
{
	m68ki_write_8(EA_A7_PI_8(), COND_VS() ? 0xff : 0);
}


void M68k::op_svs_8_pd(void)
{
	m68ki_write_8(EA_AY_PD_8(), COND_VS() ? 0xff : 0);
}


void M68k::op_svs_8_pd7(void)
{
	m68ki_write_8(EA_A7_PD_8(), COND_VS() ? 0xff : 0);
}


void M68k::op_svs_8_di(void)
{
	m68ki_write_8(EA_AY_DI_8(), COND_VS() ? 0xff : 0);
}


void M68k::op_svs_8_ix(void)
{
	m68ki_write_8(EA_AY_IX_8(), COND_VS() ? 0xff : 0);
}


void M68k::op_svs_8_aw(void)
{
	m68ki_write_8(EA_AW_8(), COND_VS() ? 0xff : 0);
}


void M68k::op_svs_8_al(void)
{
	m68ki_write_8(EA_AL_8(), COND_VS() ? 0xff : 0);
}


void M68k::op_spl_8_ai(void)
{
	m68ki_write_8(EA_AY_AI_8(), COND_PL() ? 0xff : 0);
}


void M68k::op_spl_8_pi(void)
{
	m68ki_write_8(EA_AY_PI_8(), COND_PL() ? 0xff : 0);
}


void M68k::op_spl_8_pi7(void)
{
	m68ki_write_8(EA_A7_PI_8(), COND_PL() ? 0xff : 0);
}


void M68k::op_spl_8_pd(void)
{
	m68ki_write_8(EA_AY_PD_8(), COND_PL() ? 0xff : 0);
}


void M68k::op_spl_8_pd7(void)
{
	m68ki_write_8(EA_A7_PD_8(), COND_PL() ? 0xff : 0);
}


void M68k::op_spl_8_di(void)
{
	m68ki_write_8(EA_AY_DI_8(), COND_PL() ? 0xff : 0);
}


void M68k::op_spl_8_ix(void)
{
	m68ki_write_8(EA_AY_IX_8(), COND_PL() ? 0xff : 0);
}


void M68k::op_spl_8_aw(void)
{
	m68ki_write_8(EA_AW_8(), COND_PL() ? 0xff : 0);
}


void M68k::op_spl_8_al(void)
{
	m68ki_write_8(EA_AL_8(), COND_PL() ? 0xff : 0);
}


void M68k::op_smi_8_ai(void)
{
	m68ki_write_8(EA_AY_AI_8(), COND_MI() ? 0xff : 0);
}


void M68k::op_smi_8_pi(void)
{
	m68ki_write_8(EA_AY_PI_8(), COND_MI() ? 0xff : 0);
}


void M68k::op_smi_8_pi7(void)
{
	m68ki_write_8(EA_A7_PI_8(), COND_MI() ? 0xff : 0);
}


void M68k::op_smi_8_pd(void)
{
	m68ki_write_8(EA_AY_PD_8(), COND_MI() ? 0xff : 0);
}


void M68k::op_smi_8_pd7(void)
{
	m68ki_write_8(EA_A7_PD_8(), COND_MI() ? 0xff : 0);
}


void M68k::op_smi_8_di(void)
{
	m68ki_write_8(EA_AY_DI_8(), COND_MI() ? 0xff : 0);
}


void M68k::op_smi_8_ix(void)
{
	m68ki_write_8(EA_AY_IX_8(), COND_MI() ? 0xff : 0);
}


void M68k::op_smi_8_aw(void)
{
	m68ki_write_8(EA_AW_8(), COND_MI() ? 0xff : 0);
}


void M68k::op_smi_8_al(void)
{
	m68ki_write_8(EA_AL_8(), COND_MI() ? 0xff : 0);
}


void M68k::op_sge_8_ai(void)
{
	m68ki_write_8(EA_AY_AI_8(), COND_GE() ? 0xff : 0);
}


void M68k::op_sge_8_pi(void)
{
	m68ki_write_8(EA_AY_PI_8(), COND_GE() ? 0xff : 0);
}


void M68k::op_sge_8_pi7(void)
{
	m68ki_write_8(EA_A7_PI_8(), COND_GE() ? 0xff : 0);
}


void M68k::op_sge_8_pd(void)
{
	m68ki_write_8(EA_AY_PD_8(), COND_GE() ? 0xff : 0);
}


void M68k::op_sge_8_pd7(void)
{
	m68ki_write_8(EA_A7_PD_8(), COND_GE() ? 0xff : 0);
}


void M68k::op_sge_8_di(void)
{
	m68ki_write_8(EA_AY_DI_8(), COND_GE() ? 0xff : 0);
}


void M68k::op_sge_8_ix(void)
{
	m68ki_write_8(EA_AY_IX_8(), COND_GE() ? 0xff : 0);
}


void M68k::op_sge_8_aw(void)
{
	m68ki_write_8(EA_AW_8(), COND_GE() ? 0xff : 0);
}


void M68k::op_sge_8_al(void)
{
	m68ki_write_8(EA_AL_8(), COND_GE() ? 0xff : 0);
}


void M68k::op_slt_8_ai(void)
{
	m68ki_write_8(EA_AY_AI_8(), COND_LT() ? 0xff : 0);
}


void M68k::op_slt_8_pi(void)
{
	m68ki_write_8(EA_AY_PI_8(), COND_LT() ? 0xff : 0);
}


void M68k::op_slt_8_pi7(void)
{
	m68ki_write_8(EA_A7_PI_8(), COND_LT() ? 0xff : 0);
}


void M68k::op_slt_8_pd(void)
{
	m68ki_write_8(EA_AY_PD_8(), COND_LT() ? 0xff : 0);
}


void M68k::op_slt_8_pd7(void)
{
	m68ki_write_8(EA_A7_PD_8(), COND_LT() ? 0xff : 0);
}


void M68k::op_slt_8_di(void)
{
	m68ki_write_8(EA_AY_DI_8(), COND_LT() ? 0xff : 0);
}


void M68k::op_slt_8_ix(void)
{
	m68ki_write_8(EA_AY_IX_8(), COND_LT() ? 0xff : 0);
}


void M68k::op_slt_8_aw(void)
{
	m68ki_write_8(EA_AW_8(), COND_LT() ? 0xff : 0);
}


void M68k::op_slt_8_al(void)
{
	m68ki_write_8(EA_AL_8(), COND_LT() ? 0xff : 0);
}


void M68k::op_sgt_8_ai(void)
{
	m68ki_write_8(EA_AY_AI_8(), COND_GT() ? 0xff : 0);
}


void M68k::op_sgt_8_pi(void)
{
	m68ki_write_8(EA_AY_PI_8(), COND_GT() ? 0xff : 0);
}


void M68k::op_sgt_8_pi7(void)
{
	m68ki_write_8(EA_A7_PI_8(), COND_GT() ? 0xff : 0);
}


void M68k::op_sgt_8_pd(void)
{
	m68ki_write_8(EA_AY_PD_8(), COND_GT() ? 0xff : 0);
}


void M68k::op_sgt_8_pd7(void)
{
	m68ki_write_8(EA_A7_PD_8(), COND_GT() ? 0xff : 0);
}


void M68k::op_sgt_8_di(void)
{
	m68ki_write_8(EA_AY_DI_8(), COND_GT() ? 0xff : 0);
}


void M68k::op_sgt_8_ix(void)
{
	m68ki_write_8(EA_AY_IX_8(), COND_GT() ? 0xff : 0);
}


void M68k::op_sgt_8_aw(void)
{
	m68ki_write_8(EA_AW_8(), COND_GT() ? 0xff : 0);
}


void M68k::op_sgt_8_al(void)
{
	m68ki_write_8(EA_AL_8(), COND_GT() ? 0xff : 0);
}


void M68k::op_sle_8_ai(void)
{
	m68ki_write_8(EA_AY_AI_8(), COND_LE() ? 0xff : 0);
}


void M68k::op_sle_8_pi(void)
{
	m68ki_write_8(EA_AY_PI_8(), COND_LE() ? 0xff : 0);
}


void M68k::op_sle_8_pi7(void)
{
	m68ki_write_8(EA_A7_PI_8(), COND_LE() ? 0xff : 0);
}


void M68k::op_sle_8_pd(void)
{
	m68ki_write_8(EA_AY_PD_8(), COND_LE() ? 0xff : 0);
}


void M68k::op_sle_8_pd7(void)
{
	m68ki_write_8(EA_A7_PD_8(), COND_LE() ? 0xff : 0);
}


void M68k::op_sle_8_di(void)
{
	m68ki_write_8(EA_AY_DI_8(), COND_LE() ? 0xff : 0);
}


void M68k::op_sle_8_ix(void)
{
	m68ki_write_8(EA_AY_IX_8(), COND_LE() ? 0xff : 0);
}


void M68k::op_sle_8_aw(void)
{
	m68ki_write_8(EA_AW_8(), COND_LE() ? 0xff : 0);
}


void M68k::op_sle_8_al(void)
{
	m68ki_write_8(EA_AL_8(), COND_LE() ? 0xff : 0);
}


void M68k::op_stop(void)
{
	if(FLAG_S)
	{
		uint new_sr = OPER_I_16();
		m68ki_trace_t0();			   /* auto-disable (see m68kcpu.h) */
		CPU_STOPPED |= STOP_LEVEL_STOP;
		m68ki_set_sr(new_sr);
		if(m68ki_remaining_cycles >= CYC_INSTRUCTION[REG_IR])
			m68ki_remaining_cycles = CYC_INSTRUCTION[REG_IR];
		else
			USE_ALL_CYCLES();
		return;
	}
	m68ki_exception_privilege_violation();
}


void M68k::op_sub_8_er_d(void)
{
	uint* r_dst = &DX;
	uint src = MASK_OUT_ABOVE_8(DY);
	uint dst = MASK_OUT_ABOVE_8(*r_dst);
	uint res = dst - src;

	FLAG_N = NFLAG_8(res);
	FLAG_X = FLAG_C = CFLAG_8(res);
	FLAG_V = VFLAG_SUB_8(src, dst, res);
	FLAG_Z = MASK_OUT_ABOVE_8(res);

	*r_dst = MASK_OUT_BELOW_8(*r_dst) | FLAG_Z;
}


void M68k::op_sub_8_er_ai(void)
{
	uint* r_dst = &DX;
	uint src = OPER_AY_AI_8();
	uint dst = MASK_OUT_ABOVE_8(*r_dst);
	uint res = dst - src;

	FLAG_N = NFLAG_8(res);
	FLAG_X = FLAG_C = CFLAG_8(res);
	FLAG_V = VFLAG_SUB_8(src, dst, res);
	FLAG_Z = MASK_OUT_ABOVE_8(res);

	*r_dst = MASK_OUT_BELOW_8(*r_dst) | FLAG_Z;
}


void M68k::op_sub_8_er_pi(void)
{
	uint* r_dst = &DX;
	uint src = OPER_AY_PI_8();
	uint dst = MASK_OUT_ABOVE_8(*r_dst);
	uint res = dst - src;

	FLAG_N = NFLAG_8(res);
	FLAG_X = FLAG_C = CFLAG_8(res);
	FLAG_V = VFLAG_SUB_8(src, dst, res);
	FLAG_Z = MASK_OUT_ABOVE_8(res);

	*r_dst = MASK_OUT_BELOW_8(*r_dst) | FLAG_Z;
}


void M68k::op_sub_8_er_pi7(void)
{
	uint* r_dst = &DX;
	uint src = OPER_A7_PI_8();
	uint dst = MASK_OUT_ABOVE_8(*r_dst);
	uint res = dst - src;

	FLAG_N = NFLAG_8(res);
	FLAG_X = FLAG_C = CFLAG_8(res);
	FLAG_V = VFLAG_SUB_8(src, dst, res);
	FLAG_Z = MASK_OUT_ABOVE_8(res);

	*r_dst = MASK_OUT_BELOW_8(*r_dst) | FLAG_Z;
}


void M68k::op_sub_8_er_pd(void)
{
	uint* r_dst = &DX;
	uint src = OPER_AY_PD_8();
	uint dst = MASK_OUT_ABOVE_8(*r_dst);
	uint res = dst - src;

	FLAG_N = NFLAG_8(res);
	FLAG_X = FLAG_C = CFLAG_8(res);
	FLAG_V = VFLAG_SUB_8(src, dst, res);
	FLAG_Z = MASK_OUT_ABOVE_8(res);

	*r_dst = MASK_OUT_BELOW_8(*r_dst) | FLAG_Z;
}


void M68k::op_sub_8_er_pd7(void)
{
	uint* r_dst = &DX;
	uint src = OPER_A7_PD_8();
	uint dst = MASK_OUT_ABOVE_8(*r_dst);
	uint res = dst - src;

	FLAG_N = NFLAG_8(res);
	FLAG_X = FLAG_C = CFLAG_8(res);
	FLAG_V = VFLAG_SUB_8(src, dst, res);
	FLAG_Z = MASK_OUT_ABOVE_8(res);

	*r_dst = MASK_OUT_BELOW_8(*r_dst) | FLAG_Z;
}


void M68k::op_sub_8_er_di(void)
{
	uint* r_dst = &DX;
	uint src = OPER_AY_DI_8();
	uint dst = MASK_OUT_ABOVE_8(*r_dst);
	uint res = dst - src;

	FLAG_N = NFLAG_8(res);
	FLAG_X = FLAG_C = CFLAG_8(res);
	FLAG_V = VFLAG_SUB_8(src, dst, res);
	FLAG_Z = MASK_OUT_ABOVE_8(res);

	*r_dst = MASK_OUT_BELOW_8(*r_dst) | FLAG_Z;
}


void M68k::op_sub_8_er_ix(void)
{
	uint* r_dst = &DX;
	uint src = OPER_AY_IX_8();
	uint dst = MASK_OUT_ABOVE_8(*r_dst);
	uint res = dst - src;

	FLAG_N = NFLAG_8(res);
	FLAG_X = FLAG_C = CFLAG_8(res);
	FLAG_V = VFLAG_SUB_8(src, dst, res);
	FLAG_Z = MASK_OUT_ABOVE_8(res);

	*r_dst = MASK_OUT_BELOW_8(*r_dst) | FLAG_Z;
}


void M68k::op_sub_8_er_aw(void)
{
	uint* r_dst = &DX;
	uint src = OPER_AW_8();
	uint dst = MASK_OUT_ABOVE_8(*r_dst);
	uint res = dst - src;

	FLAG_N = NFLAG_8(res);
	FLAG_X = FLAG_C = CFLAG_8(res);
	FLAG_V = VFLAG_SUB_8(src, dst, res);
	FLAG_Z = MASK_OUT_ABOVE_8(res);

	*r_dst = MASK_OUT_BELOW_8(*r_dst) | FLAG_Z;
}


void M68k::op_sub_8_er_al(void)
{
	uint* r_dst = &DX;
	uint src = OPER_AL_8();
	uint dst = MASK_OUT_ABOVE_8(*r_dst);
	uint res = dst - src;

	FLAG_N = NFLAG_8(res);
	FLAG_X = FLAG_C = CFLAG_8(res);
	FLAG_V = VFLAG_SUB_8(src, dst, res);
	FLAG_Z = MASK_OUT_ABOVE_8(res);

	*r_dst = MASK_OUT_BELOW_8(*r_dst) | FLAG_Z;
}


void M68k::op_sub_8_er_pcdi(void)
{
	uint* r_dst = &DX;
	uint src = OPER_PCDI_8();
	uint dst = MASK_OUT_ABOVE_8(*r_dst);
	uint res = dst - src;

	FLAG_N = NFLAG_8(res);
	FLAG_X = FLAG_C = CFLAG_8(res);
	FLAG_V = VFLAG_SUB_8(src, dst, res);
	FLAG_Z = MASK_OUT_ABOVE_8(res);

	*r_dst = MASK_OUT_BELOW_8(*r_dst) | FLAG_Z;
}


void M68k::op_sub_8_er_pcix(void)
{
	uint* r_dst = &DX;
	uint src = OPER_PCIX_8();
	uint dst = MASK_OUT_ABOVE_8(*r_dst);
	uint res = dst - src;

	FLAG_N = NFLAG_8(res);
	FLAG_X = FLAG_C = CFLAG_8(res);
	FLAG_V = VFLAG_SUB_8(src, dst, res);
	FLAG_Z = MASK_OUT_ABOVE_8(res);

	*r_dst = MASK_OUT_BELOW_8(*r_dst) | FLAG_Z;
}


void M68k::op_sub_8_er_i(void)
{
	uint* r_dst = &DX;
	uint src = OPER_I_8();
	uint dst = MASK_OUT_ABOVE_8(*r_dst);
	uint res = dst - src;

	FLAG_N = NFLAG_8(res);
	FLAG_X = FLAG_C = CFLAG_8(res);
	FLAG_V = VFLAG_SUB_8(src, dst, res);
	FLAG_Z = MASK_OUT_ABOVE_8(res);

	*r_dst = MASK_OUT_BELOW_8(*r_dst) | FLAG_Z;
}


void M68k::op_sub_16_er_d(void)
{
	uint* r_dst = &DX;
	uint src = MASK_OUT_ABOVE_16(DY);
	uint dst = MASK_OUT_ABOVE_16(*r_dst);
	uint res = dst - src;

	FLAG_N = NFLAG_16(res);
	FLAG_X = FLAG_C = CFLAG_16(res);
	FLAG_V = VFLAG_SUB_16(src, dst, res);
	FLAG_Z = MASK_OUT_ABOVE_16(res);

	*r_dst = MASK_OUT_BELOW_16(*r_dst) | FLAG_Z;
}


void M68k::op_sub_16_er_a(void)
{
	uint* r_dst = &DX;
	uint src = MASK_OUT_ABOVE_16(AY);
	uint dst = MASK_OUT_ABOVE_16(*r_dst);
	uint res = dst - src;

	FLAG_N = NFLAG_16(res);
	FLAG_X = FLAG_C = CFLAG_16(res);
	FLAG_V = VFLAG_SUB_16(src, dst, res);
	FLAG_Z = MASK_OUT_ABOVE_16(res);

	*r_dst = MASK_OUT_BELOW_16(*r_dst) | FLAG_Z;
}


void M68k::op_sub_16_er_ai(void)
{
	uint* r_dst = &DX;
	uint src = OPER_AY_AI_16();
	uint dst = MASK_OUT_ABOVE_16(*r_dst);
	uint res = dst - src;

	FLAG_N = NFLAG_16(res);
	FLAG_X = FLAG_C = CFLAG_16(res);
	FLAG_V = VFLAG_SUB_16(src, dst, res);
	FLAG_Z = MASK_OUT_ABOVE_16(res);

	*r_dst = MASK_OUT_BELOW_16(*r_dst) | FLAG_Z;
}


void M68k::op_sub_16_er_pi(void)
{
	uint* r_dst = &DX;
	uint src = OPER_AY_PI_16();
	uint dst = MASK_OUT_ABOVE_16(*r_dst);
	uint res = dst - src;

	FLAG_N = NFLAG_16(res);
	FLAG_X = FLAG_C = CFLAG_16(res);
	FLAG_V = VFLAG_SUB_16(src, dst, res);
	FLAG_Z = MASK_OUT_ABOVE_16(res);

	*r_dst = MASK_OUT_BELOW_16(*r_dst) | FLAG_Z;
}


void M68k::op_sub_16_er_pd(void)
{
	uint* r_dst = &DX;
	uint src = OPER_AY_PD_16();
	uint dst = MASK_OUT_ABOVE_16(*r_dst);
	uint res = dst - src;

	FLAG_N = NFLAG_16(res);
	FLAG_X = FLAG_C = CFLAG_16(res);
	FLAG_V = VFLAG_SUB_16(src, dst, res);
	FLAG_Z = MASK_OUT_ABOVE_16(res);

	*r_dst = MASK_OUT_BELOW_16(*r_dst) | FLAG_Z;
}


void M68k::op_sub_16_er_di(void)
{
	uint* r_dst = &DX;
	uint src = OPER_AY_DI_16();
	uint dst = MASK_OUT_ABOVE_16(*r_dst);
	uint res = dst - src;

	FLAG_N = NFLAG_16(res);
	FLAG_X = FLAG_C = CFLAG_16(res);
	FLAG_V = VFLAG_SUB_16(src, dst, res);
	FLAG_Z = MASK_OUT_ABOVE_16(res);

	*r_dst = MASK_OUT_BELOW_16(*r_dst) | FLAG_Z;
}


void M68k::op_sub_16_er_ix(void)
{
	uint* r_dst = &DX;
	uint src = OPER_AY_IX_16();
	uint dst = MASK_OUT_ABOVE_16(*r_dst);
	uint res = dst - src;

	FLAG_N = NFLAG_16(res);
	FLAG_X = FLAG_C = CFLAG_16(res);
	FLAG_V = VFLAG_SUB_16(src, dst, res);
	FLAG_Z = MASK_OUT_ABOVE_16(res);

	*r_dst = MASK_OUT_BELOW_16(*r_dst) | FLAG_Z;
}


void M68k::op_sub_16_er_aw(void)
{
	uint* r_dst = &DX;
	uint src = OPER_AW_16();
	uint dst = MASK_OUT_ABOVE_16(*r_dst);
	uint res = dst - src;

	FLAG_N = NFLAG_16(res);
	FLAG_X = FLAG_C = CFLAG_16(res);
	FLAG_V = VFLAG_SUB_16(src, dst, res);
	FLAG_Z = MASK_OUT_ABOVE_16(res);

	*r_dst = MASK_OUT_BELOW_16(*r_dst) | FLAG_Z;
}


void M68k::op_sub_16_er_al(void)
{
	uint* r_dst = &DX;
	uint src = OPER_AL_16();
	uint dst = MASK_OUT_ABOVE_16(*r_dst);
	uint res = dst - src;

	FLAG_N = NFLAG_16(res);
	FLAG_X = FLAG_C = CFLAG_16(res);
	FLAG_V = VFLAG_SUB_16(src, dst, res);
	FLAG_Z = MASK_OUT_ABOVE_16(res);

	*r_dst = MASK_OUT_BELOW_16(*r_dst) | FLAG_Z;
}


void M68k::op_sub_16_er_pcdi(void)
{
	uint* r_dst = &DX;
	uint src = OPER_PCDI_16();
	uint dst = MASK_OUT_ABOVE_16(*r_dst);
	uint res = dst - src;

	FLAG_N = NFLAG_16(res);
	FLAG_X = FLAG_C = CFLAG_16(res);
	FLAG_V = VFLAG_SUB_16(src, dst, res);
	FLAG_Z = MASK_OUT_ABOVE_16(res);

	*r_dst = MASK_OUT_BELOW_16(*r_dst) | FLAG_Z;
}


void M68k::op_sub_16_er_pcix(void)
{
	uint* r_dst = &DX;
	uint src = OPER_PCIX_16();
	uint dst = MASK_OUT_ABOVE_16(*r_dst);
	uint res = dst - src;

	FLAG_N = NFLAG_16(res);
	FLAG_X = FLAG_C = CFLAG_16(res);
	FLAG_V = VFLAG_SUB_16(src, dst, res);
	FLAG_Z = MASK_OUT_ABOVE_16(res);

	*r_dst = MASK_OUT_BELOW_16(*r_dst) | FLAG_Z;
}


void M68k::op_sub_16_er_i(void)
{
	uint* r_dst = &DX;
	uint src = OPER_I_16();
	uint dst = MASK_OUT_ABOVE_16(*r_dst);
	uint res = dst - src;

	FLAG_N = NFLAG_16(res);
	FLAG_X = FLAG_C = CFLAG_16(res);
	FLAG_V = VFLAG_SUB_16(src, dst, res);
	FLAG_Z = MASK_OUT_ABOVE_16(res);

	*r_dst = MASK_OUT_BELOW_16(*r_dst) | FLAG_Z;
}


void M68k::op_sub_32_er_d(void)
{
	uint* r_dst = &DX;
	uint src = DY;
	uint dst = *r_dst;
	uint res = dst - src;

	FLAG_N = NFLAG_32(res);
	FLAG_X = FLAG_C = CFLAG_SUB_32(src, dst, res);
	FLAG_V = VFLAG_SUB_32(src, dst, res);
	FLAG_Z = MASK_OUT_ABOVE_32(res);

	*r_dst = FLAG_Z;
}


void M68k::op_sub_32_er_a(void)
{
	uint* r_dst = &DX;
	uint src = AY;
	uint dst = *r_dst;
	uint res = dst - src;

	FLAG_N = NFLAG_32(res);
	FLAG_X = FLAG_C = CFLAG_SUB_32(src, dst, res);
	FLAG_V = VFLAG_SUB_32(src, dst, res);
	FLAG_Z = MASK_OUT_ABOVE_32(res);

	*r_dst = FLAG_Z;
}


void M68k::op_sub_32_er_ai(void)
{
	uint* r_dst = &DX;
	uint src = OPER_AY_AI_32();
	uint dst = *r_dst;
	uint res = dst - src;

	FLAG_N = NFLAG_32(res);
	FLAG_X = FLAG_C = CFLAG_SUB_32(src, dst, res);
	FLAG_V = VFLAG_SUB_32(src, dst, res);
	FLAG_Z = MASK_OUT_ABOVE_32(res);

	*r_dst = FLAG_Z;
}


void M68k::op_sub_32_er_pi(void)
{
	uint* r_dst = &DX;
	uint src = OPER_AY_PI_32();
	uint dst = *r_dst;
	uint res = dst - src;

	FLAG_N = NFLAG_32(res);
	FLAG_X = FLAG_C = CFLAG_SUB_32(src, dst, res);
	FLAG_V = VFLAG_SUB_32(src, dst, res);
	FLAG_Z = MASK_OUT_ABOVE_32(res);

	*r_dst = FLAG_Z;
}


void M68k::op_sub_32_er_pd(void)
{
	uint* r_dst = &DX;
	uint src = OPER_AY_PD_32();
	uint dst = *r_dst;
	uint res = dst - src;

	FLAG_N = NFLAG_32(res);
	FLAG_X = FLAG_C = CFLAG_SUB_32(src, dst, res);
	FLAG_V = VFLAG_SUB_32(src, dst, res);
	FLAG_Z = MASK_OUT_ABOVE_32(res);

	*r_dst = FLAG_Z;
}


void M68k::op_sub_32_er_di(void)
{
	uint* r_dst = &DX;
	uint src = OPER_AY_DI_32();
	uint dst = *r_dst;
	uint res = dst - src;

	FLAG_N = NFLAG_32(res);
	FLAG_X = FLAG_C = CFLAG_SUB_32(src, dst, res);
	FLAG_V = VFLAG_SUB_32(src, dst, res);
	FLAG_Z = MASK_OUT_ABOVE_32(res);

	*r_dst = FLAG_Z;
}


void M68k::op_sub_32_er_ix(void)
{
	uint* r_dst = &DX;
	uint src = OPER_AY_IX_32();
	uint dst = *r_dst;
	uint res = dst - src;

	FLAG_N = NFLAG_32(res);
	FLAG_X = FLAG_C = CFLAG_SUB_32(src, dst, res);
	FLAG_V = VFLAG_SUB_32(src, dst, res);
	FLAG_Z = MASK_OUT_ABOVE_32(res);

	*r_dst = FLAG_Z;
}


void M68k::op_sub_32_er_aw(void)
{
	uint* r_dst = &DX;
	uint src = OPER_AW_32();
	uint dst = *r_dst;
	uint res = dst - src;

	FLAG_N = NFLAG_32(res);
	FLAG_X = FLAG_C = CFLAG_SUB_32(src, dst, res);
	FLAG_V = VFLAG_SUB_32(src, dst, res);
	FLAG_Z = MASK_OUT_ABOVE_32(res);

	*r_dst = FLAG_Z;
}


void M68k::op_sub_32_er_al(void)
{
	uint* r_dst = &DX;
	uint src = OPER_AL_32();
	uint dst = *r_dst;
	uint res = dst - src;

	FLAG_N = NFLAG_32(res);
	FLAG_X = FLAG_C = CFLAG_SUB_32(src, dst, res);
	FLAG_V = VFLAG_SUB_32(src, dst, res);
	FLAG_Z = MASK_OUT_ABOVE_32(res);

	*r_dst = FLAG_Z;
}


void M68k::op_sub_32_er_pcdi(void)
{
	uint* r_dst = &DX;
	uint src = OPER_PCDI_32();
	uint dst = *r_dst;
	uint res = dst - src;

	FLAG_N = NFLAG_32(res);
	FLAG_X = FLAG_C = CFLAG_SUB_32(src, dst, res);
	FLAG_V = VFLAG_SUB_32(src, dst, res);
	FLAG_Z = MASK_OUT_ABOVE_32(res);

	*r_dst = FLAG_Z;
}


void M68k::op_sub_32_er_pcix(void)
{
	uint* r_dst = &DX;
	uint src = OPER_PCIX_32();
	uint dst = *r_dst;
	uint res = dst - src;

	FLAG_N = NFLAG_32(res);
	FLAG_X = FLAG_C = CFLAG_SUB_32(src, dst, res);
	FLAG_V = VFLAG_SUB_32(src, dst, res);
	FLAG_Z = MASK_OUT_ABOVE_32(res);

	*r_dst = FLAG_Z;
}


void M68k::op_sub_32_er_i(void)
{
	uint* r_dst = &DX;
	uint src = OPER_I_32();
	uint dst = *r_dst;
	uint res = dst - src;

	FLAG_N = NFLAG_32(res);
	FLAG_X = FLAG_C = CFLAG_SUB_32(src, dst, res);
	FLAG_V = VFLAG_SUB_32(src, dst, res);
	FLAG_Z = MASK_OUT_ABOVE_32(res);

	*r_dst = FLAG_Z;
}


void M68k::op_sub_8_re_ai(void)
{
	uint ea = EA_AY_AI_8();
	uint src = MASK_OUT_ABOVE_8(DX);
	uint dst = m68ki_read_8(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_8(res);
	FLAG_Z = MASK_OUT_ABOVE_8(res);
	FLAG_X = FLAG_C = CFLAG_8(res);
	FLAG_V = VFLAG_SUB_8(src, dst, res);

	m68ki_write_8(ea, FLAG_Z);
}


void M68k::op_sub_8_re_pi(void)
{
	uint ea = EA_AY_PI_8();
	uint src = MASK_OUT_ABOVE_8(DX);
	uint dst = m68ki_read_8(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_8(res);
	FLAG_Z = MASK_OUT_ABOVE_8(res);
	FLAG_X = FLAG_C = CFLAG_8(res);
	FLAG_V = VFLAG_SUB_8(src, dst, res);

	m68ki_write_8(ea, FLAG_Z);
}


void M68k::op_sub_8_re_pi7(void)
{
	uint ea = EA_A7_PI_8();
	uint src = MASK_OUT_ABOVE_8(DX);
	uint dst = m68ki_read_8(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_8(res);
	FLAG_Z = MASK_OUT_ABOVE_8(res);
	FLAG_X = FLAG_C = CFLAG_8(res);
	FLAG_V = VFLAG_SUB_8(src, dst, res);

	m68ki_write_8(ea, FLAG_Z);
}


void M68k::op_sub_8_re_pd(void)
{
	uint ea = EA_AY_PD_8();
	uint src = MASK_OUT_ABOVE_8(DX);
	uint dst = m68ki_read_8(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_8(res);
	FLAG_Z = MASK_OUT_ABOVE_8(res);
	FLAG_X = FLAG_C = CFLAG_8(res);
	FLAG_V = VFLAG_SUB_8(src, dst, res);

	m68ki_write_8(ea, FLAG_Z);
}


void M68k::op_sub_8_re_pd7(void)
{
	uint ea = EA_A7_PD_8();
	uint src = MASK_OUT_ABOVE_8(DX);
	uint dst = m68ki_read_8(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_8(res);
	FLAG_Z = MASK_OUT_ABOVE_8(res);
	FLAG_X = FLAG_C = CFLAG_8(res);
	FLAG_V = VFLAG_SUB_8(src, dst, res);

	m68ki_write_8(ea, FLAG_Z);
}


void M68k::op_sub_8_re_di(void)
{
	uint ea = EA_AY_DI_8();
	uint src = MASK_OUT_ABOVE_8(DX);
	uint dst = m68ki_read_8(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_8(res);
	FLAG_Z = MASK_OUT_ABOVE_8(res);
	FLAG_X = FLAG_C = CFLAG_8(res);
	FLAG_V = VFLAG_SUB_8(src, dst, res);

	m68ki_write_8(ea, FLAG_Z);
}


void M68k::op_sub_8_re_ix(void)
{
	uint ea = EA_AY_IX_8();
	uint src = MASK_OUT_ABOVE_8(DX);
	uint dst = m68ki_read_8(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_8(res);
	FLAG_Z = MASK_OUT_ABOVE_8(res);
	FLAG_X = FLAG_C = CFLAG_8(res);
	FLAG_V = VFLAG_SUB_8(src, dst, res);

	m68ki_write_8(ea, FLAG_Z);
}


void M68k::op_sub_8_re_aw(void)
{
	uint ea = EA_AW_8();
	uint src = MASK_OUT_ABOVE_8(DX);
	uint dst = m68ki_read_8(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_8(res);
	FLAG_Z = MASK_OUT_ABOVE_8(res);
	FLAG_X = FLAG_C = CFLAG_8(res);
	FLAG_V = VFLAG_SUB_8(src, dst, res);

	m68ki_write_8(ea, FLAG_Z);
}


void M68k::op_sub_8_re_al(void)
{
	uint ea = EA_AL_8();
	uint src = MASK_OUT_ABOVE_8(DX);
	uint dst = m68ki_read_8(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_8(res);
	FLAG_Z = MASK_OUT_ABOVE_8(res);
	FLAG_X = FLAG_C = CFLAG_8(res);
	FLAG_V = VFLAG_SUB_8(src, dst, res);

	m68ki_write_8(ea, FLAG_Z);
}


void M68k::op_sub_16_re_ai(void)
{
	uint ea = EA_AY_AI_16();
	uint src = MASK_OUT_ABOVE_16(DX);
	uint dst = m68ki_read_16(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_16(res);
	FLAG_Z = MASK_OUT_ABOVE_16(res);
	FLAG_X = FLAG_C = CFLAG_16(res);
	FLAG_V = VFLAG_SUB_16(src, dst, res);

	m68ki_write_16(ea, FLAG_Z);
}


void M68k::op_sub_16_re_pi(void)
{
	uint ea = EA_AY_PI_16();
	uint src = MASK_OUT_ABOVE_16(DX);
	uint dst = m68ki_read_16(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_16(res);
	FLAG_Z = MASK_OUT_ABOVE_16(res);
	FLAG_X = FLAG_C = CFLAG_16(res);
	FLAG_V = VFLAG_SUB_16(src, dst, res);

	m68ki_write_16(ea, FLAG_Z);
}


void M68k::op_sub_16_re_pd(void)
{
	uint ea = EA_AY_PD_16();
	uint src = MASK_OUT_ABOVE_16(DX);
	uint dst = m68ki_read_16(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_16(res);
	FLAG_Z = MASK_OUT_ABOVE_16(res);
	FLAG_X = FLAG_C = CFLAG_16(res);
	FLAG_V = VFLAG_SUB_16(src, dst, res);

	m68ki_write_16(ea, FLAG_Z);
}


void M68k::op_sub_16_re_di(void)
{
	uint ea = EA_AY_DI_16();
	uint src = MASK_OUT_ABOVE_16(DX);
	uint dst = m68ki_read_16(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_16(res);
	FLAG_Z = MASK_OUT_ABOVE_16(res);
	FLAG_X = FLAG_C = CFLAG_16(res);
	FLAG_V = VFLAG_SUB_16(src, dst, res);

	m68ki_write_16(ea, FLAG_Z);
}


void M68k::op_sub_16_re_ix(void)
{
	uint ea = EA_AY_IX_16();
	uint src = MASK_OUT_ABOVE_16(DX);
	uint dst = m68ki_read_16(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_16(res);
	FLAG_Z = MASK_OUT_ABOVE_16(res);
	FLAG_X = FLAG_C = CFLAG_16(res);
	FLAG_V = VFLAG_SUB_16(src, dst, res);

	m68ki_write_16(ea, FLAG_Z);
}


void M68k::op_sub_16_re_aw(void)
{
	uint ea = EA_AW_16();
	uint src = MASK_OUT_ABOVE_16(DX);
	uint dst = m68ki_read_16(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_16(res);
	FLAG_Z = MASK_OUT_ABOVE_16(res);
	FLAG_X = FLAG_C = CFLAG_16(res);
	FLAG_V = VFLAG_SUB_16(src, dst, res);

	m68ki_write_16(ea, FLAG_Z);
}


void M68k::op_sub_16_re_al(void)
{
	uint ea = EA_AL_16();
	uint src = MASK_OUT_ABOVE_16(DX);
	uint dst = m68ki_read_16(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_16(res);
	FLAG_Z = MASK_OUT_ABOVE_16(res);
	FLAG_X = FLAG_C = CFLAG_16(res);
	FLAG_V = VFLAG_SUB_16(src, dst, res);

	m68ki_write_16(ea, FLAG_Z);
}


void M68k::op_sub_32_re_ai(void)
{
	uint ea = EA_AY_AI_32();
	uint src = DX;
	uint dst = m68ki_read_32(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_32(res);
	FLAG_Z = MASK_OUT_ABOVE_32(res);
	FLAG_X = FLAG_C = CFLAG_SUB_32(src, dst, res);
	FLAG_V = VFLAG_SUB_32(src, dst, res);

	m68ki_write_32(ea, FLAG_Z);
}


void M68k::op_sub_32_re_pi(void)
{
	uint ea = EA_AY_PI_32();
	uint src = DX;
	uint dst = m68ki_read_32(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_32(res);
	FLAG_Z = MASK_OUT_ABOVE_32(res);
	FLAG_X = FLAG_C = CFLAG_SUB_32(src, dst, res);
	FLAG_V = VFLAG_SUB_32(src, dst, res);

	m68ki_write_32(ea, FLAG_Z);
}


void M68k::op_sub_32_re_pd(void)
{
	uint ea = EA_AY_PD_32();
	uint src = DX;
	uint dst = m68ki_read_32(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_32(res);
	FLAG_Z = MASK_OUT_ABOVE_32(res);
	FLAG_X = FLAG_C = CFLAG_SUB_32(src, dst, res);
	FLAG_V = VFLAG_SUB_32(src, dst, res);

	m68ki_write_32(ea, FLAG_Z);
}


void M68k::op_sub_32_re_di(void)
{
	uint ea = EA_AY_DI_32();
	uint src = DX;
	uint dst = m68ki_read_32(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_32(res);
	FLAG_Z = MASK_OUT_ABOVE_32(res);
	FLAG_X = FLAG_C = CFLAG_SUB_32(src, dst, res);
	FLAG_V = VFLAG_SUB_32(src, dst, res);

	m68ki_write_32(ea, FLAG_Z);
}


void M68k::op_sub_32_re_ix(void)
{
	uint ea = EA_AY_IX_32();
	uint src = DX;
	uint dst = m68ki_read_32(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_32(res);
	FLAG_Z = MASK_OUT_ABOVE_32(res);
	FLAG_X = FLAG_C = CFLAG_SUB_32(src, dst, res);
	FLAG_V = VFLAG_SUB_32(src, dst, res);

	m68ki_write_32(ea, FLAG_Z);
}


void M68k::op_sub_32_re_aw(void)
{
	uint ea = EA_AW_32();
	uint src = DX;
	uint dst = m68ki_read_32(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_32(res);
	FLAG_Z = MASK_OUT_ABOVE_32(res);
	FLAG_X = FLAG_C = CFLAG_SUB_32(src, dst, res);
	FLAG_V = VFLAG_SUB_32(src, dst, res);

	m68ki_write_32(ea, FLAG_Z);
}


void M68k::op_sub_32_re_al(void)
{
	uint ea = EA_AL_32();
	uint src = DX;
	uint dst = m68ki_read_32(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_32(res);
	FLAG_Z = MASK_OUT_ABOVE_32(res);
	FLAG_X = FLAG_C = CFLAG_SUB_32(src, dst, res);
	FLAG_V = VFLAG_SUB_32(src, dst, res);

	m68ki_write_32(ea, FLAG_Z);
}


void M68k::op_suba_16_d(void)
{
	uint* r_dst = &AX;

	*r_dst = MASK_OUT_ABOVE_32(*r_dst - MAKE_INT_16(DY));
}


void M68k::op_suba_16_a(void)
{
	uint* r_dst = &AX;

	*r_dst = MASK_OUT_ABOVE_32(*r_dst - MAKE_INT_16(AY));
}


void M68k::op_suba_16_ai(void)
{
	uint* r_dst = &AX;
	uint src = MAKE_INT_16(OPER_AY_AI_16());

	*r_dst = MASK_OUT_ABOVE_32(*r_dst - src);
}


void M68k::op_suba_16_pi(void)
{
	uint* r_dst = &AX;
	uint src = MAKE_INT_16(OPER_AY_PI_16());

	*r_dst = MASK_OUT_ABOVE_32(*r_dst - src);
}


void M68k::op_suba_16_pd(void)
{
	uint* r_dst = &AX;
	uint src = MAKE_INT_16(OPER_AY_PD_16());

	*r_dst = MASK_OUT_ABOVE_32(*r_dst - src);
}


void M68k::op_suba_16_di(void)
{
	uint* r_dst = &AX;
	uint src = MAKE_INT_16(OPER_AY_DI_16());

	*r_dst = MASK_OUT_ABOVE_32(*r_dst - src);
}


void M68k::op_suba_16_ix(void)
{
	uint* r_dst = &AX;
	uint src = MAKE_INT_16(OPER_AY_IX_16());

	*r_dst = MASK_OUT_ABOVE_32(*r_dst - src);
}


void M68k::op_suba_16_aw(void)
{
	uint* r_dst = &AX;
	uint src = MAKE_INT_16(OPER_AW_16());

	*r_dst = MASK_OUT_ABOVE_32(*r_dst - src);
}


void M68k::op_suba_16_al(void)
{
	uint* r_dst = &AX;
	uint src = MAKE_INT_16(OPER_AL_16());

	*r_dst = MASK_OUT_ABOVE_32(*r_dst - src);
}


void M68k::op_suba_16_pcdi(void)
{
	uint* r_dst = &AX;
	uint src = MAKE_INT_16(OPER_PCDI_16());

	*r_dst = MASK_OUT_ABOVE_32(*r_dst - src);
}


void M68k::op_suba_16_pcix(void)
{
	uint* r_dst = &AX;
	uint src = MAKE_INT_16(OPER_PCIX_16());

	*r_dst = MASK_OUT_ABOVE_32(*r_dst - src);
}


void M68k::op_suba_16_i(void)
{
	uint* r_dst = &AX;
	uint src = MAKE_INT_16(OPER_I_16());

	*r_dst = MASK_OUT_ABOVE_32(*r_dst - src);
}


void M68k::op_suba_32_d(void)
{
	uint* r_dst = &AX;

	*r_dst = MASK_OUT_ABOVE_32(*r_dst - DY);
}


void M68k::op_suba_32_a(void)
{
	uint* r_dst = &AX;

	*r_dst = MASK_OUT_ABOVE_32(*r_dst - AY);
}


void M68k::op_suba_32_ai(void)
{
	uint src = OPER_AY_AI_32();
	uint* r_dst = &AX;

	*r_dst = MASK_OUT_ABOVE_32(*r_dst - src);
}


void M68k::op_suba_32_pi(void)
{
	uint src = OPER_AY_PI_32();
	uint* r_dst = &AX;

	*r_dst = MASK_OUT_ABOVE_32(*r_dst - src);
}


void M68k::op_suba_32_pd(void)
{
	uint src = OPER_AY_PD_32();
	uint* r_dst = &AX;

	*r_dst = MASK_OUT_ABOVE_32(*r_dst - src);
}


void M68k::op_suba_32_di(void)
{
	uint src = OPER_AY_DI_32();
	uint* r_dst = &AX;

	*r_dst = MASK_OUT_ABOVE_32(*r_dst - src);
}


void M68k::op_suba_32_ix(void)
{
	uint src = OPER_AY_IX_32();
	uint* r_dst = &AX;

	*r_dst = MASK_OUT_ABOVE_32(*r_dst - src);
}


void M68k::op_suba_32_aw(void)
{
	uint src = OPER_AW_32();
	uint* r_dst = &AX;

	*r_dst = MASK_OUT_ABOVE_32(*r_dst - src);
}


void M68k::op_suba_32_al(void)
{
	uint src = OPER_AL_32();
	uint* r_dst = &AX;

	*r_dst = MASK_OUT_ABOVE_32(*r_dst - src);
}


void M68k::op_suba_32_pcdi(void)
{
	uint src = OPER_PCDI_32();
	uint* r_dst = &AX;

	*r_dst = MASK_OUT_ABOVE_32(*r_dst - src);
}


void M68k::op_suba_32_pcix(void)
{
	uint src = OPER_PCIX_32();
	uint* r_dst = &AX;

	*r_dst = MASK_OUT_ABOVE_32(*r_dst - src);
}


void M68k::op_suba_32_i(void)
{
	uint src = OPER_I_32();
	uint* r_dst = &AX;

	*r_dst = MASK_OUT_ABOVE_32(*r_dst - src);
}


void M68k::op_subi_8_d(void)
{
	uint* r_dst = &DY;
	uint src = OPER_I_8();
	uint dst = MASK_OUT_ABOVE_8(*r_dst);
	uint res = dst - src;

	FLAG_N = NFLAG_8(res);
	FLAG_Z = MASK_OUT_ABOVE_8(res);
	FLAG_X = FLAG_C = CFLAG_8(res);
	FLAG_V = VFLAG_SUB_8(src, dst, res);

	*r_dst = MASK_OUT_BELOW_8(*r_dst) | FLAG_Z;
}


void M68k::op_subi_8_ai(void)
{
	uint src = OPER_I_8();
	uint ea = EA_AY_AI_8();
	uint dst = m68ki_read_8(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_8(res);
	FLAG_Z = MASK_OUT_ABOVE_8(res);
	FLAG_X = FLAG_C = CFLAG_8(res);
	FLAG_V = VFLAG_SUB_8(src, dst, res);

	m68ki_write_8(ea, FLAG_Z);
}


void M68k::op_subi_8_pi(void)
{
	uint src = OPER_I_8();
	uint ea = EA_AY_PI_8();
	uint dst = m68ki_read_8(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_8(res);
	FLAG_Z = MASK_OUT_ABOVE_8(res);
	FLAG_X = FLAG_C = CFLAG_8(res);
	FLAG_V = VFLAG_SUB_8(src, dst, res);

	m68ki_write_8(ea, FLAG_Z);
}


void M68k::op_subi_8_pi7(void)
{
	uint src = OPER_I_8();
	uint ea = EA_A7_PI_8();
	uint dst = m68ki_read_8(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_8(res);
	FLAG_Z = MASK_OUT_ABOVE_8(res);
	FLAG_X = FLAG_C = CFLAG_8(res);
	FLAG_V = VFLAG_SUB_8(src, dst, res);

	m68ki_write_8(ea, FLAG_Z);
}


void M68k::op_subi_8_pd(void)
{
	uint src = OPER_I_8();
	uint ea = EA_AY_PD_8();
	uint dst = m68ki_read_8(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_8(res);
	FLAG_Z = MASK_OUT_ABOVE_8(res);
	FLAG_X = FLAG_C = CFLAG_8(res);
	FLAG_V = VFLAG_SUB_8(src, dst, res);

	m68ki_write_8(ea, FLAG_Z);
}


void M68k::op_subi_8_pd7(void)
{
	uint src = OPER_I_8();
	uint ea = EA_A7_PD_8();
	uint dst = m68ki_read_8(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_8(res);
	FLAG_Z = MASK_OUT_ABOVE_8(res);
	FLAG_X = FLAG_C = CFLAG_8(res);
	FLAG_V = VFLAG_SUB_8(src, dst, res);

	m68ki_write_8(ea, FLAG_Z);
}


void M68k::op_subi_8_di(void)
{
	uint src = OPER_I_8();
	uint ea = EA_AY_DI_8();
	uint dst = m68ki_read_8(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_8(res);
	FLAG_Z = MASK_OUT_ABOVE_8(res);
	FLAG_X = FLAG_C = CFLAG_8(res);
	FLAG_V = VFLAG_SUB_8(src, dst, res);

	m68ki_write_8(ea, FLAG_Z);
}


void M68k::op_subi_8_ix(void)
{
	uint src = OPER_I_8();
	uint ea = EA_AY_IX_8();
	uint dst = m68ki_read_8(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_8(res);
	FLAG_Z = MASK_OUT_ABOVE_8(res);
	FLAG_X = FLAG_C = CFLAG_8(res);
	FLAG_V = VFLAG_SUB_8(src, dst, res);

	m68ki_write_8(ea, FLAG_Z);
}


void M68k::op_subi_8_aw(void)
{
	uint src = OPER_I_8();
	uint ea = EA_AW_8();
	uint dst = m68ki_read_8(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_8(res);
	FLAG_Z = MASK_OUT_ABOVE_8(res);
	FLAG_X = FLAG_C = CFLAG_8(res);
	FLAG_V = VFLAG_SUB_8(src, dst, res);

	m68ki_write_8(ea, FLAG_Z);
}


void M68k::op_subi_8_al(void)
{
	uint src = OPER_I_8();
	uint ea = EA_AL_8();
	uint dst = m68ki_read_8(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_8(res);
	FLAG_Z = MASK_OUT_ABOVE_8(res);
	FLAG_X = FLAG_C = CFLAG_8(res);
	FLAG_V = VFLAG_SUB_8(src, dst, res);

	m68ki_write_8(ea, FLAG_Z);
}


void M68k::op_subi_16_d(void)
{
	uint* r_dst = &DY;
	uint src = OPER_I_16();
	uint dst = MASK_OUT_ABOVE_16(*r_dst);
	uint res = dst - src;

	FLAG_N = NFLAG_16(res);
	FLAG_Z = MASK_OUT_ABOVE_16(res);
	FLAG_X = FLAG_C = CFLAG_16(res);
	FLAG_V = VFLAG_SUB_16(src, dst, res);

	*r_dst = MASK_OUT_BELOW_16(*r_dst) | FLAG_Z;
}


void M68k::op_subi_16_ai(void)
{
	uint src = OPER_I_16();
	uint ea = EA_AY_AI_16();
	uint dst = m68ki_read_16(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_16(res);
	FLAG_Z = MASK_OUT_ABOVE_16(res);
	FLAG_X = FLAG_C = CFLAG_16(res);
	FLAG_V = VFLAG_SUB_16(src, dst, res);

	m68ki_write_16(ea, FLAG_Z);
}


void M68k::op_subi_16_pi(void)
{
	uint src = OPER_I_16();
	uint ea = EA_AY_PI_16();
	uint dst = m68ki_read_16(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_16(res);
	FLAG_Z = MASK_OUT_ABOVE_16(res);
	FLAG_X = FLAG_C = CFLAG_16(res);
	FLAG_V = VFLAG_SUB_16(src, dst, res);

	m68ki_write_16(ea, FLAG_Z);
}


void M68k::op_subi_16_pd(void)
{
	uint src = OPER_I_16();
	uint ea = EA_AY_PD_16();
	uint dst = m68ki_read_16(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_16(res);
	FLAG_Z = MASK_OUT_ABOVE_16(res);
	FLAG_X = FLAG_C = CFLAG_16(res);
	FLAG_V = VFLAG_SUB_16(src, dst, res);

	m68ki_write_16(ea, FLAG_Z);
}


void M68k::op_subi_16_di(void)
{
	uint src = OPER_I_16();
	uint ea = EA_AY_DI_16();
	uint dst = m68ki_read_16(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_16(res);
	FLAG_Z = MASK_OUT_ABOVE_16(res);
	FLAG_X = FLAG_C = CFLAG_16(res);
	FLAG_V = VFLAG_SUB_16(src, dst, res);

	m68ki_write_16(ea, FLAG_Z);
}


void M68k::op_subi_16_ix(void)
{
	uint src = OPER_I_16();
	uint ea = EA_AY_IX_16();
	uint dst = m68ki_read_16(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_16(res);
	FLAG_Z = MASK_OUT_ABOVE_16(res);
	FLAG_X = FLAG_C = CFLAG_16(res);
	FLAG_V = VFLAG_SUB_16(src, dst, res);

	m68ki_write_16(ea, FLAG_Z);
}


void M68k::op_subi_16_aw(void)
{
	uint src = OPER_I_16();
	uint ea = EA_AW_16();
	uint dst = m68ki_read_16(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_16(res);
	FLAG_Z = MASK_OUT_ABOVE_16(res);
	FLAG_X = FLAG_C = CFLAG_16(res);
	FLAG_V = VFLAG_SUB_16(src, dst, res);

	m68ki_write_16(ea, FLAG_Z);
}


void M68k::op_subi_16_al(void)
{
	uint src = OPER_I_16();
	uint ea = EA_AL_16();
	uint dst = m68ki_read_16(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_16(res);
	FLAG_Z = MASK_OUT_ABOVE_16(res);
	FLAG_X = FLAG_C = CFLAG_16(res);
	FLAG_V = VFLAG_SUB_16(src, dst, res);

	m68ki_write_16(ea, FLAG_Z);
}


void M68k::op_subi_32_d(void)
{
	uint* r_dst = &DY;
	uint src = OPER_I_32();
	uint dst = *r_dst;
	uint res = dst - src;

	FLAG_N = NFLAG_32(res);
	FLAG_Z = MASK_OUT_ABOVE_32(res);
	FLAG_X = FLAG_C = CFLAG_SUB_32(src, dst, res);
	FLAG_V = VFLAG_SUB_32(src, dst, res);

	*r_dst = FLAG_Z;
}


void M68k::op_subi_32_ai(void)
{
	uint src = OPER_I_32();
	uint ea = EA_AY_AI_32();
	uint dst = m68ki_read_32(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_32(res);
	FLAG_Z = MASK_OUT_ABOVE_32(res);
	FLAG_X = FLAG_C = CFLAG_SUB_32(src, dst, res);
	FLAG_V = VFLAG_SUB_32(src, dst, res);

	m68ki_write_32(ea, FLAG_Z);
}


void M68k::op_subi_32_pi(void)
{
	uint src = OPER_I_32();
	uint ea = EA_AY_PI_32();
	uint dst = m68ki_read_32(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_32(res);
	FLAG_Z = MASK_OUT_ABOVE_32(res);
	FLAG_X = FLAG_C = CFLAG_SUB_32(src, dst, res);
	FLAG_V = VFLAG_SUB_32(src, dst, res);

	m68ki_write_32(ea, FLAG_Z);
}


void M68k::op_subi_32_pd(void)
{
	uint src = OPER_I_32();
	uint ea = EA_AY_PD_32();
	uint dst = m68ki_read_32(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_32(res);
	FLAG_Z = MASK_OUT_ABOVE_32(res);
	FLAG_X = FLAG_C = CFLAG_SUB_32(src, dst, res);
	FLAG_V = VFLAG_SUB_32(src, dst, res);

	m68ki_write_32(ea, FLAG_Z);
}


void M68k::op_subi_32_di(void)
{
	uint src = OPER_I_32();
	uint ea = EA_AY_DI_32();
	uint dst = m68ki_read_32(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_32(res);
	FLAG_Z = MASK_OUT_ABOVE_32(res);
	FLAG_X = FLAG_C = CFLAG_SUB_32(src, dst, res);
	FLAG_V = VFLAG_SUB_32(src, dst, res);

	m68ki_write_32(ea, FLAG_Z);
}


void M68k::op_subi_32_ix(void)
{
	uint src = OPER_I_32();
	uint ea = EA_AY_IX_32();
	uint dst = m68ki_read_32(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_32(res);
	FLAG_Z = MASK_OUT_ABOVE_32(res);
	FLAG_X = FLAG_C = CFLAG_SUB_32(src, dst, res);
	FLAG_V = VFLAG_SUB_32(src, dst, res);

	m68ki_write_32(ea, FLAG_Z);
}


void M68k::op_subi_32_aw(void)
{
	uint src = OPER_I_32();
	uint ea = EA_AW_32();
	uint dst = m68ki_read_32(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_32(res);
	FLAG_Z = MASK_OUT_ABOVE_32(res);
	FLAG_X = FLAG_C = CFLAG_SUB_32(src, dst, res);
	FLAG_V = VFLAG_SUB_32(src, dst, res);

	m68ki_write_32(ea, FLAG_Z);
}


void M68k::op_subi_32_al(void)
{
	uint src = OPER_I_32();
	uint ea = EA_AL_32();
	uint dst = m68ki_read_32(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_32(res);
	FLAG_Z = MASK_OUT_ABOVE_32(res);
	FLAG_X = FLAG_C = CFLAG_SUB_32(src, dst, res);
	FLAG_V = VFLAG_SUB_32(src, dst, res);

	m68ki_write_32(ea, FLAG_Z);
}


void M68k::op_subq_8_d(void)
{
	uint* r_dst = &DY;
	uint src = (((REG_IR >> 9) - 1) & 7) + 1;
	uint dst = MASK_OUT_ABOVE_8(*r_dst);
	uint res = dst - src;

	FLAG_N = NFLAG_8(res);
	FLAG_Z = MASK_OUT_ABOVE_8(res);
	FLAG_X = FLAG_C = CFLAG_8(res);
	FLAG_V = VFLAG_SUB_8(src, dst, res);

	*r_dst = MASK_OUT_BELOW_8(*r_dst) | FLAG_Z;
}


void M68k::op_subq_8_ai(void)
{
	uint src = (((REG_IR >> 9) - 1) & 7) + 1;
	uint ea = EA_AY_AI_8();
	uint dst = m68ki_read_8(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_8(res);
	FLAG_Z = MASK_OUT_ABOVE_8(res);
	FLAG_X = FLAG_C = CFLAG_8(res);
	FLAG_V = VFLAG_SUB_8(src, dst, res);

	m68ki_write_8(ea, FLAG_Z);
}


void M68k::op_subq_8_pi(void)
{
	uint src = (((REG_IR >> 9) - 1) & 7) + 1;
	uint ea = EA_AY_PI_8();
	uint dst = m68ki_read_8(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_8(res);
	FLAG_Z = MASK_OUT_ABOVE_8(res);
	FLAG_X = FLAG_C = CFLAG_8(res);
	FLAG_V = VFLAG_SUB_8(src, dst, res);

	m68ki_write_8(ea, FLAG_Z);
}


void M68k::op_subq_8_pi7(void)
{
	uint src = (((REG_IR >> 9) - 1) & 7) + 1;
	uint ea = EA_A7_PI_8();
	uint dst = m68ki_read_8(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_8(res);
	FLAG_Z = MASK_OUT_ABOVE_8(res);
	FLAG_X = FLAG_C = CFLAG_8(res);
	FLAG_V = VFLAG_SUB_8(src, dst, res);

	m68ki_write_8(ea, FLAG_Z);
}


void M68k::op_subq_8_pd(void)
{
	uint src = (((REG_IR >> 9) - 1) & 7) + 1;
	uint ea = EA_AY_PD_8();
	uint dst = m68ki_read_8(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_8(res);
	FLAG_Z = MASK_OUT_ABOVE_8(res);
	FLAG_X = FLAG_C = CFLAG_8(res);
	FLAG_V = VFLAG_SUB_8(src, dst, res);

	m68ki_write_8(ea, FLAG_Z);
}


void M68k::op_subq_8_pd7(void)
{
	uint src = (((REG_IR >> 9) - 1) & 7) + 1;
	uint ea = EA_A7_PD_8();
	uint dst = m68ki_read_8(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_8(res);
	FLAG_Z = MASK_OUT_ABOVE_8(res);
	FLAG_X = FLAG_C = CFLAG_8(res);
	FLAG_V = VFLAG_SUB_8(src, dst, res);

	m68ki_write_8(ea, FLAG_Z);
}


void M68k::op_subq_8_di(void)
{
	uint src = (((REG_IR >> 9) - 1) & 7) + 1;
	uint ea = EA_AY_DI_8();
	uint dst = m68ki_read_8(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_8(res);
	FLAG_Z = MASK_OUT_ABOVE_8(res);
	FLAG_X = FLAG_C = CFLAG_8(res);
	FLAG_V = VFLAG_SUB_8(src, dst, res);

	m68ki_write_8(ea, FLAG_Z);
}


void M68k::op_subq_8_ix(void)
{
	uint src = (((REG_IR >> 9) - 1) & 7) + 1;
	uint ea = EA_AY_IX_8();
	uint dst = m68ki_read_8(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_8(res);
	FLAG_Z = MASK_OUT_ABOVE_8(res);
	FLAG_X = FLAG_C = CFLAG_8(res);
	FLAG_V = VFLAG_SUB_8(src, dst, res);

	m68ki_write_8(ea, FLAG_Z);
}


void M68k::op_subq_8_aw(void)
{
	uint src = (((REG_IR >> 9) - 1) & 7) + 1;
	uint ea = EA_AW_8();
	uint dst = m68ki_read_8(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_8(res);
	FLAG_Z = MASK_OUT_ABOVE_8(res);
	FLAG_X = FLAG_C = CFLAG_8(res);
	FLAG_V = VFLAG_SUB_8(src, dst, res);

	m68ki_write_8(ea, FLAG_Z);
}


void M68k::op_subq_8_al(void)
{
	uint src = (((REG_IR >> 9) - 1) & 7) + 1;
	uint ea = EA_AL_8();
	uint dst = m68ki_read_8(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_8(res);
	FLAG_Z = MASK_OUT_ABOVE_8(res);
	FLAG_X = FLAG_C = CFLAG_8(res);
	FLAG_V = VFLAG_SUB_8(src, dst, res);

	m68ki_write_8(ea, FLAG_Z);
}


void M68k::op_subq_16_d(void)
{
	uint* r_dst = &DY;
	uint src = (((REG_IR >> 9) - 1) & 7) + 1;
	uint dst = MASK_OUT_ABOVE_16(*r_dst);
	uint res = dst - src;

	FLAG_N = NFLAG_16(res);
	FLAG_Z = MASK_OUT_ABOVE_16(res);
	FLAG_X = FLAG_C = CFLAG_16(res);
	FLAG_V = VFLAG_SUB_16(src, dst, res);

	*r_dst = MASK_OUT_BELOW_16(*r_dst) | FLAG_Z;
}


void M68k::op_subq_16_a(void)
{
	uint* r_dst = &AY;

	*r_dst = MASK_OUT_ABOVE_32(*r_dst - ((((REG_IR >> 9) - 1) & 7) + 1));
}


void M68k::op_subq_16_ai(void)
{
	uint src = (((REG_IR >> 9) - 1) & 7) + 1;
	uint ea = EA_AY_AI_16();
	uint dst = m68ki_read_16(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_16(res);
	FLAG_Z = MASK_OUT_ABOVE_16(res);
	FLAG_X = FLAG_C = CFLAG_16(res);
	FLAG_V = VFLAG_SUB_16(src, dst, res);

	m68ki_write_16(ea, FLAG_Z);
}


void M68k::op_subq_16_pi(void)
{
	uint src = (((REG_IR >> 9) - 1) & 7) + 1;
	uint ea = EA_AY_PI_16();
	uint dst = m68ki_read_16(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_16(res);
	FLAG_Z = MASK_OUT_ABOVE_16(res);
	FLAG_X = FLAG_C = CFLAG_16(res);
	FLAG_V = VFLAG_SUB_16(src, dst, res);

	m68ki_write_16(ea, FLAG_Z);
}


void M68k::op_subq_16_pd(void)
{
	uint src = (((REG_IR >> 9) - 1) & 7) + 1;
	uint ea = EA_AY_PD_16();
	uint dst = m68ki_read_16(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_16(res);
	FLAG_Z = MASK_OUT_ABOVE_16(res);
	FLAG_X = FLAG_C = CFLAG_16(res);
	FLAG_V = VFLAG_SUB_16(src, dst, res);

	m68ki_write_16(ea, FLAG_Z);
}


void M68k::op_subq_16_di(void)
{
	uint src = (((REG_IR >> 9) - 1) & 7) + 1;
	uint ea = EA_AY_DI_16();
	uint dst = m68ki_read_16(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_16(res);
	FLAG_Z = MASK_OUT_ABOVE_16(res);
	FLAG_X = FLAG_C = CFLAG_16(res);
	FLAG_V = VFLAG_SUB_16(src, dst, res);

	m68ki_write_16(ea, FLAG_Z);
}


void M68k::op_subq_16_ix(void)
{
	uint src = (((REG_IR >> 9) - 1) & 7) + 1;
	uint ea = EA_AY_IX_16();
	uint dst = m68ki_read_16(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_16(res);
	FLAG_Z = MASK_OUT_ABOVE_16(res);
	FLAG_X = FLAG_C = CFLAG_16(res);
	FLAG_V = VFLAG_SUB_16(src, dst, res);

	m68ki_write_16(ea, FLAG_Z);
}


void M68k::op_subq_16_aw(void)
{
	uint src = (((REG_IR >> 9) - 1) & 7) + 1;
	uint ea = EA_AW_16();
	uint dst = m68ki_read_16(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_16(res);
	FLAG_Z = MASK_OUT_ABOVE_16(res);
	FLAG_X = FLAG_C = CFLAG_16(res);
	FLAG_V = VFLAG_SUB_16(src, dst, res);

	m68ki_write_16(ea, FLAG_Z);
}


void M68k::op_subq_16_al(void)
{
	uint src = (((REG_IR >> 9) - 1) & 7) + 1;
	uint ea = EA_AL_16();
	uint dst = m68ki_read_16(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_16(res);
	FLAG_Z = MASK_OUT_ABOVE_16(res);
	FLAG_X = FLAG_C = CFLAG_16(res);
	FLAG_V = VFLAG_SUB_16(src, dst, res);

	m68ki_write_16(ea, FLAG_Z);
}


void M68k::op_subq_32_d(void)
{
	uint* r_dst = &DY;
	uint src = (((REG_IR >> 9) - 1) & 7) + 1;
	uint dst = *r_dst;
	uint res = dst - src;

	FLAG_N = NFLAG_32(res);
	FLAG_Z = MASK_OUT_ABOVE_32(res);
	FLAG_X = FLAG_C = CFLAG_SUB_32(src, dst, res);
	FLAG_V = VFLAG_SUB_32(src, dst, res);

	*r_dst = FLAG_Z;
}


void M68k::op_subq_32_a(void)
{
	uint* r_dst = &AY;

	*r_dst = MASK_OUT_ABOVE_32(*r_dst - ((((REG_IR >> 9) - 1) & 7) + 1));
}


void M68k::op_subq_32_ai(void)
{
	uint src = (((REG_IR >> 9) - 1) & 7) + 1;
	uint ea = EA_AY_AI_32();
	uint dst = m68ki_read_32(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_32(res);
	FLAG_Z = MASK_OUT_ABOVE_32(res);
	FLAG_X = FLAG_C = CFLAG_SUB_32(src, dst, res);
	FLAG_V = VFLAG_SUB_32(src, dst, res);

	m68ki_write_32(ea, FLAG_Z);
}


void M68k::op_subq_32_pi(void)
{
	uint src = (((REG_IR >> 9) - 1) & 7) + 1;
	uint ea = EA_AY_PI_32();
	uint dst = m68ki_read_32(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_32(res);
	FLAG_Z = MASK_OUT_ABOVE_32(res);
	FLAG_X = FLAG_C = CFLAG_SUB_32(src, dst, res);
	FLAG_V = VFLAG_SUB_32(src, dst, res);

	m68ki_write_32(ea, FLAG_Z);
}


void M68k::op_subq_32_pd(void)
{
	uint src = (((REG_IR >> 9) - 1) & 7) + 1;
	uint ea = EA_AY_PD_32();
	uint dst = m68ki_read_32(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_32(res);
	FLAG_Z = MASK_OUT_ABOVE_32(res);
	FLAG_X = FLAG_C = CFLAG_SUB_32(src, dst, res);
	FLAG_V = VFLAG_SUB_32(src, dst, res);

	m68ki_write_32(ea, FLAG_Z);
}


void M68k::op_subq_32_di(void)
{
	uint src = (((REG_IR >> 9) - 1) & 7) + 1;
	uint ea = EA_AY_DI_32();
	uint dst = m68ki_read_32(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_32(res);
	FLAG_Z = MASK_OUT_ABOVE_32(res);
	FLAG_X = FLAG_C = CFLAG_SUB_32(src, dst, res);
	FLAG_V = VFLAG_SUB_32(src, dst, res);

	m68ki_write_32(ea, FLAG_Z);
}


void M68k::op_subq_32_ix(void)
{
	uint src = (((REG_IR >> 9) - 1) & 7) + 1;
	uint ea = EA_AY_IX_32();
	uint dst = m68ki_read_32(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_32(res);
	FLAG_Z = MASK_OUT_ABOVE_32(res);
	FLAG_X = FLAG_C = CFLAG_SUB_32(src, dst, res);
	FLAG_V = VFLAG_SUB_32(src, dst, res);

	m68ki_write_32(ea, FLAG_Z);
}


void M68k::op_subq_32_aw(void)
{
	uint src = (((REG_IR >> 9) - 1) & 7) + 1;
	uint ea = EA_AW_32();
	uint dst = m68ki_read_32(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_32(res);
	FLAG_Z = MASK_OUT_ABOVE_32(res);
	FLAG_X = FLAG_C = CFLAG_SUB_32(src, dst, res);
	FLAG_V = VFLAG_SUB_32(src, dst, res);

	m68ki_write_32(ea, FLAG_Z);
}


void M68k::op_subq_32_al(void)
{
	uint src = (((REG_IR >> 9) - 1) & 7) + 1;
	uint ea = EA_AL_32();
	uint dst = m68ki_read_32(ea);
	uint res = dst - src;

	FLAG_N = NFLAG_32(res);
	FLAG_Z = MASK_OUT_ABOVE_32(res);
	FLAG_X = FLAG_C = CFLAG_SUB_32(src, dst, res);
	FLAG_V = VFLAG_SUB_32(src, dst, res);

	m68ki_write_32(ea, FLAG_Z);
}


void M68k::op_subx_8_rr(void)
{
	uint* r_dst = &DX;
	uint src = MASK_OUT_ABOVE_8(DY);
	uint dst = MASK_OUT_ABOVE_8(*r_dst);
	uint res = dst - src - XFLAG_AS_1();

	FLAG_N = NFLAG_8(res);
	FLAG_X = FLAG_C = CFLAG_8(res);
	FLAG_V = VFLAG_SUB_8(src, dst, res);

	res = MASK_OUT_ABOVE_8(res);
	FLAG_Z |= res;

	*r_dst = MASK_OUT_BELOW_8(*r_dst) | res;
}


void M68k::op_subx_16_rr(void)
{
	uint* r_dst = &DX;
	uint src = MASK_OUT_ABOVE_16(DY);
	uint dst = MASK_OUT_ABOVE_16(*r_dst);
	uint res = dst - src - XFLAG_AS_1();

	FLAG_N = NFLAG_16(res);
	FLAG_X = FLAG_C = CFLAG_16(res);
	FLAG_V = VFLAG_SUB_16(src, dst, res);

	res = MASK_OUT_ABOVE_16(res);
	FLAG_Z |= res;

	*r_dst = MASK_OUT_BELOW_16(*r_dst) | res;
}


void M68k::op_subx_32_rr(void)
{
	uint* r_dst = &DX;
	uint src = DY;
	uint dst = *r_dst;
	uint res = dst - src - XFLAG_AS_1();

	FLAG_N = NFLAG_32(res);
	FLAG_X = FLAG_C = CFLAG_SUB_32(src, dst, res);
	FLAG_V = VFLAG_SUB_32(src, dst, res);

	res = MASK_OUT_ABOVE_32(res);
	FLAG_Z |= res;

	*r_dst = res;
}


void M68k::op_subx_8_mm_ax7(void)
{
	uint src = OPER_AY_PD_8();
	uint ea  = EA_A7_PD_8();
	uint dst = m68ki_read_8(ea);
	uint res = dst - src - XFLAG_AS_1();

	FLAG_N = NFLAG_8(res);
	FLAG_X = FLAG_C = CFLAG_8(res);
	FLAG_V = VFLAG_SUB_8(src, dst, res);

	res = MASK_OUT_ABOVE_8(res);
	FLAG_Z |= res;

	m68ki_write_8(ea, res);
}


void M68k::op_subx_8_mm_ay7(void)
{
	uint src = OPER_A7_PD_8();
	uint ea  = EA_AX_PD_8();
	uint dst = m68ki_read_8(ea);
	uint res = dst - src - XFLAG_AS_1();

	FLAG_N = NFLAG_8(res);
	FLAG_X = FLAG_C = CFLAG_8(res);
	FLAG_V = VFLAG_SUB_8(src, dst, res);

	res = MASK_OUT_ABOVE_8(res);
	FLAG_Z |= res;

	m68ki_write_8(ea, res);
}


void M68k::op_subx_8_mm_axy7(void)
{
	uint src = OPER_A7_PD_8();
	uint ea  = EA_A7_PD_8();
	uint dst = m68ki_read_8(ea);
	uint res = dst - src - XFLAG_AS_1();

	FLAG_N = NFLAG_8(res);
	FLAG_X = FLAG_C = CFLAG_8(res);
	FLAG_V = VFLAG_SUB_8(src, dst, res);

	res = MASK_OUT_ABOVE_8(res);
	FLAG_Z |= res;

	m68ki_write_8(ea, res);
}


void M68k::op_subx_8_mm(void)
{
	uint src = OPER_AY_PD_8();
	uint ea  = EA_AX_PD_8();
	uint dst = m68ki_read_8(ea);
	uint res = dst - src - XFLAG_AS_1();

	FLAG_N = NFLAG_8(res);
	FLAG_X = FLAG_C = CFLAG_8(res);
	FLAG_V = VFLAG_SUB_8(src, dst, res);

	res = MASK_OUT_ABOVE_8(res);
	FLAG_Z |= res;

	m68ki_write_8(ea, res);
}


void M68k::op_subx_16_mm(void)
{
	uint src = OPER_AY_PD_16();
	uint ea  = EA_AX_PD_16();
	uint dst = m68ki_read_16(ea);
	uint res = dst - src - XFLAG_AS_1();

	FLAG_N = NFLAG_16(res);
	FLAG_X = FLAG_C = CFLAG_16(res);
	FLAG_V = VFLAG_SUB_16(src, dst, res);

	res = MASK_OUT_ABOVE_16(res);
	FLAG_Z |= res;

	m68ki_write_16(ea, res);
}


void M68k::op_subx_32_mm(void)
{
	uint src = OPER_AY_PD_32();
	uint ea  = EA_AX_PD_32();
	uint dst = m68ki_read_32(ea);
	uint res = dst - src - XFLAG_AS_1();

	FLAG_N = NFLAG_32(res);
	FLAG_X = FLAG_C = CFLAG_SUB_32(src, dst, res);
	FLAG_V = VFLAG_SUB_32(src, dst, res);

	res = MASK_OUT_ABOVE_32(res);
	FLAG_Z |= res;

	m68ki_write_32(ea, res);
}


void M68k::op_swap_32(void)
{
	uint* r_dst = &DY;

	FLAG_Z = MASK_OUT_ABOVE_32(*r_dst<<16);
	*r_dst = (*r_dst>>16) | FLAG_Z;

	FLAG_Z = *r_dst;
	FLAG_N = NFLAG_32(*r_dst);
	FLAG_C = CFLAG_CLEAR;
	FLAG_V = VFLAG_CLEAR;
}


void M68k::op_tas_8_d(void)
{
	uint* r_dst = &DY;

	FLAG_Z = MASK_OUT_ABOVE_8(*r_dst);
	FLAG_N = NFLAG_8(*r_dst);
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;
	*r_dst |= 0x80;
}


void M68k::op_tas_8_ai(void)
{
	uint ea = EA_AY_AI_8();
	uint dst = m68ki_read_8(ea);
	uint allow_writeback;

	FLAG_Z = dst;
	FLAG_N = NFLAG_8(dst);
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;

	/* The Genesis/Megadrive games Gargoyles and Ex-Mutants need the TAS writeback
       disabled in order to function properly.  Some Amiga software may also rely
       on this, but only when accessing specific addresses so additional functionality
       will be needed. */
	allow_writeback = m68ki_tas_callback();

	if (allow_writeback==1) m68ki_write_8(ea, dst | 0x80);
}


void M68k::op_tas_8_pi(void)
{
	uint ea = EA_AY_PI_8();
	uint dst = m68ki_read_8(ea);
	uint allow_writeback;

	FLAG_Z = dst;
	FLAG_N = NFLAG_8(dst);
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;

	/* The Genesis/Megadrive games Gargoyles and Ex-Mutants need the TAS writeback
       disabled in order to function properly.  Some Amiga software may also rely
       on this, but only when accessing specific addresses so additional functionality
       will be needed. */
	allow_writeback = m68ki_tas_callback();

	if (allow_writeback==1) m68ki_write_8(ea, dst | 0x80);
}


void M68k::op_tas_8_pi7(void)
{
	uint ea = EA_A7_PI_8();
	uint dst = m68ki_read_8(ea);
	uint allow_writeback;

	FLAG_Z = dst;
	FLAG_N = NFLAG_8(dst);
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;

	/* The Genesis/Megadrive games Gargoyles and Ex-Mutants need the TAS writeback
       disabled in order to function properly.  Some Amiga software may also rely
       on this, but only when accessing specific addresses so additional functionality
       will be needed. */
	allow_writeback = m68ki_tas_callback();

	if (allow_writeback==1) m68ki_write_8(ea, dst | 0x80);
}


void M68k::op_tas_8_pd(void)
{
	uint ea = EA_AY_PD_8();
	uint dst = m68ki_read_8(ea);
	uint allow_writeback;

	FLAG_Z = dst;
	FLAG_N = NFLAG_8(dst);
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;

	/* The Genesis/Megadrive games Gargoyles and Ex-Mutants need the TAS writeback
       disabled in order to function properly.  Some Amiga software may also rely
       on this, but only when accessing specific addresses so additional functionality
       will be needed. */
	allow_writeback = m68ki_tas_callback();

	if (allow_writeback==1) m68ki_write_8(ea, dst | 0x80);
}


void M68k::op_tas_8_pd7(void)
{
	uint ea = EA_A7_PD_8();
	uint dst = m68ki_read_8(ea);
	uint allow_writeback;

	FLAG_Z = dst;
	FLAG_N = NFLAG_8(dst);
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;

	/* The Genesis/Megadrive games Gargoyles and Ex-Mutants need the TAS writeback
       disabled in order to function properly.  Some Amiga software may also rely
       on this, but only when accessing specific addresses so additional functionality
       will be needed. */
	allow_writeback = m68ki_tas_callback();

	if (allow_writeback==1) m68ki_write_8(ea, dst | 0x80);
}


void M68k::op_tas_8_di(void)
{
	uint ea = EA_AY_DI_8();
	uint dst = m68ki_read_8(ea);
	uint allow_writeback;

	FLAG_Z = dst;
	FLAG_N = NFLAG_8(dst);
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;

	/* The Genesis/Megadrive games Gargoyles and Ex-Mutants need the TAS writeback
       disabled in order to function properly.  Some Amiga software may also rely
       on this, but only when accessing specific addresses so additional functionality
       will be needed. */
	allow_writeback = m68ki_tas_callback();

	if (allow_writeback==1) m68ki_write_8(ea, dst | 0x80);
}


void M68k::op_tas_8_ix(void)
{
	uint ea = EA_AY_IX_8();
	uint dst = m68ki_read_8(ea);
	uint allow_writeback;

	FLAG_Z = dst;
	FLAG_N = NFLAG_8(dst);
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;

	/* The Genesis/Megadrive games Gargoyles and Ex-Mutants need the TAS writeback
       disabled in order to function properly.  Some Amiga software may also rely
       on this, but only when accessing specific addresses so additional functionality
       will be needed. */
	allow_writeback = m68ki_tas_callback();

	if (allow_writeback==1) m68ki_write_8(ea, dst | 0x80);
}


void M68k::op_tas_8_aw(void)
{
	uint ea = EA_AW_8();
	uint dst = m68ki_read_8(ea);
	uint allow_writeback;

	FLAG_Z = dst;
	FLAG_N = NFLAG_8(dst);
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;

	/* The Genesis/Megadrive games Gargoyles and Ex-Mutants need the TAS writeback
       disabled in order to function properly.  Some Amiga software may also rely
       on this, but only when accessing specific addresses so additional functionality
       will be needed. */
	allow_writeback = m68ki_tas_callback();

	if (allow_writeback==1) m68ki_write_8(ea, dst | 0x80);
}


void M68k::op_tas_8_al(void)
{
	uint ea = EA_AL_8();
	uint dst = m68ki_read_8(ea);
	uint allow_writeback;

	FLAG_Z = dst;
	FLAG_N = NFLAG_8(dst);
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;

	/* The Genesis/Megadrive games Gargoyles and Ex-Mutants need the TAS writeback
       disabled in order to function properly.  Some Amiga software may also rely
       on this, but only when accessing specific addresses so additional functionality
       will be needed. */
	allow_writeback = m68ki_tas_callback();

	if (allow_writeback==1) m68ki_write_8(ea, dst | 0x80);
}


void M68k::op_trap(void)
{
	/* Trap#n stacks exception frame type 0 */
	m68ki_exception_trapN(EXCEPTION_TRAP_BASE + (REG_IR & 0xf));	/* HJB 990403 */
}


void M68k::op_trapt(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		m68ki_exception_trap(EXCEPTION_TRAPV);	/* HJB 990403 */
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_trapt_16(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
        REG_PC += 2; // JFF else stackframe & return addresses are incorrect
		m68ki_exception_trap(EXCEPTION_TRAPV);	/* HJB 990403 */
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_trapt_32(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
        REG_PC += 4; // JFF else stackframe & return addresses are incorrect
		m68ki_exception_trap(EXCEPTION_TRAPV);	/* HJB 990403 */
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_trapf(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_trapf_16(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		REG_PC += 2;
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_trapf_32(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		REG_PC += 4;
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_traphi(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		if(COND_HI())
			m68ki_exception_trap(EXCEPTION_TRAPV);	/* HJB 990403 */
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_trapls(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		if(COND_LS())
			m68ki_exception_trap(EXCEPTION_TRAPV);	/* HJB 990403 */
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_trapcc(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		if(COND_CC())
			m68ki_exception_trap(EXCEPTION_TRAPV);	/* HJB 990403 */
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_trapcs(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		if(COND_CS())
			m68ki_exception_trap(EXCEPTION_TRAPV);	/* HJB 990403 */
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_trapne(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		if(COND_NE())
			m68ki_exception_trap(EXCEPTION_TRAPV);	/* HJB 990403 */
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_trapeq(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		if(COND_EQ())
			m68ki_exception_trap(EXCEPTION_TRAPV);	/* HJB 990403 */
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_trapvc(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		if(COND_VC())
			m68ki_exception_trap(EXCEPTION_TRAPV);	/* HJB 990403 */
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_trapvs(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		if(COND_VS())
			m68ki_exception_trap(EXCEPTION_TRAPV);	/* HJB 990403 */
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_trappl(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		if(COND_PL())
			m68ki_exception_trap(EXCEPTION_TRAPV);	/* HJB 990403 */
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_trapmi(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		if(COND_MI())
			m68ki_exception_trap(EXCEPTION_TRAPV);	/* HJB 990403 */
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_trapge(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		if(COND_GE())
			m68ki_exception_trap(EXCEPTION_TRAPV);	/* HJB 990403 */
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_traplt(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		if(COND_LT())
			m68ki_exception_trap(EXCEPTION_TRAPV);	/* HJB 990403 */
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_trapgt(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		if(COND_GT())
			m68ki_exception_trap(EXCEPTION_TRAPV);	/* HJB 990403 */
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_traple(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		if(COND_LE())
			m68ki_exception_trap(EXCEPTION_TRAPV);	/* HJB 990403 */
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_traphi_16(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
     	REG_PC += 2;  /* JFF increase before or 1) stackframe is incorrect 2) RTE address is wrong if trap is taken */
		if(COND_HI())
		{
			m68ki_exception_trap(EXCEPTION_TRAPV);	/* HJB 990403 */
			return;
		}

		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_trapls_16(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
     	REG_PC += 2;  /* JFF increase before or 1) stackframe is incorrect 2) RTE address is wrong if trap is taken */
		if(COND_LS())
		{
			m68ki_exception_trap(EXCEPTION_TRAPV);	/* HJB 990403 */
			return;
		}

		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_trapcc_16(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
     	REG_PC += 2;  /* JFF increase before or 1) stackframe is incorrect 2) RTE address is wrong if trap is taken */
		if(COND_CC())
		{
			m68ki_exception_trap(EXCEPTION_TRAPV);	/* HJB 990403 */
			return;
		}

		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_trapcs_16(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
     	REG_PC += 2;  /* JFF increase before or 1) stackframe is incorrect 2) RTE address is wrong if trap is taken */
		if(COND_CS())
		{
			m68ki_exception_trap(EXCEPTION_TRAPV);	/* HJB 990403 */
			return;
		}

		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_trapne_16(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
     	REG_PC += 2;  /* JFF increase before or 1) stackframe is incorrect 2) RTE address is wrong if trap is taken */
		if(COND_NE())
		{
			m68ki_exception_trap(EXCEPTION_TRAPV);	/* HJB 990403 */
			return;
		}

		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_trapeq_16(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
     	REG_PC += 2;  /* JFF increase before or 1) stackframe is incorrect 2) RTE address is wrong if trap is taken */
		if(COND_EQ())
		{
			m68ki_exception_trap(EXCEPTION_TRAPV);	/* HJB 990403 */
			return;
		}

		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_trapvc_16(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
     	REG_PC += 2;  /* JFF increase before or 1) stackframe is incorrect 2) RTE address is wrong if trap is taken */
		if(COND_VC())
		{
			m68ki_exception_trap(EXCEPTION_TRAPV);	/* HJB 990403 */
			return;
		}

		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_trapvs_16(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
     	REG_PC += 2;  /* JFF increase before or 1) stackframe is incorrect 2) RTE address is wrong if trap is taken */
		if(COND_VS())
		{
			m68ki_exception_trap(EXCEPTION_TRAPV);	/* HJB 990403 */
			return;
		}

		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_trappl_16(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
     	REG_PC += 2;  /* JFF increase before or 1) stackframe is incorrect 2) RTE address is wrong if trap is taken */
		if(COND_PL())
		{
			m68ki_exception_trap(EXCEPTION_TRAPV);	/* HJB 990403 */
			return;
		}

		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_trapmi_16(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
     	REG_PC += 2;  /* JFF increase before or 1) stackframe is incorrect 2) RTE address is wrong if trap is taken */
		if(COND_MI())
		{
			m68ki_exception_trap(EXCEPTION_TRAPV);	/* HJB 990403 */
			return;
		}

		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_trapge_16(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
     	REG_PC += 2;  /* JFF increase before or 1) stackframe is incorrect 2) RTE address is wrong if trap is taken */
		if(COND_GE())
		{
			m68ki_exception_trap(EXCEPTION_TRAPV);	/* HJB 990403 */
			return;
		}

		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_traplt_16(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
     	REG_PC += 2;  /* JFF increase before or 1) stackframe is incorrect 2) RTE address is wrong if trap is taken */
		if(COND_LT())
		{
			m68ki_exception_trap(EXCEPTION_TRAPV);	/* HJB 990403 */
			return;
		}

		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_trapgt_16(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
     	REG_PC += 2;  /* JFF increase before or 1) stackframe is incorrect 2) RTE address is wrong if trap is taken */
		if(COND_GT())
		{
			m68ki_exception_trap(EXCEPTION_TRAPV);	/* HJB 990403 */
			return;
		}

		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_traple_16(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
     	REG_PC += 2;  /* JFF increase before or 1) stackframe is incorrect 2) RTE address is wrong if trap is taken */
		if(COND_LE())
		{
			m68ki_exception_trap(EXCEPTION_TRAPV);	/* HJB 990403 */
			return;
		}

		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_traphi_32(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		REG_PC += 4;  /* JFF increase before or 1) stackframe is incorrect 2) RTE address is wrong if trap is taken */
		if(COND_HI())
		{
			m68ki_exception_trap(EXCEPTION_TRAPV);	/* HJB 990403 */
			return;
		}
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_trapls_32(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		REG_PC += 4;  /* JFF increase before or 1) stackframe is incorrect 2) RTE address is wrong if trap is taken */
		if(COND_LS())
		{
			m68ki_exception_trap(EXCEPTION_TRAPV);	/* HJB 990403 */
			return;
		}
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_trapcc_32(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		REG_PC += 4;  /* JFF increase before or 1) stackframe is incorrect 2) RTE address is wrong if trap is taken */
		if(COND_CC())
		{
			m68ki_exception_trap(EXCEPTION_TRAPV);	/* HJB 990403 */
			return;
		}
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_trapcs_32(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		REG_PC += 4;  /* JFF increase before or 1) stackframe is incorrect 2) RTE address is wrong if trap is taken */
		if(COND_CS())
		{
			m68ki_exception_trap(EXCEPTION_TRAPV);	/* HJB 990403 */
			return;
		}
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_trapne_32(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		REG_PC += 4;  /* JFF increase before or 1) stackframe is incorrect 2) RTE address is wrong if trap is taken */
		if(COND_NE())
		{
			m68ki_exception_trap(EXCEPTION_TRAPV);	/* HJB 990403 */
			return;
		}
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_trapeq_32(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		REG_PC += 4;  /* JFF increase before or 1) stackframe is incorrect 2) RTE address is wrong if trap is taken */
		if(COND_EQ())
		{
			m68ki_exception_trap(EXCEPTION_TRAPV);	/* HJB 990403 */
			return;
		}
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_trapvc_32(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		REG_PC += 4;  /* JFF increase before or 1) stackframe is incorrect 2) RTE address is wrong if trap is taken */
		if(COND_VC())
		{
			m68ki_exception_trap(EXCEPTION_TRAPV);	/* HJB 990403 */
			return;
		}
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_trapvs_32(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		REG_PC += 4;  /* JFF increase before or 1) stackframe is incorrect 2) RTE address is wrong if trap is taken */
		if(COND_VS())
		{
			m68ki_exception_trap(EXCEPTION_TRAPV);	/* HJB 990403 */
			return;
		}
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_trappl_32(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		REG_PC += 4;  /* JFF increase before or 1) stackframe is incorrect 2) RTE address is wrong if trap is taken */
		if(COND_PL())
		{
			m68ki_exception_trap(EXCEPTION_TRAPV);	/* HJB 990403 */
			return;
		}
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_trapmi_32(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		REG_PC += 4;  /* JFF increase before or 1) stackframe is incorrect 2) RTE address is wrong if trap is taken */
		if(COND_MI())
		{
			m68ki_exception_trap(EXCEPTION_TRAPV);	/* HJB 990403 */
			return;
		}
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_trapge_32(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		REG_PC += 4;  /* JFF increase before or 1) stackframe is incorrect 2) RTE address is wrong if trap is taken */
		if(COND_GE())
		{
			m68ki_exception_trap(EXCEPTION_TRAPV);	/* HJB 990403 */
			return;
		}
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_traplt_32(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		REG_PC += 4;  /* JFF increase before or 1) stackframe is incorrect 2) RTE address is wrong if trap is taken */
		if(COND_LT())
		{
			m68ki_exception_trap(EXCEPTION_TRAPV);	/* HJB 990403 */
			return;
		}
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_trapgt_32(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		REG_PC += 4;  /* JFF increase before or 1) stackframe is incorrect 2) RTE address is wrong if trap is taken */
		if(COND_GT())
		{
			m68ki_exception_trap(EXCEPTION_TRAPV);	/* HJB 990403 */
			return;
		}
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_traple_32(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		REG_PC += 4;  /* JFF increase before or 1) stackframe is incorrect 2) RTE address is wrong if trap is taken */
		if(COND_LE())
		{
			m68ki_exception_trap(EXCEPTION_TRAPV);	/* HJB 990403 */
			return;
		}
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_trapv(void)
{
	if(COND_VC())
	{
		return;
	}
	m68ki_exception_trap(EXCEPTION_TRAPV);  /* HJB 990403 */
}


void M68k::op_tst_8_d(void)
{
	uint res = MASK_OUT_ABOVE_8(DY);

	FLAG_N = NFLAG_8(res);
	FLAG_Z = (uint)res;
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;
}


void M68k::op_tst_8_ai(void)
{
	uint res = OPER_AY_AI_8();

	FLAG_N = NFLAG_8(res);
	FLAG_Z = (uint)res;
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;
}


void M68k::op_tst_8_pi(void)
{
	uint res = OPER_AY_PI_8();

	FLAG_N = NFLAG_8(res);
	FLAG_Z = (uint)res;
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;
}


void M68k::op_tst_8_pi7(void)
{
	uint res = OPER_A7_PI_8();

	FLAG_N = NFLAG_8(res);
	FLAG_Z = (uint)res;
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;
}


void M68k::op_tst_8_pd(void)
{
	uint res = OPER_AY_PD_8();

	FLAG_N = NFLAG_8(res);
	FLAG_Z = (uint)res;
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;
}


void M68k::op_tst_8_pd7(void)
{
	uint res = OPER_A7_PD_8();

	FLAG_N = NFLAG_8(res);
	FLAG_Z = (uint)res;
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;
}


void M68k::op_tst_8_di(void)
{
	uint res = OPER_AY_DI_8();

	FLAG_N = NFLAG_8(res);
	FLAG_Z = (uint)res;
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;
}


void M68k::op_tst_8_ix(void)
{
	uint res = OPER_AY_IX_8();

	FLAG_N = NFLAG_8(res);
	FLAG_Z = (uint)res;
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;
}


void M68k::op_tst_8_aw(void)
{
	uint res = OPER_AW_8();

	FLAG_N = NFLAG_8(res);
	FLAG_Z = (uint)res;
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;
}


void M68k::op_tst_8_al(void)
{
	uint res = OPER_AL_8();

	FLAG_N = NFLAG_8(res);
	FLAG_Z = (uint)res;
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;
}


void M68k::op_tst_8_pcdi(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		uint res = OPER_PCDI_8();

		FLAG_N = NFLAG_8(res);
		FLAG_Z = (uint)res;
		FLAG_V = VFLAG_CLEAR;
		FLAG_C = CFLAG_CLEAR;
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_tst_8_pcix(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		uint res = OPER_PCIX_8();

		FLAG_N = NFLAG_8(res);
		FLAG_Z = (uint)res;
		FLAG_V = VFLAG_CLEAR;
		FLAG_C = CFLAG_CLEAR;
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_tst_8_i(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		uint res = OPER_I_8();

		FLAG_N = NFLAG_8(res);
		FLAG_Z = (uint)res;
		FLAG_V = VFLAG_CLEAR;
		FLAG_C = CFLAG_CLEAR;
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_tst_16_d(void)
{
	uint res = MASK_OUT_ABOVE_16(DY);

	FLAG_N = NFLAG_16(res);
	FLAG_Z = (uint)res;
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;
}


void M68k::op_tst_16_a(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		uint res = MAKE_INT_16(AY);

		FLAG_N = NFLAG_16(res);
		FLAG_Z = (uint)res;
		FLAG_V = VFLAG_CLEAR;
		FLAG_C = CFLAG_CLEAR;
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_tst_16_ai(void)
{
	uint res = OPER_AY_AI_16();

	FLAG_N = NFLAG_16(res);
	FLAG_Z = (uint)res;
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;
}


void M68k::op_tst_16_pi(void)
{
	uint res = OPER_AY_PI_16();

	FLAG_N = NFLAG_16(res);
	FLAG_Z = (uint)res;
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;
}


void M68k::op_tst_16_pd(void)
{
	uint res = OPER_AY_PD_16();

	FLAG_N = NFLAG_16(res);
	FLAG_Z = (uint)res;
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;
}


void M68k::op_tst_16_di(void)
{
	uint res = OPER_AY_DI_16();

	FLAG_N = NFLAG_16(res);
	FLAG_Z = (uint)res;
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;
}


void M68k::op_tst_16_ix(void)
{
	uint res = OPER_AY_IX_16();

	FLAG_N = NFLAG_16(res);
	FLAG_Z = (uint)res;
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;
}


void M68k::op_tst_16_aw(void)
{
	uint res = OPER_AW_16();

	FLAG_N = NFLAG_16(res);
	FLAG_Z = (uint)res;
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;
}


void M68k::op_tst_16_al(void)
{
	uint res = OPER_AL_16();

	FLAG_N = NFLAG_16(res);
	FLAG_Z = (uint)res;
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;
}


void M68k::op_tst_16_pcdi(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		uint res = OPER_PCDI_16();

		FLAG_N = NFLAG_16(res);
		FLAG_Z = (uint)res;
		FLAG_V = VFLAG_CLEAR;
		FLAG_C = CFLAG_CLEAR;
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_tst_16_pcix(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		uint res = OPER_PCIX_16();

		FLAG_N = NFLAG_16(res);
		FLAG_Z = (uint)res;
		FLAG_V = VFLAG_CLEAR;
		FLAG_C = CFLAG_CLEAR;
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_tst_16_i(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		uint res = OPER_I_16();

		FLAG_N = NFLAG_16(res);
		FLAG_Z = (uint)res;
		FLAG_V = VFLAG_CLEAR;
		FLAG_C = CFLAG_CLEAR;
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_tst_32_d(void)
{
	uint res = DY;

	FLAG_N = NFLAG_32(res);
	FLAG_Z = (uint)res;
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;
}


void M68k::op_tst_32_a(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		uint res = AY;

		FLAG_N = NFLAG_32(res);
		FLAG_Z = (uint)res;
		FLAG_V = VFLAG_CLEAR;
		FLAG_C = CFLAG_CLEAR;
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_tst_32_ai(void)
{
	uint res = OPER_AY_AI_32();

	FLAG_N = NFLAG_32(res);
	FLAG_Z = (uint)res;
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;
}


void M68k::op_tst_32_pi(void)
{
	uint res = OPER_AY_PI_32();

	FLAG_N = NFLAG_32(res);
	FLAG_Z = (uint)res;
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;
}


void M68k::op_tst_32_pd(void)
{
	uint res = OPER_AY_PD_32();

	FLAG_N = NFLAG_32(res);
	FLAG_Z = (uint)res;
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;
}


void M68k::op_tst_32_di(void)
{
	uint res = OPER_AY_DI_32();

	FLAG_N = NFLAG_32(res);
	FLAG_Z = (uint)res;
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;
}


void M68k::op_tst_32_ix(void)
{
	uint res = OPER_AY_IX_32();

	FLAG_N = NFLAG_32(res);
	FLAG_Z = (uint)res;
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;
}


void M68k::op_tst_32_aw(void)
{
	uint res = OPER_AW_32();

	FLAG_N = NFLAG_32(res);
	FLAG_Z = (uint)res;
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;
}


void M68k::op_tst_32_al(void)
{
	uint res = OPER_AL_32();

	FLAG_N = NFLAG_32(res);
	FLAG_Z = (uint)res;
	FLAG_V = VFLAG_CLEAR;
	FLAG_C = CFLAG_CLEAR;
}


void M68k::op_tst_32_pcdi(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		uint res = OPER_PCDI_32();

		FLAG_N = NFLAG_32(res);
		FLAG_Z = (uint)res;
		FLAG_V = VFLAG_CLEAR;
		FLAG_C = CFLAG_CLEAR;
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_tst_32_pcix(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		uint res = OPER_PCIX_32();

		FLAG_N = NFLAG_32(res);
		FLAG_Z = (uint)res;
		FLAG_V = VFLAG_CLEAR;
		FLAG_C = CFLAG_CLEAR;
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_tst_32_i(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		uint res = OPER_I_32();

		FLAG_N = NFLAG_32(res);
		FLAG_Z = (uint)res;
		FLAG_V = VFLAG_CLEAR;
		FLAG_C = CFLAG_CLEAR;
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_unlk_32_a7(void)
{
	REG_A[7] = m68ki_read_32(REG_A[7]);
}


void M68k::op_unlk_32(void)
{
	uint* r_dst = &AY;

	REG_A[7] = *r_dst;
	*r_dst = m68ki_pull_32();
}


void M68k::op_unpk_16_rr(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		/* Note: DX and DY are reversed in Motorola's docs */
		uint src = DY;
		uint* r_dst = &DX;

		*r_dst = MASK_OUT_BELOW_16(*r_dst) | (((((src << 4) & 0x0f00) | (src & 0x000f)) + OPER_I_16()) & 0xffff);
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_unpk_16_mm_ax7(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		/* Note: AX and AY are reversed in Motorola's docs */
		uint src = OPER_AY_PD_8();
		uint ea_dst;

		src = (((src << 4) & 0x0f00) | (src & 0x000f)) + OPER_I_16();
		ea_dst = EA_A7_PD_8();
		m68ki_write_8(ea_dst, (src >> 8) & 0xff);
		ea_dst = EA_A7_PD_8();
		m68ki_write_8(ea_dst, src & 0xff);
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_unpk_16_mm_ay7(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		/* Note: AX and AY are reversed in Motorola's docs */
		uint src = OPER_A7_PD_8();
		uint ea_dst;

		src = (((src << 4) & 0x0f00) | (src & 0x000f)) + OPER_I_16();
		ea_dst = EA_AX_PD_8();
		m68ki_write_8(ea_dst, (src >> 8) & 0xff);
		ea_dst = EA_AX_PD_8();
		m68ki_write_8(ea_dst, src & 0xff);
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_unpk_16_mm_axy7(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		uint src = OPER_A7_PD_8();
		uint ea_dst;

		src = (((src << 4) & 0x0f00) | (src & 0x000f)) + OPER_I_16();
		ea_dst = EA_A7_PD_8();
		m68ki_write_8(ea_dst, (src >> 8) & 0xff);
		ea_dst = EA_A7_PD_8();
		m68ki_write_8(ea_dst, src & 0xff);
		return;
	}
	m68ki_exception_illegal();
}


void M68k::op_unpk_16_mm(void)
{
	if(CPU_TYPE_IS_EC020_PLUS(CPU_TYPE))
	{
		/* Note: AX and AY are reversed in Motorola's docs */
		uint src = OPER_AY_PD_8();
		uint ea_dst;

		src = (((src << 4) & 0x0f00) | (src & 0x000f)) + OPER_I_16();
		ea_dst = EA_AX_PD_8();
		m68ki_write_8(ea_dst, (src >> 8) & 0xff);
		ea_dst = EA_AX_PD_8();
		m68ki_write_8(ea_dst, src & 0xff);
		return;
	}
	m68ki_exception_illegal();
}


