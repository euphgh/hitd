#include "easylogging++.h"
#include "nemu/isa.hpp"
#include "common.hpp"
#include "fmt/core.h"
#include "soc.hpp"
bool g_si_print = false;
void compare_exec(uint64_t n){
    for (;n > 0; n --) {
        // TIMED_SCOPE(exec_once, "compare exec once");
        nemu->exec_once();
        if (g_si_print) fmt::print(HEX_WORD ":\t{}\n",nemu->inst_state.pc, nemu->isa_disasm_inst());
        extern uint64_t ticks;
        ++ticks;
        extern std::unique_ptr<dual_soc> soc;
        soc->tick();
        nemu->ref_tick_and_int(0);
        if (nemu_state.state != NEMU_RUNNING) break;
        
    }
}

void cpu_exec(uint64_t n) {
    switch (nemu_state.state) {
        case NEMU_END: case NEMU_ABORT:
            printf("Program execution has ended. To restart the program, exit NEMU and run again.\n");
            return;
        default: nemu_state.state = NEMU_RUNNING;
    }

    compare_exec(n);

    switch (nemu_state.state) {
        case NEMU_RUNNING:
            nemu_state.state = NEMU_STOP; 
            break;
        case NEMU_END:
               nemu->log_pt->info("nemu run to end pc");
               break;
        case NEMU_ABORT:
               nemu->log_pt->info("nemu abort");
               break;
        case NEMU_QUIT:
               nemu->log_pt->info("nemu finish cpu-exec with unexpected state quit");
               break;
    }
}
