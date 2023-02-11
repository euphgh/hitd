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

#include <clocale>
#include "common.hpp"
#include "nemu/cpu/cpu.hpp"
#include "nemu/cpu/decode.hpp"
#include "nemu/cpu/difftest.hpp"
#include "cp0.hpp"
#include "macro.hpp"
#include "nemu/mytrace.hpp"
#include "nemu/deadloop.hpp"
/* The assembly code of instructions executed is only output to the screen
 * when the number of instructions executed is less than this value.
 * This is useful when you use the `si' command.
 * You can modify this value as you want.
 */
#define MAX_INST_TO_PRINT 10
CPU_state cpu = {{0}};
uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0; // unit: us
static bool g_print_step = false;
void device_update();
bool is_wp_change();

void check_ftrace(const Decode * s){/*{{{*/
    if (s->flag!=0){
        int level = get_level();
        vaddr_t now_pc = s->pc;
        vaddr_t dest_pc = MUXDEF(CONFIG_ISA_mips32, cpu.delay_slot_npc, s->dnpc);
        log_write(FMT_WORD ": ",now_pc);
        if (IS_CALL(s->flag)) {
            for (int i = 0; i < level; i++)
                log_write("  ");
            log_write("call [%s] -> [%s] (@" FMT_WORD ")\n",search_ftable(now_pc),search_ftable(dest_pc), dest_pc);
            set_level(push);
        }
        if (IS_RET (s->flag)){
            for (int i = 0; i < level-1; i++)
                log_write("  ");
            log_write("ret  [%s] <- [%s]\n", search_ftable(dest_pc), search_ftable(now_pc));
            set_level(pop );
        }
    }
}/*}}}*/
void check_deadloop(word_t pc){
    if (detect_deadloop(pc)){
        Log("nemu abort for detecting dead loop after pc:" FMT_WORD_X,get_pc_before_deadloop());
        nemu_state.state = NEMU_ABORT;
        nemu_state.halt_pc = pc;
    }
}

static void trace_and_difftest(const Decode *_this, vaddr_t dnpc) {
    IFDEF(CONFIG_ITRACE, log_write("%s\n", _this->logbuf)); 
    IFDEF(CONFIG_DIFFTEST, difftest_step(_this->pc, dnpc));
    IFDEF(CONFIG_WATCH_POINT if(is_wp_change()) nemu_state.state=NEMU_STOP);
    IFDEF(CONFIG_FTRACE, check_ftrace(_this));
    IFDEF(CONFIG_DEADLOOP, check_deadloop(_this->pc));
}

static void exec_once(Decode *s, vaddr_t pc) {/*{{{*/
    s->pc = pc;
    s->snpc = pc;
    isa_exec_once(s);
    cpu.pc = s->dnpc;
    IFDEF(CONFIG_IRING_TRACE, add_iring(s->logbuf));
}/*}}}*/

static void execute(uint64_t n) {
    Decode s;
    for (;n > 0; n --) {
        exec_once(&s, cpu.pc);
        g_nr_guest_inst ++;
        trace_and_difftest(&s, cpu.pc);
        if (nemu_state.state != NEMU_RUNNING) {
            IFDEF(CONFIG_ITRACE,printf("Completion of execution %s\n", s.logbuf));
            break;
        }
        IFDEF(CONFIG_DEVICE, device_update());
    }
}

static void statistic() {
    IFNDEF(CONFIG_TARGET_AM, setlocale(LC_NUMERIC, ""));
#define NUMBERIC_FMT MUXDEF(CONFIG_TARGET_AM, "%", "%'") PRIu64
    Log("host time spent = " NUMBERIC_FMT " us", g_timer);
    Log("total guest instructions = " NUMBERIC_FMT, g_nr_guest_inst);
    if (g_timer > 0) Log("simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
    else Log("Finish running in less than 1 us and can not calculate the simulation frequency");
    IFDEF(CONFIG_IRING_TRACE, log_iring());
}


/* Simulate how the CPU works. */
void cpu_exec(uint64_t n) {
    g_print_step = (n < MAX_INST_TO_PRINT);
    switch (nemu_state.state) {
        case NEMU_END: case NEMU_ABORT:
            printf("Program execution has ended. To restart the program, exit NEMU and run again.\n");
            return;
        default: nemu_state.state = NEMU_RUNNING;
    }

    uint64_t timer_start = get_time();

    execute(n);

    uint64_t timer_end = get_time();
    g_timer += timer_end - timer_start;

    switch (nemu_state.state) {
        case NEMU_RUNNING: nemu_state.state = NEMU_STOP; break;

        case NEMU_END: case NEMU_ABORT:
                           Log("nemu: %s at pc = " FMT_WORD_X,
                                   (nemu_state.state == NEMU_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :
                                    (nemu_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
                                     ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
                                   nemu_state.halt_pc);
                           // fall through
        case NEMU_QUIT: statistic();
    }
}
#ifdef CONFIG_NSC_DIFF
extern Decode last_inst;
void assert_fail_msg() {
    Error("Fail instruction is %s ", last_inst.logbuf);
    isa_reg_display();
}
bool nsc_exec(bool except, Decode* s) {
    if (except) cpu.pc = isa_raise_intr(Int, cpu.pc);
    else exec_once(s, cpu.pc);
    //TODO:interrupt too long not trigger will set nemu_state=ABORT;
    bool res = nemu_state.state == NEMU_RUNNING;
    if (res) trace_and_difftest(s, cpu.pc);
    return res;
}
#endif /* CONFIG_NSC_DIFF */
