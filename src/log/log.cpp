#include "diff_proj/diff_log.h"
#include "generated/autoconf.h"
#include "common.h"
#include <cstdio>
#include <cstring>
FILE * log_dt = nullptr;
#ifdef CONFIG_LRING_ENABLE
char lring[CONFIG_LRING_LEN][CONFIG_LRING_NR];
int lring_head;
void log_init(const char* filename){
    lring_head = 0;
    for (int i = 0; i < CONFIG_LRING_NR; i++) {
        memset(lring[i],0,CONFIG_LRING_LEN);
    }
    log_dt = (filename != nullptr) ? fopen(filename, "w") :stdout;
    Log("Log of DiffTest will write to %s after simulate end", log_dt ? filename : "stdout");
}
void lring_print(){
    for (int i = 0; i < CONFIG_LRING_NR; i++) {
        if (lring[lring_head+i][0]){
            fprintf(log_dt, "%s\n", lring[lring_head+i]);
        }
    }
}
#else
void log_init(const char* filename){
    log_dt = (filename != nullptr) ? fopen(filename, "w") :stdout;
    Log("Log of DiffTest is written to %s", log_dt ? filename : "stdout");
}
#endif
