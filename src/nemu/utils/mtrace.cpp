#include "nemu/isa.hpp"
#include "nemu/mytrace.hpp"
#include <csignal>
#include <fmt/core.h>
#include <ios>
#include <sstream>

void hex_display(int len, word_t data, char* buf){/*{{{*/
    char* p = buf;
#ifdef CONFIG_ISA64
    uint8_t  bytes[8]; memcpy(bytes,&data,8);
#else 
    uint8_t  bytes[4]; memcpy(bytes,&data,4);
#endif
    for (int i = 0; i < len; i++) {
        p += sprintf(p, "0x%02x ", bytes[i]);
    }
}/*}}}*/
void read_mtrace(int len, paddr_t addr, word_t value){/*{{{*/
    char buf[44];
    hex_display(len, value, buf);
    nemu->log_pt->trace(fmt::format("[M] read  bytes at [" HEX_WORD "] = {:s}", addr, buf));
}/*}}}*/
void write_mtrace(int len, paddr_t addr, word_t value){/*{{{*/
    if (len>4) raise(SIGINT);
    char buf[44];
    hex_display(len, value, buf);
    nemu->log_pt->trace(fmt::format("[M] write bytes at [" HEX_WORD "] = {:s}", addr, buf));
}/*}}}*/
