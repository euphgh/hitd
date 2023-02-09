#ifndef __IRING_H__
#define __IRING_H__
//HACK:IRING_NR must be the power of 2
#define IRING_NR 64
typedef struct iring {
    char log_buf[IRING_NR][128];
    int  head,tail;
} Iring;
void add_iring(const char* info);
void log_iring();
#endif
