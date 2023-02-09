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

#include <isa.h>
#include "cp0.h"
#include "local-include/reg.h"

const char *regs[] = {
  "$0", "at", "v0", "v1", "a0", "a1", "a2", "a3",
  "t0", "t1", "t2", "t3", "t4", "t5", "t6", "t7",
  "s0", "s1", "s2", "s3", "s4", "s5", "s6", "s7",
  "t8", "t9", "k0", "k1", "gp", "sp", "s8", "ra"
};

void isa_reg_display() {
    uint8_t regs_len = ARRLEN(regs);
    for (int i = 0; i < regs_len; i++) {
        word_t value = gpr(i);
        char name[8];
        sprintf(name, "$%-2d(%s)",i,regs[i]);
        printf(FMT_REG,name,value,value);
    }
    printf(FMT_REG,"pc",cpu.pc,cpu.pc);
}

#define __cp0_name_read__(regname,rd,sel,...) \
    if (*success==false && strcmp(#regname,s)==0){ \
        res = cp0_read(&(cpu.cp0),rd<<3|sel);\
        *success = true; \
    }

word_t isa_reg_str2val(const char *s, bool *success) {
    word_t res = 0;
    *success = false;
    uint8_t regs_len = ARRLEN(regs);
    for (uint8_t i = 0; i < regs_len; i++) {
        if (strcmp(regs[i], s)==0){
            res = gpr(i);
            *success = true;
            break;
        }
    }
    if (*success==false && strcmp("pc",s)==0){
        if (strcmp("pc", s)==0){
            res = cpu.pc;
            *success = true;
        }
    }
    __cp0_info__(__cp0_name_read__,)
    return res;
}
