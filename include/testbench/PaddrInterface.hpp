#ifndef __PADDR_IF_HH__
#define __PADDR_IF_HH__

#include <cstdint>
#include <cassert>
#include <cstdio>
#include <vector>
#include <queue>
#include "common.h"
#include "diff_struct.h"

class AddrIntv {// address interval{{{
    public:
    // example: [0x100,0x1ff]
    word_t start;   // include:0x01000
    word_t mask;
    AddrIntv(word_t _start, word_t _len): start(_start), mask(_len - 1){
        Assert((start & mask) == 0,"AddrIntv parameter error: start:%x\tlen:\t%x\n",_start,_len);
    };
    AddrIntv(word_t _start, uint8_t mask_bits):start (_start), mask(BITMASK(mask_bits)){
        Assert((start & mask) == 0,"AddrIntv parameter error: start:%x\tmask_len:\t%x\n",_start,mask_bits);
    }
    word_t end(){
        return start + mask;
    }
};/*}}}*/

class PaddrInterface {/*{{{*/
    public:
        virtual bool do_read (word_t addr, wen_t info, word_t* data) = 0;
        virtual bool do_write(word_t addr, wen_t info, const word_t data) = 0;
        virtual PaddrInterface* deep_copy() = 0;
};/*}}}*/

class PaddrTop: public PaddrInterface{/*{{{*/
    private:
        std::vector<std::pair<AddrIntv, PaddrInterface*>> devices;
    public:
        PaddrTop();
        PaddrTop(PaddrTop& src);
        bool add_dev(AddrIntv &new_range, PaddrInterface *dev);
        bool do_read (word_t addr, wen_t info, word_t* data);
        bool do_write(word_t addr, wen_t info, const word_t data);
        PaddrInterface* deep_copy();
};/*}}}*/

class Pmem : public PaddrInterface  {/*{{{*/
    private:
        unsigned char *mem;
        size_t mem_size;
    public:
        Pmem(word_t size_bytes);
        Pmem(const AddrIntv &_range);
        Pmem(Pmem &src);
        Pmem(const AddrIntv &_range, unsigned char *init_binary);
        Pmem(size_t size_bytes, const char *init_file);
        PaddrInterface* deep_copy();
        ~Pmem() ;
        bool do_read (word_t addr, wen_t info, word_t* data);
        bool do_write(word_t addr, wen_t info, const word_t data);
        void load_binary(uint64_t addr, const char *init_file);
        void save_binary(const char *filename) ;
        uint8_t *get_mem_ptr();
};/*}}}*/

class PaddrConfreg: public PaddrInterface {/*{{{*/
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
        std::queue <uint8_t> uart_queue;
    public:
        uint32_t confreg_read = 0;
        uint32_t confreg_write = 0;
        PaddrConfreg(bool simulation = false);
        void tick();
        bool do_read (word_t addr, wen_t info, word_t* data);
        bool do_write(word_t addr, wen_t info, const word_t data);
        void set_switch(uint8_t value);
        bool has_uart();
        char get_uart();
        uint32_t get_num();
        PaddrInterface* deep_copy();
};/*}}}*/

#endif
