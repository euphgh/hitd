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

#include <memory>
#include "common.hpp"
#include "nemu/cpu/cpu.hpp"
#include "nemu/isa.hpp"
#include "nemu/cpu/decode.hpp"
#include "fmt/core.h"
#include "cp0.hpp"
#include "macro.hpp"
#include "nemu/mytrace.hpp"
#include "nemu/deadloop.hpp"
#include "isa-def.hpp"
#include "nemu/cpu/difftest.hpp"
#include "soc.hpp"
/* The assembly code of instructions executed is only output to the screen
 * when the number of instructions executed is less than this value.
 * This is useful when you use the `si' command.
 * You can modify this value as you want.
 */
#define MAX_INST_TO_PRINT 10
bool is_wp_change();
extern std::string disassemble(uint64_t pc, uint8_t *code, int nbyte);

// void check_ftrace(const Decode * s){/*{{{*/
//     if (s->flag!=0){
//         int level = get_level();
//         vaddr_t now_pc = s->pc;
//         vaddr_t dest_pc = MUXDEF(CONFIG_ISA_mips32, cpu.delay_slot_npc, s->dnpc);
//         log_write(FMT_WORD ": ",now_pc);
//         if (IS_CALL(s->flag)) {
//             for (int i = 0; i < level; i++)
//                 log_write("  ");
//             log_write("call [%s] -> [%s] (@" FMT_WORD ")\n",search_ftable(now_pc),search_ftable(dest_pc), dest_pc);
//             set_level(push);
//         }
//         if (IS_RET (s->flag)){
//             for (int i = 0; i < level-1; i++)
//                 log_write("  ");
//             log_write("ret  [%s] <- [%s]\n", search_ftable(dest_pc), search_ftable(now_pc));
//             set_level(pop );
//         }
//     }
// }/*}}}*/

void check_deadloop(word_t pc){
    if (detect_deadloop(pc)){
        __ASSERT_NEMU__(0, "detect dead loop after pc:" HEX_WORD, get_pc_before_deadloop());
        nemu_state.state = NEMU_ABORT;
        nemu_state.halt_pc = pc;
    }
}

void trace_and_difftest(Decode *_this) {
    IFDEF(CONFIG_ITRACE, nemu->log_pt->trace("[I] %v", disassemble(_this->pc, (uint8_t*)&(_this->inst), 4).c_str()+1));
    IFDEF(CONFIG_DIFFTEST, difftest_step(0));
    IFDEF(CONFIG_WATCH_POINT, if(is_wp_change()) nemu_state.state=NEMU_STOP); //TODO: make watch point a class with methor
    IFDEF(CONFIG_FTRACE, check_ftrace(_this));
    IFDEF(CONFIG_DEADLOOP, check_deadloop(_this->pc));
}

void mips32_CPU_state::exec_once() {
    isa_exec_once(isa_query_intr());

    trace_and_difftest(&inst_state);

    if (nemu_state.state != NEMU_RUNNING) {
        if (nemu_state.state==NEMU_ABORT) 
            nemu->log_pt->error(fmt::format("Fail to execute:{}", disassemble(inst_state.pc, (uint8_t*)&(inst_state.inst), 4)));
    }
}
