#include <nemu/isa.hpp>
#include "paddr/nemu_paddr.hpp"
#include "utils.hpp"
#include "nemu/mytrace.hpp"
extern void* nemu_paddr_top;
static void out_of_bound(paddr_t addr) {
  panic("address = " FMT_PADDR " is out of bound of pmem at pc = " FMT_WORD,
      addr, cpu.pc);
}
word_t paddr_read(paddr_t addr, int len) {
    word_t data;
    wen_t info = {
        .size = static_cast<unsigned char>(len),
        .wstrb = static_cast<unsigned char>(len>>4),
    };
    bool res = paddr_do_read(nemu_paddr_top, addr, info, &data);
    IFDEF(CONFIG_MTRACE,read_mtrace(len,addr,data));
    if (!res) out_of_bound(addr);
    return data;
}

void paddr_write(paddr_t addr, int len, word_t data) {
    wen_t info = {
        .size = static_cast<unsigned char>(len),
        .wstrb = static_cast<unsigned char>(len>>4),
    };
    IFDEF(CONFIG_MTRACE,write_mtrace(len,addr,data));
    bool res = paddr_do_write(nemu_paddr_top, addr, info, data);
    if (!res) out_of_bound(addr);
    return;
}
