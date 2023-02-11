#include "cp0.hpp"

#define __cp0_field_init__(name,msb,lsb,reset,writable) \
    .name = reset,
#define __cp0_reg_init__(regname,rd,sel,...) \
    regname##_t regname##_tmp = { \
        __VA_ARGS__ \
    }; \
    cp0->regname = regname##_tmp;

#define __cp0_reg_read__(regname,rd,sel,...) \
    case (rd<<3|sel):{ \
                         regname##_t tmp = cp0->regname;\
                         res = (__VA_ARGS__ 0); \
                         break; \
                     } 
#define __cp0_field_read__(name,msb,lsb,reset,writable) \
    (tmp.name << lsb) |

#define __cp0_reg_write__(regname,rd,sel,...) \
    case (rd<<3|sel):{ \
                         regname##_t *old = &(cp0->regname); \
                         regname##_t new_value = { \
                             __VA_ARGS__ \
                         }; \
                         cp0->regname = new_value; \
                         IFDEF(__cp0_##regname##_wfunc__, regname##_wfunc(cp0)); \
                         break; \
                     } 
#define __cp0_field_write__(name,msb,lsb,reset,writable) \
    .name = static_cast<unsigned int>(writable ? ((data & BITMASK(msb+1)) >> lsb) : old->name),

#define __cp0_compare_wfunc__ 1
inline void compare_wfunc(CP0_t* cp0){
    cp0->cause.ti = 0;
}

uint8_t clock_tick = 0;

void cp0_init(CP0_t* cp0){/*{{{*/
    clock_tick = false;
    __cp0_info__(__cp0_reg_init__, __cp0_field_init__)
}/*}}}*/
word_t cp0_read(CP0_t* cp0, uint8_t rd_sel){/*{{{*/
    word_t res = 0;
    switch (rd_sel) {
        __cp0_info__(__cp0_reg_read__, __cp0_field_read__)
        default: __ASSERT_NEMU__(0,"Read not exist CP0 register with rd:%u\tsel%u",rd_sel>>3,rd_sel&0x7);break;
    }
    return res;
}/*}}}*/
bool cp0_write(CP0_t* cp0, uint8_t rd_sel, word_t data){/*{{{*/
    bool res = true;
    switch (rd_sel) {
        __cp0_info__(__cp0_reg_write__,__cp0_field_write__)
        default: 
            res = false;
            __ASSERT_NEMU__(0,"Write not exist CP0 register with rd:%u\tsel%u",rd_sel>>3,rd_sel&0x7);break;
            break;
    }
    return res;
}/*}}}*/
