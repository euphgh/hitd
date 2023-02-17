#include "nemu/isa.hpp"
#include "generated/autoconf.h"
#include "testbench/sim_state.hpp"
#include "testbench/difftest/api.hpp"
#include "testbench/axi.hpp"
#include "testbench/dpic.hpp"
#include <getopt.h>
#include <memory>
#include <csignal>

#define wave_file_t MUXDEF(CONFIG_EXT_FST,VerilatedFstC,VerilatedVcdC)
#define __WAVE_INC__ MUXDEF(CONFIG_EXT_FST,"verilated_fst_c.h","verilated_vcd_c.h")
#ifdef CONFIG_TRACE_ON
#include __WAVE_INC__
#endif

sim_status_t sim_status = SIM_STOP;
// const word_t end_pc = 0xbfc00100;
INITIALIZE_EASYLOGGINGPP
std::unique_ptr<CPU_state> nemu_cpu;
uint64_t ticks = 0;
uint64_t inst_count = 0;
extern el::Logger* logger_init(std::string name);

std::string now_pc(const el::LogMessage* msg){
    std::stringstream res("0x");
    res << std::hex << nemu_cpu->arch_state.pc;
    return res.str();
}
std::string now_ticks(const el::LogMessage* msg){
    return std::to_string(ticks);
}

int main (int argc, char *argv[]) {

    std::signal(SIGINT, [](int) {sim_status = SIM_ABORT;});

    el::Logger* nemu_log = logger_init("Nemu ");
    el::Logger* mycpu_log = logger_init("MyCPU");
    std::unique_ptr<Vmycpu_top> top(new Vmycpu_top());
    std::unique_ptr<axi_paddr> axi(new axi_paddr(top.get(), mycpu_log));

    AddrIntv inst_range = AddrIntv(0x1fc00000,(uint8_t)22);
    AddrIntv confreg_range = AddrIntv(0x1faf0000,(uint8_t)16);

    Pmem* v_inst_mem = new Pmem(inst_range,mycpu_log);
    v_inst_mem->load_binary(0,__FUNC_BIN__);
    PaddrConfreg* v_confreg = new PaddrConfreg(mycpu_log);
    v_confreg->set_switch(0);

    axi->paddr_top.add_dev(inst_range, v_inst_mem);
    axi->paddr_top.add_dev(confreg_range, v_confreg);

    std::shared_ptr<PaddrTop> nemu_paddr_top(new PaddrTop(axi->paddr_top));
    nemu_paddr_top->log_pt = nemu_log;

    nemu_cpu.reset(new CPU_state(nemu_paddr_top));
    nemu_cpu->reset();

    Verilated::traceEverOn(CONFIG_TRACE_ON);
    IFDEF(CONFIG_TRACE_ON,wave_file_t tfp);
    IFDEF(CONFIG_TRACE_ON,top->trace(&tfp,0));
    IFDEF(CONFIG_TRACE_ON,tfp.open(__WAVE_DIR__ "func_test." CONFIG_WAVE_EXT));
    ticks = 0;
    uint64_t rst_ticks = 5;
    // uint64_t last_commit = ticks;
    // uint64_t commit_timeout = 1024;
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
            nemu_cpu->ref_tick_and_int(0);
            uint8_t commit_num =dpi_retire();
            if (commit_num>0){
                for (size_t i = 0; i < commit_num; i++) {
                    nemu_cpu->ref_exec_once(false);
                }
                diff_state mycpu;
                diff_state *ref_r;
                dut_get_state(&mycpu);
                ref_r = nemu->isa_diff_state();
                bool res = difftest_check(&mycpu, ref_r);
                if (!res){
                    __ASSERT_SIM__(0, "DIFFTEST ERROR!");
                    difftest_show_error(&mycpu, ref_r);
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
