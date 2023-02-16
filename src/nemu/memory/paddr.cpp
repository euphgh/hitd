#include <nemu/isa.hpp>
#include "paddr/nemu_paddr.hpp"
#include "utils.hpp"
#include "nemu/mytrace.hpp"

static void out_of_bound(paddr_t addr) { panic("address = " FMT_PADDR " is out of bound of pmem", addr); }
word_t paddr_read(paddr_t addr, int len) {
    word_t data;
    wen_t info = {
        .size = static_cast<unsigned char>(len & 0xf),
        .wstrb = static_cast<unsigned char>(len>>4),
    };
    bool res = nemu->paddr_top->do_read(addr, info, &data);
    IFDEF(CONFIG_MTRACE,read_mtrace(info.size,addr,data));
    if (!res) out_of_bound(addr);
    return data;
}

void paddr_write(paddr_t addr, int len, word_t data) {
    wen_t info = {
        .size = static_cast<unsigned char>(len  & 0xf),
        .wstrb = static_cast<unsigned char>(len >>4),
    };
    bool res = nemu->paddr_top->do_write(addr, info, data);
    IFDEF(CONFIG_MTRACE,write_mtrace(info.size,addr,data));
    if (!res) out_of_bound(addr);
    return;
}
