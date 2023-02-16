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
#include "nemu/cpu/difftest.hpp"
#include "../local-include/reg.hpp"

bool CPU_state::isa_difftest_checkregs(diff_state *ref_r) {
    bool ans = ref_r->pc==arch_state.pc;
    for (size_t i = 0; i < ARRLEN(ref_r->gpr); i++) {
        ans &= (ref_r->gpr[i]==arch_state.gpr[i]);
    }
    if (hilo_valid){
        ans &= ref_r->hi==arch_state.hi;
        ans &= ref_r->lo==arch_state.lo;
    }
    return ans;
}

static inline void log_reg(word_t ref, word_t my_ans, const char* name){
    bool error = ref!=my_ans;
    const char *my_fmt = error ? ANSI_FMT(FMT_REG, ANSI_FG_RED) : FMT_REG;
    printf(my_fmt, name, my_ans,my_ans);
    if (error) printf(ANSI_FMT(FMT_REG, ANSI_FG_GREEN),
            name,ref,ref);
}

void CPU_state::isa_difftest_log_error(diff_state *ref_r){
    for (uint8_t i = 0; i < 32; i++) {
        char tmp[10] = {0};
        sprintf(tmp, "%s($%d)", reg_name(i), i);
        log_reg(ref_r->gpr[i], arch_state.gpr[i], tmp);
    }
    if (hilo_valid){
        log_reg(ref_r->hi, arch_state.hi, "$hi");
        log_reg(ref_r->lo, arch_state.lo, "$lo");
    }
    log_reg(ref_r->pc, arch_state.pc, "next-pc");
}
void isa_difftest_attach() {
}
