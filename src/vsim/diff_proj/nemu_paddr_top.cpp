#include "common.h"
#include "PaddrInterface.hpp"
#include "diff_sim.hpp"
#include "diff_proj/paddr_top.h"
bool paddr_do_read (void* paddr_top, word_t addr, wen_t info, word_t* data){
    PaddrTop* obj = (PaddrTop*) paddr_top;
    return obj->do_read(addr, info, data);
}
bool paddr_do_write(void* paddr_top, word_t addr, wen_t info, const word_t data){
    PaddrTop* obj = (PaddrTop*) paddr_top;
    return obj->do_write(addr, info, data);
}
void* new_paddr_top(){
    AddrIntv inst_range = AddrIntv(0x1fc00000,(uint8_t)22);
    AddrIntv s0_1m = AddrIntv(0x0,(uint8_t)24);
    AddrIntv confreg_range = AddrIntv(0x1faf0000,(uint8_t)16);
    PaddrTop *nemu_paddr_top = new PaddrTop();

    Pmem* nemu_s0_1m = new Pmem(s0_1m);
    nemu_s0_1m->load_binary(0,__FUNC_BIN__);

    Pmem* nemu_inst_mem = new Pmem(inst_range,nemu_s0_1m->get_mem_ptr());

    PaddrConfreg* nemu_confreg = new PaddrConfreg(false);
    
    nemu_paddr_top->add_dev(inst_range, nemu_inst_mem);
    nemu_paddr_top->add_dev(confreg_range, nemu_confreg);
    nemu_paddr_top->add_dev(s0_1m, nemu_s0_1m);
    return nemu_paddr_top;
}
