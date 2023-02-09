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
#include <stdbool.h>
#include <macro.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "debug.h"
#include "local-include/reg.h"

const char *regs[] = {
    "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
    "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
    "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
    "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};
void reg_pc_show(CPU_state *local){
    for (size_t i = 0; i < 32; i++) {
        word_t value = local->gpr[i];
        printf(FMT_REG,regs[i],value,value);
    }
    printf(FMT_REG,"pc",local->pc,local->pc);
}
const uint8_t regs_len = ARRLEN(regs);
void isa_reg_display() {
    reg_pc_show(&cpu);
}
word_t isa_reg_str2val(const char *s, bool *success) {
    word_t res = 0;
    *success = false;
    for (uint8_t i = 0; i < regs_len; i++) {
        if (strcmp(regs[i], s)==0){
            res = gpr(i);
            *success = true;
        }
    }
    if (*success==false){
        if (strcmp("pc", s)==0){
            res = cpu.pc;
            *success = true;
        }
    }
    return res;
}
