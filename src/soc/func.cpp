#include "paddr/paddr_interface.hpp"
#include "soc.hpp"
#include <vector>
#define __FUNC_BIN__ NSCSCC_HOME "/func_test_v0.01/soft/func/obj/main.bin"

std::vector<PaddrConfreg*> confreg_vct(0);
PaddrTop* func_soc(){
    AddrIntv s0_24_range = AddrIntv(0x0,bit_mask(24));
    AddrIntv inst_range = AddrIntv(0x1fc00000,bit_mask(22));
    AddrIntv confreg_range = AddrIntv(0x1faf0000,bit_mask(16));

    Pmem* s0_mem = new Pmem(s0_24_range);
    s0_mem->load_binary(0,__FUNC_BIN__);

    Pmem* inst_mem = new Pmem(inst_range, s0_mem->get_mem_ptr());

    PaddrConfreg* confreg = new PaddrConfreg();
    confreg->set_switch(0);
    confreg_vct.push_back(confreg);


    PaddrTop* top = new PaddrTop();
    top->add_dev(inst_range, inst_mem);
    top->add_dev(confreg_range, confreg);
    top->add_dev(s0_24_range, s0_mem);

    return top;
}
void func_confreg_ticks(){
    for (auto confreg : confreg_vct) {
        confreg->tick();
    }
}
