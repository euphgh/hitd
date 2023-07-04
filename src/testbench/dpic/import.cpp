#include "common.hpp"
#include "isa/cp0.hpp"
#include "testbench/difftest/struct.hpp"
#include <cstdint>

extern diff_state *dut_ptr;

extern "C" void v_difftest_InstrCommit(char retire_num, int last_retire_pc,
                                       char interr_seq) {
  dut_ptr->commitNum = retire_num;
  dut_ptr->pc = last_retire_pc;
  dut_ptr->interruptSeq = interr_seq;
}

extern "C" void v_difftest_ArchIntRegState(
    int gpr_0, int gpr_1, int gpr_2, int gpr_3, int gpr_4, int gpr_5, int gpr_6,
    int gpr_7, int gpr_8, int gpr_9, int gpr_10, int gpr_11, int gpr_12,
    int gpr_13, int gpr_14, int gpr_15, int gpr_16, int gpr_17, int gpr_18,
    int gpr_19, int gpr_20, int gpr_21, int gpr_22, int gpr_23, int gpr_24,
    int gpr_25, int gpr_26, int gpr_27, int gpr_28, int gpr_29, int gpr_30,
    int gpr_31) {
  dut_ptr->gpr[0] = gpr_0;
  dut_ptr->gpr[1] = gpr_1;
  dut_ptr->gpr[2] = gpr_2;
  dut_ptr->gpr[3] = gpr_3;
  dut_ptr->gpr[4] = gpr_4;
  dut_ptr->gpr[5] = gpr_5;
  dut_ptr->gpr[6] = gpr_6;
  dut_ptr->gpr[7] = gpr_7;
  dut_ptr->gpr[8] = gpr_8;
  dut_ptr->gpr[9] = gpr_9;
  dut_ptr->gpr[10] = gpr_10;
  dut_ptr->gpr[11] = gpr_11;
  dut_ptr->gpr[12] = gpr_12;
  dut_ptr->gpr[13] = gpr_13;
  dut_ptr->gpr[14] = gpr_14;
  dut_ptr->gpr[15] = gpr_15;
  dut_ptr->gpr[16] = gpr_16;
  dut_ptr->gpr[17] = gpr_17;
  dut_ptr->gpr[18] = gpr_18;
  dut_ptr->gpr[19] = gpr_19;
  dut_ptr->gpr[20] = gpr_20;
  dut_ptr->gpr[21] = gpr_21;
  dut_ptr->gpr[22] = gpr_22;
  dut_ptr->gpr[23] = gpr_23;
  dut_ptr->gpr[24] = gpr_24;
  dut_ptr->gpr[25] = gpr_25;
  dut_ptr->gpr[26] = gpr_26;
  dut_ptr->gpr[27] = gpr_27;
  dut_ptr->gpr[28] = gpr_28;
  dut_ptr->gpr[29] = gpr_29;
  dut_ptr->gpr[30] = gpr_30;
  dut_ptr->gpr[31] = gpr_31;
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