#include "debug.hpp"
#include "paddr/paddr_interface.hpp"
#include "soc.hpp"
#include "testbench/sim_state.hpp"
#include <map>
#include <string>
#include <utility>
#include <vector>
#define __FUNC_BIN__ NSCSCC_HOME "/func_test_v0.01/soft/func/obj/main.bin"
#define __PERF_BIN__ NSCSCC_HOME "/perf_test_v0.01/soft/perf_func/obj/allbench/inst_data.bin"

static std::map<int, int> name_to_int = {
    std::make_pair(TEST_NAME_FUNC, basic_soc::BIN_FUNC),
    std::make_pair(TEST_NAME_PERF, basic_soc::BIN_PERF),
};

basic_soc::basic_soc(int test_name){/*{{{*/
    Assert(name_to_int.find(test_name)!=name_to_int.end(), "basic soc not support test code %d", test_name);
    int bin = name_to_int.at(test_name);
    AddrIntv s0_24_range = AddrIntv(0x0,bit_mask(24));
    AddrIntv inst_range = AddrIntv(0x1fc00000,bit_mask(22));
    AddrIntv confreg_range = AddrIntv(0x1faf0000,bit_mask(16));
    for (int i = 0; i < 2; i++) {
        Pmem* s0_mem = new Pmem(s0_24_range);

        if (bin==BIN_FUNC) s0_mem->load_binary(0,__FUNC_BIN__);
        else if (bin==BIN_PERF) s0_mem->load_binary(0,__PERF_BIN__); 
        else Assert(0, "bin param illegal: %d", bin);

        Pmem* inst_mem = new Pmem(inst_range, s0_mem->get_mem_ptr());

        PaddrConfreg* confreg = new PaddrConfreg(true);
        confreg_vct.push_back(confreg);

        PaddrTop* top = new PaddrTop();
        top->add_dev(inst_range, inst_mem);
        top->add_dev(s0_24_range, s0_mem);
        top->add_dev(confreg_range, confreg);
        paddr_top_vct.push_back(top);
    }
    confreg_vct.at(SOC_REF)->set_difftest_mode(CONFREG_POSTIVE, &confreg_vct.at(SOC_DUT)->uart_queue);
    confreg_vct.at(SOC_DUT)->set_difftest_mode(CONFREG_NEGTIVE, nullptr);
}/*}}}*/

PaddrTop* basic_soc::get_paddr(int who){ return paddr_top_vct.at(who); }

void basic_soc::tick(){/*{{{*/
    for (auto confreg : confreg_vct) {
        confreg->tick();
    }
}/*}}}*/

void basic_soc::set_switch(uint8_t value){/*{{{*/
    for (auto confreg : confreg_vct) {
        confreg->set_switch(value);
    }
}/*}}}*/
