#include "mytrace.h"
void read_dtrace(int len, paddr_t addr, const char* name, word_t value){/*{{{*/
    char buf[44];
    hex_display(len, value, buf);
    log_write("READ  device %d byte:\t%8s[" FMT_PADDR "] = %s\n", len, name, addr, buf);
}/*}}}*/
void write_dtrace(int len, paddr_t addr, const char* name, word_t value){/*{{{*/
    char buf[44];
    hex_display(len, value, buf);
    log_write("WRITE device %d byte:\t%8s[" FMT_PADDR "] = %s\n", len, name, addr, buf);
}/*}}}*/

