#include "common.hpp"
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
#include <queue>
#include "soc.hpp"
#include "testbench/cp0_checker.hpp"

#define wave_file_t MUXDEF(CONFIG_EXT_FST,VerilatedFstC,VerilatedVcdC)
#define __WAVE_INC__ MUXDEF(CONFIG_EXT_FST,"verilated_fst_c.h","verilated_vcd_c.h")
#ifdef CONFIG_WAVE_ON
#include __WAVE_INC__
#endif

INITIALIZE_EASYLOGGINGPP
extern el::Logger* logger_init(std::string name);
extern char* log_file_name;
el::Logger* nemu_log;
el::Logger* mycpu_log;
sim_status_t sim_status = SIM_RUN;
uint64_t ticks = 0;
uint32_t log_pc = 0xbfc00000;
#define SIM_END_PC 0xbfc00100

static int parse_args(int argc, char *argv[]) {/*{{{*/
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
}/*}}}*/

void log_end_info(){/*{{{*/
    switch (sim_status) {
        case SIM_ABORT:
            mycpu_log->info("mycpu has error and quit");
            break;
        case SIM_END:
            mycpu_log->info("mycpu pass test");
            break;
        case SIM_INT:
            mycpu_log->info("mycpu stop test for key board interrupt");
            break;
        default:
            mycpu_log->info("mycpu quit with not defined state %v", sim_status);
            break;
    }
}/*}}}*/

int main (int argc, char *argv[]) {
    parse_args(argc, argv);
    nemu_log = logger_init("NJemu");
    mycpu_log = logger_init("MyCPU");

    std::signal(SIGINT, [](int) {sim_status = SIM_INT;});
    std::unique_ptr<Vmycpu_top> top(new Vmycpu_top());
    std::unique_ptr<axi_paddr> axi(new axi_paddr(top.get()));
    axi->paddr_top = func_soc();
    axi->paddr_top->set_logger(mycpu_log);
    dpi_init();

    PaddrTop* nemu_paddr_top = func_soc();
    IFDEF(CONFIG_MEM_DIFF, axi->set_diff_mem(nemu_paddr_top);)
    nemu_paddr_top->set_logger(nemu_log);
    init_isa(nemu_paddr_top);
    nemu->reset();

    IFDEF(CONFIG_WAVE_ON,Verilated::traceEverOn(true));
    IFDEF(CONFIG_WAVE_ON,wave_file_t tfp);
    IFDEF(CONFIG_WAVE_ON,top->trace(&tfp,0));
    IFDEF(CONFIG_WAVE_ON,tfp.open(__WAVE_DIR__ "func_test." CONFIG_WAVE_EXT));


    ticks = 0;
    top->aclk = 0;
    IFDEF(CONFIG_COMMIT_WAIT, uint64_t last_commit = ticks);
    IFDEF(CONFIG_CP0_DIFF, cp0_checker cp0_checker);
    for (size_t i = 0; i < 2; i++) {

        sim_status = SIM_RUN;
        uint64_t rst_ticks = 5;
        top->aresetn = 0;

        while (!Verilated::gotFinish()) {/*{{{*/
            ticks ++;
            if (rst_ticks  > 0) {
                top->aresetn = 0;
                rst_ticks --;
                axi->reset();
                nemu->reset();
            }
            else top->aresetn = 1;

            top->aclk = !top->aclk;

            if (top->aclk && top->aresetn) {/*{{{*/
                axi->calculate_output();
                top->eval();

                func_confreg_ticks();

                axi->update_output();
                IFDEF(CONFIG_WAVE_ON,tfp.dump(ticks));

                if (sim_status!=SIM_RUN) break;

                IFDEF(CONFIG_CP0_DIFF, cp0_checker.check_change();)

                    nemu->ref_tick_and_int(0);

                uint8_t commit_num = dpi_retire();
                if (commit_num > 0) {
                    IFDEF(CONFIG_COMMIT_WAIT, last_commit = ticks;)
                        bool nemu_normal = true;
                    uint8_t mycpu_int = dpi_interrupt_seq();
                    for (size_t i = 0; i < commit_num; i++) {
                        nemu_normal = nemu->ref_exec_once(i+1 == mycpu_int);
                        if (nemu_normal==false) {
                            __ASSERT_SIM__(0, "detect Nemu execution failure");
                            break;
                        }
                        if (nemu->inst_state.pc==SIM_END_PC) {
                            nemu_log->info("execute inst at end pc");
                            sim_status = SIM_END;
                        }
                        IFDEF(CONFIG_CP0_DIFF, cp0_checker.check_value(nemu->inst_state.pc, nemu->cp0);)

                    }
                    if (nemu_normal) {
                        diff_state mycpu;
                        dpi_api_get_state(&mycpu);
                        bool res = nemu->ref_checkregs(&mycpu);
                        if (!res){
                            extern std::string disassemble(uint64_t pc, uint8_t *code, int nbyte);
                            __ASSERT_SIM__(0, "MyCPU execution{} error !!!",
                                    disassemble(nemu->inst_state.pc, 
                                        (uint8_t*)&nemu->inst_state.inst, 
                                        4));
                            nemu->ref_log_error(&mycpu);
                        }
                    }
                }
            }/*}}}*/

            else {/*{{{*/
                top->eval();
                IFDEF(CONFIG_WAVE_ON,tfp.dump(ticks));
            }/*}}}*/

            IFDEF(CONFIG_COMMIT_WAIT, __ASSERT_SIM__(ticks-last_commit<CONFIG_COMMIT_TIME_LIMIT, \
                        "{} ticks not commit inst", \
                        CONFIG_COMMIT_TIME_LIMIT);)
        }/*}}}*/

        log_end_info();

    }

    IFDEF(CONFIG_WAVE_ON,tfp.close());
    top->final();
    return 0;
}
