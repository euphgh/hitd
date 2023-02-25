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

int64_t total_times = 0;
el::Logger* nemu_log;
el::Logger* mycpu_log;
sim_status_t sim_status = SIM_RUN;
uint64_t ticks = 0;
uint32_t log_pc = 0xbfc00000;
extern bool mainloop(
        Vmycpu_top* top,
        axi_paddr* axi,
        std::string wave_name,
        basic_soc& soc
        );

INITIALIZE_EASYLOGGINGPP

static std::map<std::string, int> test_name_to_code{/*{{{*/
    std::make_pair("func", TEST_NAME_FUNC),
    std::make_pair("perf", TEST_NAME_PERF),
};/*}}}*/
static int test_code;
static int parse_args(int argc, char *argv[]) {/*{{{*/
  const struct option table[] = {
    {"log"      , required_argument, NULL, 'l'},
    {"test"     , required_argument, NULL, 't'},
    {"help"     , no_argument      , NULL, 'h'},
  };
  int o;
  extern char* log_file_name;
  char* test_name;
  while ( (o = getopt_long(argc, argv, "l:t:", table, NULL)) != -1) {
    switch (o) {
      case 'l': 
          log_file_name = optarg; 
          break;
      case 't': 
          test_name = optarg; 
          Assert(test_name_to_code.find(std::string(test_name))!=test_name_to_code.end(), "not support test name %s", test_name);
          test_code = test_name_to_code.at(test_name);
          break;
      default:
          printf("Usage: %s [OPTION...] [args]\n\n", argv[0]);
          printf("\t-l,--log=FILE             output log to FILE\n");
          printf("\t-t,--test=TEST NAME       TEST NAME is in set {func, perf}");
          printf("\n");
          exit(0);
    }
  }
  return 0;
}/*}}}*/

static void run_func(
        Vmycpu_top* top,
        axi_paddr* axi,
        basic_soc& soc
        ){/*{{{*/
    for (size_t i = 0; i < 1; i++) {
        soc.set_switch(0);
        if (!mainloop(top, axi, "func-"+std::to_string(i), soc)) break;
    }
}/*}}}*/

static void run_perf(
        Vmycpu_top* top,
        axi_paddr* axi,
        basic_soc& soc
        ){/*{{{*/
    for (size_t i = 1; i <= 10; i++) {
        soc.set_switch(i);
        if (!mainloop(top, axi, "perf-"+std::to_string(i), soc)) break;
    }
}/*}}}*/

int main (int argc, char *argv[]) {
    parse_args(argc, argv);

    extern el::Logger* logger_init(std::string name);
    nemu_log = logger_init("NJemu");
    mycpu_log = logger_init("MyCPU");

    std::signal(SIGINT, [](int) {sim_status = SIM_INT;});

    basic_soc soc(test_code);
    Vmycpu_top* top = new Vmycpu_top();
    dpi_init();
    axi_paddr* axi = new axi_paddr(top);
    axi->paddr_top = soc.get_paddr(basic_soc::SOC_MYCPU);
    axi->paddr_top->set_logger(mycpu_log);

    PaddrTop* nemu_paddr_top = soc.get_paddr(basic_soc::SOC_REF);
    nemu_paddr_top->set_logger(nemu_log);
    IFDEF(CONFIG_MEM_DIFF, axi->set_diff_mem(nemu_paddr_top));
    init_isa(nemu_paddr_top);

    switch (test_code) {
        case TEST_NAME_FUNC:
            run_func(top, axi, soc);
            break;
        case TEST_NAME_PERF:
            run_perf(top, axi, soc);
            break;
    }
    top->final();
    nemu_log->flush();
    mycpu_log->flush();
    return 0;
}
