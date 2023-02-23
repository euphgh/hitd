#include "common.hpp"
#include "easylogging++.h"
#include "nemu/isa.hpp"
#include "generated/autoconf.h"
#include "testbench/sim_state.hpp"
#include "testbench/axi.hpp"
#include "testbench/dpic.hpp"
#include <getopt.h>
#include "soc.hpp"
#include "testbench/cp0_checker.hpp"

el::Logger* nemu_log;
el::Logger* mycpu_log;
sim_status_t sim_status = SIM_RUN;
uint64_t ticks = 0;
uint32_t log_pc = 0xbfc00000;
extern bool mainloop(
         Vmycpu_top* top
        ,axi_paddr* axi
        ,std::string wave_name
        ,basic_soc& soc
        IFDEF(CONFIG_CP0_DIFF, ,cp0_checker& mycpu_cp0_checker)
        );

INITIALIZE_EASYLOGGINGPP

static int parse_args(int argc, char *argv[]) {/*{{{*/
  const struct option table[] = {
    {"log"      , required_argument, NULL, 'l'},
    {"help"     , no_argument      , NULL, 'h'},
  };
  int o;
  extern char* log_file_name;
  while ( (o = getopt_long(argc, argv, "l::", table, NULL)) != -1) {
    switch (o) {
      case 'l': log_file_name = optarg; break;
      default:
        printf("Usage: %s [OPTION...] [args]\n\n", argv[0]);
        printf("\t-l,--log=FILE           output log to FILE\n");
        printf("\n");
        exit(0);
    }
  }
  return 0;
}/*}}}*/

int main (int argc, char *argv[]) {
    parse_args(argc, argv);

    extern el::Logger* logger_init(std::string name);
    nemu_log = logger_init("NJemu");
    mycpu_log = logger_init("MyCPU");

    basic_soc soc(basic_soc::BIN_PERF);
    std::signal(SIGINT, [](int) {sim_status = SIM_INT;});
    Vmycpu_top* top = new Vmycpu_top();
    dpi_init();
    axi_paddr* axi = new axi_paddr(top);
    axi->paddr_top = soc.get_paddr(basic_soc::SOC_MYCPU);
    axi->paddr_top->set_logger(mycpu_log);

    PaddrTop* nemu_paddr_top = soc.get_paddr(basic_soc::SOC_REF);
    nemu_paddr_top->set_logger(nemu_log);
    IFDEF(CONFIG_MEM_DIFF, axi->set_diff_mem(nemu_paddr_top);)
    init_isa(nemu_paddr_top);

    IFDEF(CONFIG_CP0_DIFF, cp0_checker mycpu_cp0_checker);
    for (size_t i = 1; i <= 10; i++) {
        soc.set_switch(i);
        if (!mainloop(top, axi, "perf-" + std::to_string(i), soc, mycpu_cp0_checker)) break;
    }
    top->final();
    return 0;
}
