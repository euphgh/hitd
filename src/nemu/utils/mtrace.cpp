#include "nemu/isa.hpp"
#include "nemu/mytrace.hpp"
#include <csignal>
#include <cstdio>
#include <fmt/core.h>
#include <ios>
#include <sstream>

void hex_display(wen_t info, word_t data, char* buf){/*{{{*/
    char* p = buf;
    uint8_t *bytes = (uint8_t*)&data;
    uint8_t wstrb = info.wstrb;
    for (int i = 0; i < info.size; i++) {
        if (wstrb & 0x1) p += sprintf(p, "0x%02x ", bytes[i]);
        else p += sprintf(p, "0x?? ");
    }
}/*}}}*/
void read_mtrace(wen_t info, paddr_t addr, word_t value){/*{{{*/
    char buf[44];
    hex_display(info, value, buf);
    nemu->log_pt->trace(fmt::format("[M] read  [" HEX_WORD "] = {:s}", addr, buf));
}/*}}}*/
void write_mtrace(wen_t info, paddr_t addr, word_t value){/*{{{*/
    char buf[44];
    hex_display(info, value, buf);
    nemu->log_pt->trace(fmt::format("[M] write [" HEX_WORD "] = {:s}", addr, buf));
}/*}}}*/
