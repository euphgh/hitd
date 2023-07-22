#ifndef __PADDR_IF_HH__
#define __PADDR_IF_HH__

#include <memory>
#include <vector>
#include <queue>
#include "common.hpp"
#include "testbench/difftest/struct.hpp"
#include "easylogging++.h"
#include <mutex>
#include <fmt/core.h>

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
        void save_binary(std::string filename);
        uint8_t *get_mem_ptr();
};/*}}}*/

class output {
    public:
        std::queue <uint8_t> uart_queue;
        bool thr_empty;
    public:
        output(el::Logger* input_logger = el::Loggers::getLogger("default")): 
            thr_empty(false),
            op_log(input_logger) {}
        el::Logger* op_log;
        void write_buf(uint8_t c){ uart_queue.push(c); thr_empty = false; }
        inline bool exist_tx(){ return !uart_queue.empty(); }
        uint8_t getc(){/*{{{*/
            char res = EOF;
            if (!uart_queue.empty()) {
                res = uart_queue.front();
                uart_queue.pop();
            }
            thr_empty = uart_queue.empty();
            return res;
        }/*}}}*/
};

class PaddrConfreg: public PaddrInterface, public output {/*{{{*/
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
    public:
        uint32_t confreg_read = 0;
        uint32_t confreg_write = 0;
        PaddrConfreg(bool simulation = false,
                el::Logger* input_logger = el::Loggers::getLogger("default"));
        void set_logger(el::Logger* input_logger){ 
            log_pt = input_logger; 
            op_log = input_logger;
        }
        void tick();
        bool do_read (word_t addr, wen_t info, word_t* data);
        bool do_write(word_t addr, wen_t info, const word_t data);
        void set_switch(uint8_t value);
        inline uint32_t get_num() { return num; }
};/*}}}*/

class Puart8250: public PaddrInterface, public output{/*{{{*/
    public:
        Puart8250(el::Logger* input_logger = el::Loggers::getLogger("default"));
        bool do_read (word_t addr, wen_t info, word_t* data);
        bool do_write(word_t addr, wen_t info, const word_t data);
        void putc(char c);
        bool irq();
        void set_logger(el::Logger* input_logger){ 
            log_pt = input_logger; 
            op_log = input_logger;
        }
        
    public:
        bool DLAB();
        void update_IIR();
        std::queue <char> rx;
        std::mutex rx_lock;

        // regs
        unsigned char DLL;
        unsigned char DLM;
        unsigned char IER;
        unsigned char LCR;
        unsigned char IIR;
        unsigned char MCR;

    void print(){
        fmt::print("{{DLL:{}, DLM:{}, IER:{}, LCR:{}, IIR:{}, MCR:{}, thr_empty:{}, rx_empty:{}, tx.empty:{}}}\n",
                      DLL,    DLM,    IER,    LCR,    IIR,    MCR,    thr_empty,    rx.empty(),  uart_queue.empty());
    }
};/*}}}*/
#endif
