#include "common.hpp"
#include "debug.hpp"
#include "easylogging++.h"
#include "nemu/isa.hpp"
#include "generated/autoconf.h"
#include "testbench/sim_state.hpp"
#include "testbench/axi.hpp"
#include "testbench/dpic.hpp"
#include <cstdio>
#include <getopt.h>
#include <utility>
#include "soc.hpp"
#include "testbench/cp0_checker.hpp"
#include "testbench/inst_timer.hpp"

el::Logger* nemu_log;
el::Logger* mycpu_log;
sim_status_t sim_status = SIM_RUN;
uint64_t ticks = 0;
uint32_t log_pc = 0xbfc00000;
extern bool mainloop(
        Vmycpu_top* top,
        axi_paddr* axi,
        std::string wave_name,
        dual_soc& soc
        );

INITIALIZE_EASYLOGGINGPP

void run_func(
        Vmycpu_top* top,
        axi_paddr* axi,
        dual_soc& soc
        ){/*{{{*/
    for (size_t i = 0; i < 1; i++) {
        soc.set_switch(0);
        if (!mainloop(top, axi, "func-"+std::to_string(i), soc)) break;
    }
}/*}}}*/

void run_perf(
        Vmycpu_top* top,
        axi_paddr* axi,
        dual_soc& soc
        ){/*{{{*/
    for (size_t i = 1; i <= 10; i++) {
        soc.set_switch(i);
        if (!mainloop(top, axi, "perf-"+std::to_string(i), soc)) break;
    }
}/*}}}*/

extern void parse_args(int argc, char *argv[]);
int main (int argc, char *argv[]) {
    parse_args(argc, argv);

    extern el::Logger* logger_init(std::string name);
    nemu_log = logger_init("NJemu");
    mycpu_log = logger_init("MyCPU");

    std::signal(SIGINT, [](int) {sim_status = SIM_INT;});

    dual_soc soc {};
    Vmycpu_top* top = new Vmycpu_top();
    dpi_init();
    axi_paddr* axi = new axi_paddr(top);
    axi->paddr_top = soc.get_dut_soc();
    axi->paddr_top->set_logger(mycpu_log);

    PaddrTop* nemu_paddr_top = soc.get_ref_soc();
    nemu_paddr_top->set_logger(nemu_log);
    IFDEF(CONFIG_MEM_DIFF, axi->set_diff_mem(nemu_paddr_top));
    init_isa(nemu_paddr_top);

    IFDEF(CONFIG_TEST_FUNC, run_func(top, axi, soc));
    IFDEF(CONFIG_TEST_PERF, run_perf(top, axi, soc));

    top->final();
    nemu_log->flush();
    mycpu_log->flush();
    return 0;
}
