#include "common.hpp"
#include "debug.hpp"
#include "easylogging++.h"
#include "isa/cp0.hpp"
#include "testbench/difftest/api.hpp"
#include "testbench/difftest/global_info.hpp"
#include "testbench/sim_state.hpp"
diff_state dutArchState;
uint8_t dutCommitNum;
word_t dutLastCommitPC;
uint8_t dutIntrSeq;
CP0_t dutCP0;

extern "C" void v_difftest_InstrCommit(char retire_num, int last_retire_pc,
                                       char interr_seq) {
  dutCommitNum = retire_num;
  dutLastCommitPC = last_retire_pc;
  dutIntrSeq = interr_seq;
}

extern "C" void v_difftest_ArchIntRegState(const int *io_gpr) {
  for (int i = 0; i < 32; i++) {
    dutArchState.gpr[i] = io_gpr[i];
  }
}

extern "C" void v_difftest_ArchHILO(int hi, int lo) {
  dutArchState.hi = hi;
  dutArchState.lo = lo;
}

#define COMMON ,
#define __cp0_reg_arg__(regname, rd, sel, ...) int regname
extern "C" void v_difftest_ArchCP0(__cp0_info__(__cp0_reg_arg__, , COMMON)) {
  word_t data;
#define __cp0_reg_load__(regname, rd, sel, ...)                                \
  data = regname;                                                              \
  dutCP0.regname = {__VA_ARGS__};
#define __cp0_field_load__(name, msb, lsb, reset, writable, check)             \
  .name = static_cast<unsigned int>((data & BITMASK(msb + 1)) >> lsb),
  __cp0_info__(__cp0_reg_load__, __cp0_field_load__, );
#undef COMMON
}