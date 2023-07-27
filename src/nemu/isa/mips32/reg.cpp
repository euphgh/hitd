/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include "nemu/isa.hpp"
#include <cstddef>
#include <fmt/core.h>
using namespace fmt;

const char *regs[] = {
  "$0", "at", "v0", "v1", "a0", "a1", "a2", "a3",
  "t0", "t1", "t2", "t3", "t4", "t5", "t6", "t7",
  "s0", "s1", "s2", "s3", "s4", "s5", "s6", "s7",
  "t8", "t9", "k0", "k1", "gp", "sp", "s8", "ra"
};

void CPU_state::isa_reg_display(std::string fileName) { /*{{{*/
  uint8_t regs_len = ARRLEN(regs);
  FILE *file = nullptr;
  if (fileName != "") {
    file = fopen(fileName.c_str(), "w");
    auto res = freopen(fileName.c_str(), "w", stdout);
    if (res == nullptr)
      print("can not redirect nemu regs info to {:s}", fileName);
  }
  printf(FMT_REG, "pc", arch_state.pc, arch_state.pc);
  for (int i = 0; i < regs_len; i++) {
    word_t value = arch_state.gpr[i];
    char name[8];
    sprintf(name, "$%-2d(%s)", i, regs[i]);
    printf(FMT_REG, name, value, value);
  }
  printf(FMT_REG, "hi", arch_state.hi, arch_state.hi);
  printf(FMT_REG, "lo", arch_state.lo, arch_state.lo);
  printf(FMT_REG, "llbit", arch_state.llbit, arch_state.llbit);
  nemu->cp0.println();
  printAllTLB();
  print("Nemu execuate {:d} instructs\n", inst_number);
  print("Nemu execuate {:d} branch\n", branchNum);
  print("Nemu execuate {:d} jump\n", jumpNum);
  if (fileName != "") {
    fclose(file);
  }
} /*}}}*/

word_t CPU_state::isa_reg_str2val(const char *s, bool *success) {/*{{{*/
    word_t res = 0;
    *success = false;
    uint8_t regs_len = ARRLEN(regs);
    bool is_regnum = s[0]=='R';
    int regnum = atoi(s+1);
    for (uint8_t i = 0; i < regs_len; i++) {
        if (strcmp(regs[i], s)==0 || (is_regnum && regnum==i)){
            res = arch_state.gpr[i];
            *success = true;
            break;
        }
    }
    if (*success==false && strcmp("pc",s)==0){
        res = arch_state.pc;
        *success = true;
    }
    if (*success==false && strcmp("ll",s)==0){
        res = arch_state.llbit;
        *success = true;
    }
#define __cp0_name_read__(regname,rd,sel,...) \
    if (*success==false && strcmp(#regname,s)==0){ \
        *success = cp0.read(rd<<3|sel, res);\
    }
    __cp0_info__(__cp0_name_read__, , );
    return res;
}/*}}}*/
