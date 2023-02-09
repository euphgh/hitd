#include <isa.h>
#include "diff_proj/paddr_top.h"
#include "utils.h"
#include "mytrace.h"
extern void* nemu_paddr_top;
static void out_of_bound(paddr_t addr) {
  panic("address = " FMT_PADDR " is out of bound of pmem at pc = " FMT_WORD,
      addr, cpu.pc);
}
word_t paddr_read(paddr_t addr, int len) {
    word_t data;
    wen_t info = {
        .size = len,
        .wstrb = len>>4,
    };
    bool res = paddr_do_read(nemu_paddr_top, addr, info, &data);
    IFDEF(CONFIG_MTRACE,read_mtrace(len,addr,data));
    if (!res) out_of_bound(addr);
    return data;
}

void paddr_write(paddr_t addr, int len, word_t data) {
    wen_t info = {
        .size = len,
        .wstrb = len>>4,
    };
    IFDEF(CONFIG_MTRACE,write_mtrace(len,addr,data));
    bool res = paddr_do_write(nemu_paddr_top, addr, info, data);
    if (!res) out_of_bound(addr);
    return;
}
