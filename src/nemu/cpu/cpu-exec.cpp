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

#include <csignal>
#include <memory>
#include <sstream>
#include "common.hpp"
#include "easylogging++.h"
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
#include "utils.hpp"
#include "nemu/Debugger.hpp"
/* The assembly code of instructions executed is only output to the screen
 * when the number of instructions executed is less than this value.
 * This is useful when you use the `si' command.
 * You can modify this value as you want.
 */
#define MAX_INST_TO_PRINT 10
bool is_wp_change();

void check_deadloop(word_t pc){
    if (detect_deadloop(pc)){
        __ASSERT_NEMU__(0, "detect dead loop after pc:" HEX_WORD, get_pc_before_deadloop());
        nemu_state.state = NEMU_STOP;
        nemu_state.halt_pc = pc;
    }
}

void trace_and_difftest(Decode *_this) {
    // TIMED_FUNC(trace_and_difftest);
    IFDEF(CONFIG_ITRACE, nemu->log_pt->trace("[I] %v", nemu->isa_disasm_inst()));
    extern std::unique_ptr<dual_soc> soc;
    IFDEF(CONFIG_DIFFTEST, difftest_step(soc->ref_ext_int()));
    IFDEF(CONFIG_WATCH_POINT, if(is_wp_change())nemu_state.state=NEMU_STOP); //TODO: make watch point a class with methor
    IFDEF(CONFIG_DEADLOOP, check_deadloop(_this->pc));
#ifdef CONFIG_DWARD
    uint8_t flag = _this->flag;
    if (flag!=0){
        if (IS_CALL(flag)) 
            mips_dwarf.call_func_at(_this->pc);
        if (IS_RET (flag))
            mips_dwarf.ret_func_to(nemu->delay_slot_npc);
    }
#endif
}

void mips32_CPU_state::exec_once() {
    // TIMED_FUNC(mips32);
    isa_exec_once(isa_query_intr());
    trace_and_difftest(&inst_state);
}
