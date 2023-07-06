#include "common.hpp"
#include "debug.hpp"
#include "easylogging++.h"
#include "isa/cp0.hpp"
#include "testbench/difftest/global_info.hpp"
#include "testbench/sim_state.hpp"

extern "C" void v_difftest_InstrCommit(char retire_num, int last_retire_pc,
                                       char interr_seq) {
  dut_ptr->commitNum = retire_num;
  dut_ptr->pc = last_retire_pc;
  dut_ptr->interruptSeq = interr_seq;
}

extern "C" void v_difftest_ArchIntRegState(const int *io_gpr) {
  for (int i = 0; i < 32; i++) {
    dut_ptr->gpr[i] = io_gpr[i];
  }
}

extern "C" void v_difftest_ArchHILO(int hi, int lo) {
  dut_ptr->hi = hi;
  dut_ptr->lo = hi;
}

#define COMMON ,
#define __cp0_reg_arg__(regname, rd, sel, ...) int regname
extern "C" void v_difftest_ArchCP0(__cp0_info__(__cp0_reg_arg__, , COMMON)) {
  auto cp0_ptr = dut_ptr->ArchCop.get();
  word_t data;
#define __cp0_reg_load__(regname, rd, sel, ...)                                \
  data = regname;                                                              \
  cp0_ptr->regname = {__VA_ARGS__};
#define __cp0_field_load__(name, msb, lsb, reset, writable, check)             \
  .name = static_cast<unsigned int>((data & BITMASK(msb + 1)) >> lsb),
  __cp0_info__(__cp0_reg_load__, __cp0_field_load__, );
#undef COMMON
}