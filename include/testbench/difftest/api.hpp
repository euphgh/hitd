#ifndef __DIFFTEST_FUNC_HPP__
#define __DIFFTEST_FUNC_HPP__
#include "isa/cp0.hpp"
#include "testbench/difftest/struct.hpp"

// difftest function
void difftest_show_error(diff_state *cpu, diff_state *ref_r);
void dut_get_state(diff_state *mycpu);
void difftest_clean_phySign();
void difftest_init_PhyPosition();
void difftest_count_phySign();
std::pair<uint8_t, word_t> difftestPopRand();
void difftestTlbCheck();
void difftestBrJmpStats(std::string fileName = "");
void difftestBrJmpReset();
#endif
