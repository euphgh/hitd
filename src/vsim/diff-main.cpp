#include <csignal>
#include "common.h"
#include "diff_sim.hpp"
#include "diff_func.hpp"
#include "verilated.h"
#include "diff_proj/diff_log.h"
#include "axi.hpp"
#include "Vmycpu_top.h"
#include "dpic.hpp"
#include <getopt.h>
#include "diff_proj/diff_log.h"

#define wave_file_t MUXDEF(CONFIG_EXT_FST,VerilatedFstC,VerilatedVcdC)
#define __WAVE_INC__ MUXDEF(CONFIG_EXT_FST,"verilated_fst_c.h","verilated_vcd_c.h")
#ifdef CONFIG_TRACE_ON
#include __WAVE_INC__
#endif

using namespace std;
sim_status_t sim_status = SIM_STOP;
FILE* golden_trace = nullptr;
const word_t end_pc = 0xbfc00100;
uint64_t inst_count = 0;

void compare (debug_info_t debug){
    if (debug.pc==end_pc){
        __ASSERT_SIM__(0, "run to the end pc");
    }
    if (debug.wen != 0 && debug.wnum != 0) {
        debug_info_t ref;
        unsigned int check;
        unsigned int wnum;
        int res = fscanf(golden_trace, "%u %x %x %x",&check,&ref.pc,&wnum,&ref.wdata);
        ref.wnum = wnum;
        inst_count++;
        if ((debug.pc != ref.pc) || (debug.wnum != ref.wnum) || (debug.wdata != ref.wdata)) {
            __ASSERT_SIM__(((debug.pc == ref.pc) && (debug.wnum == ref.wnum) && (debug.wdata == ref.wdata)), \
                    "Error!!!\n"  \
                    "    mycpu    : PC = 0x%8x, wb_wnum = 0x%2x, wb_wdata = 0x%8x\n"  \
                    "    reference: PC = 0x%8x, wb_wnum = 0x%2x, wb_wdata = 0x%8x\n", \
                    debug.pc, debug.wnum, debug.wdata, ref.pc, ref.wnum, ref.wdata
                    );
        }
    }
}

static char *log_file = nullptr;
static char *diff_so = nullptr;
static int parse_args(int argc, char *argv[]) {
    const struct option table[] = {
        {"log"     , required_argument, NULL, 'l'},
        {"diff"     , required_argument, NULL, 'd'},
        {"help"     , no_argument      , NULL, 'h'},
        {0          , 0                , NULL,  0 },
    };
    int o;
    while ( (o = getopt_long(argc, argv, "-hl:n:d:", table, NULL)) != -1) {
        switch (o) {
            case 'l': log_file = optarg; break;
            case 'd': diff_so = optarg; break;
            default:
                      printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
                      printf("\t-l,--log=FILE           output difftest log to FILE\n");
                      printf("\t-d,--diff=FILE          dynamic shared so FILE\n");
                      printf("\n");
                      exit(0);
        }
    }
    return 0;
}

int main (int argc, char *argv[]) {

    parse_args(argc, argv);

    extern void log_init(const char* filename);
    log_init(log_file);

    difftest_init(diff_so);

    std::signal(SIGINT, [](int) {sim_status = SIM_ABORT;});

    unique_ptr<Vmycpu_top> top(new Vmycpu_top());
    unique_ptr<axi_paddr> axi(new axi_paddr(top.get()));

    AddrIntv inst_range = AddrIntv(0x1fc00000,(uint8_t)22);
    AddrIntv confreg_range = AddrIntv(0x1faf0000,(uint8_t)16);

    Pmem* v_inst_mem = new Pmem(inst_range);
    v_inst_mem->load_binary(0,__FUNC_BIN__);
    PaddrConfreg* v_confreg = new PaddrConfreg(false);
    v_confreg->set_switch(0);

    axi->paddr_top.add_dev(inst_range, v_inst_mem);
    axi->paddr_top.add_dev(confreg_range, v_confreg);

    PaddrTop *nemu_paddr_top = new PaddrTop(axi->paddr_top);
    ref_init((void*)nemu_paddr_top);

    Verilated::traceEverOn(CONFIG_TRACE_ON);
    IFDEF(CONFIG_TRACE_ON,wave_file_t tfp);
    IFDEF(CONFIG_TRACE_ON,top->trace(&tfp,0));
    IFDEF(CONFIG_TRACE_ON,tfp.open(__WAVE_DIR__ "func_test." CONFIG_WAVE_EXT));

    uint64_t ticks = 0;
    uint64_t rst_ticks = 5;
    uint64_t last_commit = ticks;
    uint64_t commit_timeout = 1024;
    sim_status = SIM_RUN;

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

        bool valid_posedge = top->aclk && top->aresetn;
        if (valid_posedge) {
            axi->calculate_output();
            top->eval();
            v_confreg->tick();
            axi->update_output();
            IFDEF(CONFIG_TRACE_ON,tfp.dump(ticks));
            if (sim_status!=SIM_RUN) break;
            ref_tick_int(0);
            uint8_t commit_num =dpi_retire();
            if (commit_num>0){
                for (size_t i = 0; i < commit_num; i++) {
                    ref_exec_once(false);
                }
                diff_state mycpu, ref_r;
                dut_get_state(&mycpu);
                ref_get_state(&ref_r);
                bool res = difftest_check(&mycpu, &ref_r);
                if (!res){
                    __ASSERT_SIM__(0, "DIFFTEST ERROR!");
                    difftest_show_error(&mycpu, &ref_r);
                }
            }
        }
        else {
            top->eval();
            IFDEF(CONFIG_TRACE_ON,tfp.dump(ticks));
        }
        ticks ++;
    }
    IFDEF(CONFIG_TRACE_ON,tfp.close());
    top->final();
    printf("total ticks = %lu\n", ticks);
    return 0;
}
