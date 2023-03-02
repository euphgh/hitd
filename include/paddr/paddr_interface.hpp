#ifndef __PADDR_IF_HH__
#define __PADDR_IF_HH__

#include <memory>
#include <vector>
#include <queue>
#include "common.hpp"
#include "testbench/difftest/struct.hpp"
#include "easylogging++.h"
#include <mutex>

class bit_mask {/*{{{*/
    public:
        int len;
        word_t mask;
        bit_mask(int _len):
            len(_len),
            mask(BITMASK(_len)) {}
};/*}}}*/

class AddrIntv {// address interval{{{
    public:
    // example: [0x100,0x1ff]
    word_t start;   // include: 0x01000
    word_t mask;    //          0x00111
    AddrIntv(word_t _start, word_t _len): start(_start), mask(_len - 1){
        Assert((start & mask) == 0, "AddrIntv parameter error: start:%x\tlen:\t%x\n",_start,_len);
    };
    AddrIntv(word_t _start, bit_mask mask_len):start (_start), mask(mask_len.mask){
        Assert((start & mask) == 0,"AddrIntv parameter error: start:%x\tmask_len:\t%x\n",_start,mask_len.len);
    }
    word_t end(){
        return start + mask;
    }
};/*}}}*/

class PaddrInterface {/*{{{*/
    public:
        virtual bool do_read (word_t addr, wen_t info, word_t* data) = 0;
        virtual bool do_write(word_t addr, wen_t info, const word_t data) = 0;
        el::Logger* log_pt;
        virtual void set_logger(el::Logger* input_logger){ log_pt = input_logger; }
        PaddrInterface(el::Logger* input_logger = el::Loggers::getLogger("default")): log_pt(input_logger) {}
};/*}}}*/

class PaddrTop: public PaddrInterface{/*{{{*/
    private:
        std::vector<std::pair<AddrIntv, PaddrInterface*>> devices;
    public:
        PaddrTop(el::Logger* input_logger = el::Loggers::getLogger("default"));
        bool add_dev(AddrIntv &new_range, PaddrInterface *dev);
        bool do_read (word_t addr, wen_t info, word_t* data);
        bool do_write(word_t addr, wen_t info, const word_t data);
        void set_logger(el::Logger* input_logger);
};/*}}}*/

class Pmem : public PaddrInterface  {/*{{{*/
    private:
        unsigned char *mem;
        size_t mem_size;
    public:
        Pmem(word_t size_bytes, 
                el::Logger* input_logger = el::Loggers::getLogger("default"));
        Pmem(const AddrIntv &_range, 
                el::Logger* input_logger = el::Loggers::getLogger("default"));
        Pmem(const AddrIntv &_range, unsigned char *init_binary, 
                el::Logger* input_logger = el::Loggers::getLogger("default"));
        Pmem(size_t size_bytes, const char *init_file, 
                el::Logger* input_logger = el::Loggers::getLogger("default"));
        Pmem(const Pmem &src);
        ~Pmem() ;
        bool do_read (word_t addr, wen_t info, word_t* data);
        bool do_write(word_t addr, wen_t info, const word_t data);
        void load_binary(uint64_t addr, const char *init_file);
        void save_binary(const char *filename) ;
        uint8_t *get_mem_ptr();
};/*}}}*/

class PaddrConfreg: public PaddrInterface {/*{{{*/
    public:
    enum {
        POS_MODE, // when uart has output read negtive queue and check
        NEG_MODE,
        NOR_MODE
    };
    // physical address = [0x1faf0000,0x1fafffff]
    private:
    uint32_t cr[8];
    uint32_t switch_data;
    uint32_t switch_inter_data;
    uint32_t timer;
    uint32_t led;
    uint32_t led_rg0;
    uint32_t led_rg1;
    uint32_t num;
    uint32_t simu_flag;
    uint32_t io_simu;
    uint8_t virtual_uart;
    uint32_t open_trace;
    uint32_t num_monitor;
    int diff_mode; // not a physical register, using as uart difftest
    std::queue<uint8_t>* diff_queue; // not a physical register, using as uart difftest
    public:
    std::queue <uint8_t> uart_queue;
    uint32_t confreg_read = 0;
    uint32_t confreg_write = 0;
    PaddrConfreg(bool simulation = false,
            el::Logger* input_logger = el::Loggers::getLogger("default"));
    void tick();
    bool do_read (word_t addr, wen_t info, word_t* data);
    bool do_write(word_t addr, wen_t info, const word_t data);
    void set_switch(uint8_t value);
    uint32_t get_num();
    void set_difftest_mode(int mode, std::queue<uint8_t>* negtive_queue);
};/*}}}*/

class Puart8250: public PaddrInterface {/*{{{*/
    public:
        Puart8250();
        bool do_read (word_t addr, wen_t info, word_t* data);
        bool do_write(word_t addr, wen_t info, const word_t data);
        void putc(char c);
        char getc();
        bool irq();
        bool exist_tx();
    private:
        bool DLAB();
        void update_IIR();
        const static uint64_t UART_RX = 0;
        const static uint64_t UART_TX = 0;
        std::queue <char> rx;
        std::queue <char> tx;
        std::mutex rx_lock;
        std::mutex tx_lock;

        bool thr_empty;
        // regs
        unsigned char DLL;
        unsigned char DLM;
        unsigned char IER;
        unsigned char LCR;
        unsigned char IIR;
        unsigned char MCR;
};/*}}}*/
#endif
