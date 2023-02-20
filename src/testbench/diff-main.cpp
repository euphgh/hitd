#include "easylogging++.h"
#include "nemu/isa.hpp"
#include "fmt/core.h"
#include "generated/autoconf.h"
#include "testbench/sim_state.hpp"
#include "testbench/axi.hpp"
#include "testbench/dpic.hpp"
#include "utils.hpp"
#include <getopt.h>
#include <memory>
#include <csignal>
#include "soc.hpp"

#define wave_file_t MUXDEF(CONFIG_EXT_FST,VerilatedFstC,VerilatedVcdC)
#define __WAVE_INC__ MUXDEF(CONFIG_EXT_FST,"verilated_fst_c.h","verilated_vcd_c.h")
#ifdef CONFIG_TRACE_ON
#include __WAVE_INC__
#endif

INITIALIZE_EASYLOGGINGPP
// const word_t end_pc = 0xbfc00100;
extern el::Logger* logger_init(std::string name);
extern char* log_file_name;
el::Logger* nemu_log;
el::Logger* mycpu_log;
sim_status_t sim_status = SIM_RUN;
uint64_t ticks = 0;
uint32_t log_pc = 0xbfc00000;

static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"log"      , required_argument, NULL, 'l'},
    {"help"     , no_argument      , NULL, 'h'},
  };
  int o;
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
}

int main (int argc, char *argv[]) {
    parse_args(argc, argv);
    nemu_log = logger_init("NJemu");
    mycpu_log = logger_init("MyCPU");

    std::signal(SIGINT, [](int) {sim_status = SIM_ABORT;});

    std::unique_ptr<Vmycpu_top> top(new Vmycpu_top());
    std::unique_ptr<axi_paddr> axi(new axi_paddr(top.get()));
    axi->paddr_top = func_soc();
    axi->paddr_top->set_logger(mycpu_log);

    PaddrTop* nemu_paddr_top = func_soc();
    nemu_paddr_top->set_logger(nemu_log);
    init_isa(nemu_paddr_top);
    nemu->reset();

    IFDEF(CONFIG_TRACE_ON,Verilated::traceEverOn(true));
    IFDEF(CONFIG_TRACE_ON,wave_file_t tfp);
    IFDEF(CONFIG_TRACE_ON,top->trace(&tfp,0));
    IFDEF(CONFIG_TRACE_ON,tfp.open(__WAVE_DIR__ "func_test." CONFIG_WAVE_EXT));
    ticks = 0;
    uint64_t rst_ticks = 5;
    // uint64_t last_commit = ticks;
    // uint64_t commit_timeout = 1024;

    top->aclk = 0;
    top->aresetn = 0;

    while (!Verilated::gotFinish()) {
        if (rst_ticks  > 0) {
            top->aresetn = 0;
            rst_ticks --;
            axi->reset();
        }
        else top->aresetn = 1;

        top->aclk = !top->aclk;

        if (top->aclk && top->aresetn) {/*{{{*/

            axi->calculate_output();
            top->eval();

            func_confreg_ticks();

            axi->update_output();
            IFDEF(CONFIG_TRACE_ON,tfp.dump(ticks));

            if (sim_status!=SIM_RUN) break;

            nemu->ref_tick_and_int(0);
            uint8_t commit_num = dpi_retire();
            if (commit_num > 0) {
                bool nemu_normal = true;
                for (size_t i = 0; i < commit_num; i++) {
                    nemu_normal = nemu->ref_exec_once(false);
                    if (nemu_normal==false) {
                        __ASSERT_SIM__(0, "detect Nemu execution failure");
                        break;
                    }
                }
                if (nemu_normal) {
                    diff_state mycpu;
                    dpi_api_get_state(&mycpu);
                    bool res = nemu->ref_checkregs(&mycpu);
                    if (!res){
                        __ASSERT_SIM__(0, "difftest find MyCPU error!");
                        nemu->ref_log_error(&mycpu);
                    }
                }
            }
        }/*}}}*/
        else {/*{{{*/
            top->eval();
            IFDEF(CONFIG_TRACE_ON,tfp.dump(ticks));
        }/*}}}*/
        ticks ++;
    }
    IFDEF(CONFIG_TRACE_ON,tfp.close());
    top->final();
    printf("total ticks = %lu\n", ticks);
    return 0;
}
