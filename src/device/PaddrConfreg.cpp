#include "debug.hpp"
#include "testbench/sim_state.hpp"
#include "paddr/paddr_interface.hpp"
#include "utils.hpp"
#include <cstdint>
#include <cstdio>
#include <fmt/core.h>
#include <queue>
#include <string>

#define CR0_ADDR            0x8000  //32'hbfaf_8000 
#define CR1_ADDR            0x8004  //32'hbfaf_8004 
#define CR2_ADDR            0x8008  //32'hbfaf_8008 
#define CR3_ADDR            0x800c  //32'hbfaf_800c 
#define CR4_ADDR            0x8010  //32'hbfaf_8010 
#define CR5_ADDR            0x8014  //32'hbfaf_8014 
#define CR6_ADDR            0x8018  //32'hbfaf_8018 
#define CR7_ADDR            0x801c  //32'hbfaf_801c 
#define LED_ADDR            0xf000  //32'hbfaf_f000 
#define LED_RG0_ADDR        0xf004  //32'hbfaf_f004 
#define LED_RG1_ADDR        0xf008  //32'hbfaf_f008 
#define NUM_ADDR            0xf010  //32'hbfaf_f010 
#define SWITCH_ADDR         0xf020  //32'hbfaf_f020 
#define BTN_KEY_ADDR        0xf024  //32'hbfaf_f024
#define BTN_STEP_ADDR       0xf028  //32'hbfaf_f028
#define SW_INTER_ADDR       0xf02c  //32'hbfaf_f02c 
#define TIMER_ADDR          0xe000  //32'hbfaf_e000 
#define IO_SIMU_ADDR        0xffec  //32'hbfaf_ffec
#define VIRTUAL_UART_ADDR   0xfff0  //32'hbfaf_fff0
#define SIMU_FLAG_ADDR      0xfff4  //32'hbfaf_fff4 
#define OPEN_TRACE_ADDR     0xfff8  //32'hbfaf_fff8
#define NUM_MONITOR_ADDR    0xfffc  //32'hbfaf_fffc
PaddrConfreg::PaddrConfreg(bool simulation, el::Logger* input_logger):
    PaddrInterface(input_logger) {
    timer = 0;
    memset(cr,0,sizeof(cr));
    led = 0;
    led_rg0 = 0;
    led_rg1 = 0;
    num = 0;
    simu_flag = simulation ? 0xffffffffu : 0;
    io_simu = 0;
    open_trace = 1;
    num_monitor = 1;
    virtual_uart = 0;
    set_switch(0);
}
void PaddrConfreg::tick() { timer ++; }

bool PaddrConfreg::do_read (word_t addr, wen_t info, word_t* data) {/*{{{*/
    confreg_read ++;
    assert(info.size == 4);
    switch (addr) {
        case CR0_ADDR:
            *(uint32_t*)data = cr[0];
            break;
        case CR1_ADDR:
            *(uint32_t*)data = cr[1];
            break;
        case CR2_ADDR:
            *(uint32_t*)data = cr[2];
            break;
        case CR3_ADDR:
            *(uint32_t*)data = cr[3];
            break;
        case CR4_ADDR:
            *(uint32_t*)data = cr[4];
            break;
        case CR5_ADDR:
            *(uint32_t*)data = cr[5];
            break;
        case CR6_ADDR:
            *(uint32_t*)data = cr[6];
            break;
        case CR7_ADDR:
            *(uint32_t*)data = cr[7];
            break;
        case LED_ADDR:
            *(uint32_t *)data = led;
            break;
        case LED_RG0_ADDR:
            *(uint32_t *)data = led_rg0;
            break;
        case LED_RG1_ADDR:
            *(uint32_t *)data = led_rg1;
            break;
        case NUM_ADDR:
            *(uint32_t *)data = num;
            break;
        case SWITCH_ADDR:
            *(uint32_t *)data = switch_data;
            break;
        case BTN_KEY_ADDR:
            *(uint32_t *)data = 0;
            break;
        case BTN_STEP_ADDR:
            *(uint32_t *)data = 0;
            break;
        case SW_INTER_ADDR:
            *(uint32_t *)data = switch_inter_data;
            break;
        case TIMER_ADDR:
            *(uint32_t *)data = timer;
            break;
        case SIMU_FLAG_ADDR:
            *(uint32_t *)data = simu_flag;
            break;
        case IO_SIMU_ADDR:
            *(uint32_t *)data = io_simu;
            break;
        case VIRTUAL_UART_ADDR:
            *(uint32_t *)data = virtual_uart;
            break;
        case OPEN_TRACE_ADDR:
            *(uint32_t *)data = open_trace;
            break;
        case NUM_MONITOR_ADDR:
            *(uint32_t *)data = num_monitor;
            break;
        default:
            *(uint32_t *)data = 0;
            log_pt->warn(fmt::format("read  confreg not exist address: " HEX_WORD, addr));
            break;
    }
    return true;
}/*}}}*/

void PaddrConfreg::set_difftest_mode(int mode, std::queue<uint8_t>* negtive_queue){/*{{{*/
    diff_mode = mode;
    if (diff_mode==POS_MODE){
        diff_queue = negtive_queue;
    }
}/*}}}*/

static void check_uart(std::queue<uint8_t>* ref, std::queue<uint8_t>* mycpu){/*{{{*/
    bool res = ref->empty()==mycpu->empty();
    if (res){
        while (!ref->empty()) {
            if (ref->front()==mycpu->front()) putchar(ref->front());
            else break;
            ref->pop();
            mycpu->pop();
        }
        if (!res) {
            __ASSERT_NEMU__(0, "uart is different");
            extern void print_reg_diff(word_t ref, word_t my_ans, const char* name);
            print_reg_diff(ref->front(), mycpu->front(), "uart");
        }
        return;
    }
    IFNDEF(CONFIG_NSC_CEMU,__ASSERT_NEMU__(res, "uart is different, nemu {}, mycpu is {}", 
            ref->empty() ? "is empty" : "has data", 
            mycpu->empty() ? "is empty" : "has data"));
}/*}}}*/

bool PaddrConfreg::do_write(word_t addr, wen_t info, const word_t data){/*{{{*/
    confreg_write ++;
    assert(info.size == 4 || (info.size == 1 && addr == VIRTUAL_UART_ADDR));
    switch (addr) {
        case CR0_ADDR:
            cr[0] = data;
            break;
        case CR1_ADDR:
            cr[1] = data;
            break;
        case CR2_ADDR:
            cr[2] = data;
            break;
        case CR3_ADDR:
            cr[3] = data;
            break;
        case CR4_ADDR:
            cr[4] = data;
            break;
        case CR5_ADDR:
            cr[5] = data;
            break;
        case CR6_ADDR:
            cr[6] = data;
            break;
        case CR7_ADDR:
            cr[7] = data;
            break;
        case TIMER_ADDR:
            timer = data;
            break;
        case IO_SIMU_ADDR:
            io_simu = (((data) & 0xffff) << 16) | ((data) >> 16);
            break;
        case OPEN_TRACE_ADDR: 
            open_trace = (data) != 0;
            break;
        case NUM_MONITOR_ADDR:
            num_monitor = (data) & 1;
            break;
        case VIRTUAL_UART_ADDR:
            virtual_uart = (data & 0xff);
            uart_queue.push(virtual_uart);
            if (diff_mode==POS_MODE) check_uart(&uart_queue, diff_queue);
            else if (diff_mode==NOR_MODE) putchar(virtual_uart);
            break;
        case NUM_ADDR:
            num = data;
            break;
        default:
            log_pt->warn(fmt::format("write confreg not exist address: " HEX_WORD, addr));
            break;
    }
    return true;
}/*}}}*/

void PaddrConfreg::set_switch(uint8_t value) {/*{{{*/
    switch_data = value ^ 0xf;
    switch_inter_data = 0;
    for (int i=0;i<=7;i++) {
        if ( ((value >> i) & 1) == 0) {
            switch_inter_data |= 2<<(2*i);
        }
    }
}/*}}}*/

uint32_t PaddrConfreg::get_num() { return num; }

