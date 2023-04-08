#include "easylogging++.h"
#include "disassemble.hpp"
#include "nemu/isa.hpp"
#include "common.hpp"
#include "fmt/core.h"
#include "soc.hpp"
#include <csignal>
bool g_si_print = false;
void compare_exec(uint64_t n){
    extern std::unique_ptr<dual_soc> soc;
    for (;n > 0; n --) {
        // TIMED_SCOPE(exec_once, "compare exec once");
        extern uint64_t ticks;
        ++ticks;
        soc->tick();
        nemu->ref_tick_and_int(soc->dut_ext_int());
        nemu->exec_once();
        if (g_si_print) fmt::print(HEX_WORD ":\t{}\n",
                nemu->arch_state.pc, mips_disassemble.get_disassemble(nemu->arch_state.pc, 
                    nemu->isa_vaddr_read(nemu->arch_state.pc, 4)));
        if (nemu_state.state != NEMU_RUNNING) break;
    }
}

bool cpu_exec(uint64_t n) {
    switch (nemu_state.state) {
        case NEMU_END: case NEMU_ABORT:
            printf("Program execution has ended. To restart the program, exit NEMU and run again.\n");
            return false;
        default: nemu_state.state = NEMU_RUNNING;
    }

    compare_exec(n);

    switch (nemu_state.state) {
        case NEMU_ABORT:
            nemu->log_pt->error("nemu abort when execute %v", 
                    mips_disassemble.get_disassemble(nemu->inst_state.pc, nemu->inst_state.inst));
            raise(SIGTRAP);
        case NEMU_STOP:
            break;
        case NEMU_END:
            nemu->log_pt->info("nemu run to end pc");
            break;
        case NEMU_QUIT:
            nemu->log_pt->error("nemu finish cpu-exec with unexpected state quit");
            break;
    }
    return nemu_state.state==NEMU_RUNNING;
}
