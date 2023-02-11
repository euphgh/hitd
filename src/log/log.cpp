#include "generated/autoconf.h"
#include "common.hpp"
#include <cstdio>
#include <cstring>
FILE * log_fp = nullptr;
#ifdef CONFIG_LRING_ENABLE
char lring[CONFIG_LRING_LEN][CONFIG_LRING_NR];
int lring_head;
void log_init(const char* filename){
    lring_head = 0;
    for (int i = 0; i < CONFIG_LRING_NR; i++) {
        memset(lring[i],0,CONFIG_LRING_LEN);
    }
    log_fp = (filename != nullptr) ? fopen(filename, "w") :stdout;
    Log("Log of DiffTest will write to %s after simulate end", log_fp ? filename : "stdout");
}
void log_update(){
    for (int i = 0; i < CONFIG_LRING_NR; i++) {
        if (lring[lring_head+i][0]){
            fprintf(log_dt, "%s\n", lring[lring_head+i]);
        }
    }
}
#else
void log_init(const char* filename){
    log_fp = (filename != nullptr) ? fopen(filename, "w") :stdout;
    Log("Log of DiffTest is written to %s", log_fp ? filename : "stdout");
}
void log_update(){
    fflush(log_fp);
}
#endif
