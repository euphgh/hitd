#ifndef __DIFFTEST_FUNC_HPP__
#define __DIFFTEST_FUNC_HPP__
#include "diff_struct.h"

// difftest function
void difftest_init(const char* ref_so_file);
void difftest_show_error(diff_state *cpu, diff_state *ref_r);
bool difftest_check(diff_state *cpu, diff_state *ref_r);

// difftest operation for dut
void dut_get_state(diff_state *mycpu);

// difftest operation for ref
#ifdef __cplusplus
extern "C" {
#endif

#include <cstdio>
typedef void (*REF_INIT)(void* paddr_top, FILE * filename);
typedef void (*REF_TICK_INT)(uint8_t ext_int);
typedef void (*REF_HILO_SET)(word_t hi, word_t lo);
typedef bool (*REF_EXEC_ONCE)(bool except);
typedef void (*REF_GPR_SET)(word_t data, uint8_t wnum);
typedef void (*REF_GET_STATE)(diff_state *ref);
typedef void (*REF_GET_DEBUG_INFO)(debug_info_t *ref);

extern REF_INIT ref_init;
extern REF_TICK_INT ref_tick_int;
extern REF_HILO_SET ref_hilo_set;
extern REF_EXEC_ONCE ref_exec_once;
extern REF_GPR_SET ref_gpr_set;
extern REF_GET_STATE ref_get_state;
extern REF_GET_DEBUG_INFO ref_get_debug_info;

#ifdef __cplusplus
}
#endif


#endif
