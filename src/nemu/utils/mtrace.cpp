#include "nemu/mytrace.hpp"
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
    log_write("READ  memory %d byte:\t%8s[" FMT_PADDR "] = %s\n", len, "mem",addr, buf);
}/*}}}*/
void write_mtrace(int len, paddr_t addr, word_t value){/*{{{*/
    char buf[44];
    hex_display(len, value, buf);
    log_write("WRITE memory %d byte:\t%8s[" FMT_PADDR "] = %s\n", len, "mem",addr, buf);
}/*}}}*/
