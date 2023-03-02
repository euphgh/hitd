#include "paddr/paddr_interface.hpp"
class boot_soc{
    boot_soc(int test_name){
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
    }
};
