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
#include <cpu/difftest.h>
#include <stdio.h>
#include "../local-include/reg.h"

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
    bool ans = ref_r->pc==cpu.pc;
    for (size_t i = 0; i < ARRLEN(ref_r->gpr); i++) {
        ans &= (ref_r->gpr[i]==cpu.gpr[i]);
    }
    if (cpu.hilo_valid){
        ans &= ref_r->hi==cpu.hi;
        ans &= ref_r->lo==cpu.lo;
    }
    return ans;
}

static inline void log_reg(word_t ref, word_t my_ans, const char* name){
    bool error = ref!=my_ans;
    char *my_fmt = error ? ANSI_FMT(FMT_REG, ANSI_FG_RED) : FMT_REG;
    printf(my_fmt, name, my_ans,my_ans);
    if (error) printf(ANSI_FMT(FMT_REG, ANSI_FG_GREEN),
            name,ref,ref);
}

void isa_difftest_log_error(CPU_state *ref_r){
    Log("Difftest FAIL for " ANSI_FMT("reference",ANSI_FG_GREEN) " is different from " ANSI_FMT("nemu",ANSI_FG_RED));

    for (uint8_t i = 0; i < ARRLEN(ref_r->gpr); i++) {
        char tmp[10] = {0};
        sprintf(tmp, "%s($%d)", reg_name(i), i);
        log_reg(ref_r->gpr[i], gpr(i), tmp);
    }
    if (cpu.hilo_valid){
        log_reg(ref_r->hi, cpu.hi, "$hi");
        log_reg(ref_r->lo, cpu.lo, "$lo");
    }
    log_reg(ref_r->pc, cpu.pc, "next-pc");
}
void isa_difftest_attach() {
}
