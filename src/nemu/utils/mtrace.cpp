#include "nemu/isa.hpp"
#include "nemu/mytrace.hpp"
#include <csignal>
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
    std::stringstream info;
    info << "[M] read  "<< len
        <<" bytes at [0x"
        << std::hex << addr << "] = " << buf;
    nemu->log_pt->trace(info.str());
}/*}}}*/
void write_mtrace(int len, paddr_t addr, word_t value){/*{{{*/
    if (len>4) raise(SIGINT);
    char buf[44];
    hex_display(len, value, buf);
    std::stringstream info;
    info << "[M] write "<< len
        <<" bytes at [0x"
        << std::hex << addr << "] = " << buf;
    nemu->log_pt->trace("[M] write %v bytes at [0x%v] = %v", len, addr, buf);
}/*}}}*/
