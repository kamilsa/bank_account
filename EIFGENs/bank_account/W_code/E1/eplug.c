/*
 * Generated by ISE 14.05.9.5417 GPL Edition - macosx-x86-64
 */

#include "eif_eiffel.h"
#include "eif_project.h"
#include "egc_include.h"

#ifdef __cplusplus
extern "C" {
#endif
extern void F1_23();
extern EIF_REFERENCE F1_14();
extern void F218_6162();
extern void F220_6315();
extern void F225_6384();
extern void F226_6523();
extern void F250_3490();
extern void F242_6043();
extern void F51_1182();
extern EIF_REFERENCE F51_1169();
extern EIF_BOOLEAN F51_1181();
extern EIF_BOOLEAN F51_1186();
extern void F51_1191();
extern void F51_1192();
extern void F51_1193();
extern void F44_1096();
extern EIF_TYPED_VALUE F44_1097();

long *eif_area_table = (long *)0;
long *eif_lower_table = (long *)0;


extern void egc_init_plug (void); 
void egc_init_plug (void)
{
	egc_prof_enabled = (EIF_INTEGER) 0;
	egc_correct_mismatch = (void (*)(EIF_REFERENCE)) F1_23;
	egc_twin = (EIF_TYPED_VALUE (*)(EIF_REFERENCE)) F1_14;
	egc_strmake = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F218_6162;
	egc_str32make = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F225_6384;
	egc_arrmake = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F250_3490;
	egc_strset = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F220_6315;
	egc_str32set = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F226_6523;
	egc_routdisp_wb = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F242_6043;
#ifdef RTS_SCP_CAPABLE
	egc_is_scoop_capable = 0;
#endif
	egc_set_exception_data = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F51_1182;
	egc_set_last_exception = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F51_1181;
	egc_last_exception = (EIF_TYPED_VALUE (*)(EIF_REFERENCE)) F51_1169;
	egc_is_code_ignored = (EIF_TYPED_VALUE (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F51_1186;
	egc_once_raise = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F51_1191;
	egc_init_exception_manager = (void (*)(EIF_REFERENCE)) F51_1192;
	egc_free_preallocated_trace = (void (*)(EIF_REFERENCE)) F51_1193;

	egc_str_dtype = 219;

	egc_str32_dtype = 225;
	egc_arr_dtype = 249;
	egc_tup_dtype = 173;
	egc_disp_rout_id = 2649;
	egc_copy_rout_id = 18;
	egc_is_equal_rout_id = 11;

	egc_sp_char = (EIF_TYPE_INDEX)565;
	egc_sp_wchar = (EIF_TYPE_INDEX)797;
	egc_sp_bool = (EIF_TYPE_INDEX)641;
	egc_sp_uint8 = (EIF_TYPE_INDEX)706;
	egc_sp_uint16 = (EIF_TYPE_INDEX)672;
	egc_sp_uint32 = (EIF_TYPE_INDEX)548;
	egc_sp_uint64 = (EIF_TYPE_INDEX)374;
	egc_sp_int8 = (EIF_TYPE_INDEX)497;
	egc_sp_int16 = (EIF_TYPE_INDEX)745;
	egc_sp_int32 = (EIF_TYPE_INDEX)294;
	egc_sp_int64 = (EIF_TYPE_INDEX)404;
	egc_sp_real32 = (EIF_TYPE_INDEX)588;
	egc_sp_real64 = (EIF_TYPE_INDEX)328;
	egc_sp_pointer = (EIF_TYPE_INDEX)436;
	egc_sp_ref = (EIF_TYPE_INDEX)242;

	egc_uint8_dtype = 196;
	egc_uint16_dtype = 202;
	egc_uint32_dtype = 199;
	egc_uint64_dtype = 211;
	egc_int8_dtype = 175;
	egc_int16_dtype = 208;
	egc_int32_dtype = 205;
	egc_int64_dtype = 187;
	egc_bool_dtype = 190;
	egc_real32_dtype = 178;
	egc_char_dtype = 184;
	egc_wchar_dtype = 181;
	egc_real64_dtype = 193;
	egc_point_dtype = 214;
#ifdef RTS_SCP_CAPABLE
#if RTS_SCP_CAPABLE == 1
	egc_scp_mngr_dtype = (EIF_TYPE_INDEX)0 - 1;
#else
	egc_scp_mngr_dtype = (EIF_TYPE_INDEX)0 - 1;
#endif
#endif

	egc_exception_dtype = 62;
	egc_except_emnger_dtype = 50;

	egc_ce_type = egc_ce_type_init;

	egc_ce_exp_type = egc_ce_exp_type_init;
	egc_fsystem = egc_fsystem_init;
	egc_system_mod_init = egc_system_mod_init_init;
	egc_partab = egc_partab_init;
	egc_partab_size = egc_partab_size_init;
	egc_foption = egc_foption_init;
	egc_frozen = egc_frozen_init;
	egc_fpatidtab = egc_fpatidtab_init;
	egc_address_table = egc_address_table_init;
	egc_fpattern = egc_fpattern_init;

	egc_einit = egc_einit_init;
	egc_tabinit = egc_tabinit_init;
	egc_forg_table = egc_forg_table_init;

	egc_system_name = "bank_account";
	egc_system_location = "/Users/kamil/Documents/workspaceEiffel/bank_account/EIFGENs/bank_account/W_code";
	egc_compiler_tag = 38;
	egc_project_version = 1427186966;
	egc_has_old_special_semantic = 0;
	egc_has_ieee_semantic = 1;
	scount = 860;

	egc_rcount = 1;
	egc_ridx = 0;
	egc_rlist = (char**) eif_malloc (sizeof(char*)*egc_rcount);
	egc_rcdt = (int32 *) eif_malloc (sizeof(int32)*egc_rcount);
	egc_rcrid = (int32 *) eif_malloc (sizeof(int32)*egc_rcount);
	egc_rcarg = (int32 *) eif_malloc (sizeof(int32)*egc_rcount);
	egc_rlist[0] = "APPLICATION.make";
	egc_rcdt[0] = 0;
	egc_rcrid[0] = 4880;
	egc_rcarg[0] = 0;
	
	
	egc_platform_level = 0x00000D00;
	egc_rt_extension_dt = 43;
	egc_rt_extension_notify = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F44_1096;
	egc_rt_extension_notify_argument = (EIF_TYPED_VALUE (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F44_1097;
}

void egc_rcdt_init (void)
{
	if (egc_rcdt[0] == 0) {
		egc_rcdt[0] = 859; /* APPLICATION */
	}
}

#ifdef __cplusplus
}
#endif
