#include "nemu/deadloop.hpp"
static PC_FIFO pc_fifo = {{0}};
long loop_times = 0;
inline static int next(int x){
    return (x+1) & (PC_FIFO_NR-1);
}
inline static int prev(int x){
    return (x+PC_FIFO_NR-1) & (PC_FIFO_NR-1);
}

bool detect_deadloop(word_t pc){
    bool ans = false;
    int tmp = pc_fifo.head;
    while (tmp!=pc_fifo.tail) {
        if (pc==pc_fifo.item[tmp]){
            loop_times++;
            ans = (loop_times > LOOP_MAX);
            break;
        }
        tmp = next(tmp);
    }
    if (tmp==pc_fifo.tail){
        pc_fifo.item[pc_fifo.tail] = pc;
        pc_fifo.tail = next(pc_fifo.tail);
        if (pc_fifo.tail==pc_fifo.head){
            pc_fifo.head = next(pc_fifo.head);
        }
        loop_times = 0;
    }
    return ans;
}

word_t get_pc_before_deadloop(){
    return pc_fifo.item[prev(pc_fifo.tail)];
}
