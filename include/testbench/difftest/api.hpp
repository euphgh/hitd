#ifndef __DIFFTEST_FUNC_HPP__
#define __DIFFTEST_FUNC_HPP__
#include "paddr/paddr_interface.hpp"

// difftest function
void difftest_init(const char* ref_so_file);
void difftest_show_error(diff_state *cpu, diff_state *ref_r);
bool difftest_check(diff_state *cpu, diff_state *ref_r);

// difftest operation for dut
void dut_get_state(diff_state *mycpu);
// void ref_init(void* paddr_top);
// void ref_tick_int(uint8_t ext_int);
// bool ref_exec_once(bool except);
// void ref_hilo_set(word_t hi, word_t lo);
// void ref_gpr_set(word_t data, uint8_t wnum);
// void ref_get_state(diff_state *dut);
// void ref_get_debug_info(debug_info_t *ref);

#endif
