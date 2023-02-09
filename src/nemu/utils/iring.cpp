#include <common.h>
#include "iring.h"
static Iring iring = {0};
inline static int next(int x){
    return (x+1) & (IRING_NR-1);
}
inline static int prev(int x){
    return (x+IRING_NR-1) & (IRING_NR-1);
}

void add_iring(const char* info){
    memcpy(iring.log_buf[iring.tail], info, 128);
    iring.tail = next(iring.tail);
    if (iring.tail==iring.head) 
        iring.head = next(iring.head);
}
void log_iring(){
    int tmp = iring.head;
    int valid_num = (iring.tail - iring.head + IRING_NR)&(IRING_NR-1);
    Log("%d iring traces(upper limit is %d) has been record in log file",valid_num,IRING_NR-1);
    while (tmp!=iring.tail) {
        log_write("%d:\t%s\n",(tmp-iring.head+1 + IRING_NR) & (IRING_NR-1), iring.log_buf[tmp]);
        tmp = next(tmp);
    }
}
