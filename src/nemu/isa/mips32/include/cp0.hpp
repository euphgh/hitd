#ifndef __CP0_H__
#define __CP0_H__
#include "common.hpp"
#include "easylogging++.h"
#include "fmt/core.h"
#define __W__ 1
#define __R__ 0
#define __cp0_info__(f2,f1) \
    f2(badvaddr,8,0,\
            f1(all      ,31 ,0  ,0x0  ,__R__)\
    )\
    f2(count,9,0,\
            f1(all      ,31 ,0  ,0x0  ,__W__)\
    )\
    f2(compare,11,0,\
            f1(all      ,31 ,0  ,0x0  ,__W__)\
    )\
    f2(status,12,0,\
            f1(z31_23   ,31 ,23 ,0x0  ,__R__)\
            f1(bev      ,22 ,22 ,0x1  ,__R__)\
            f1(z21_16   ,21 ,16 ,0x0  ,__R__)\
            f1(im       ,15 ,8  ,0x0  ,__W__)\
            f1(z7_2     ,7  ,2  ,0x0  ,__R__)\
            f1(exl      ,1  ,1  ,0x0  ,__W__)\
            f1(ie       ,0  ,0  ,0x0  ,__W__)\
    )\
    f2(cause,13,0,\
            f1(bd       ,31 ,31 ,0x0  ,__R__)\
            f1(ti       ,30 ,30 ,0x0  ,__R__)\
            f1(z29_16   ,29 ,16 ,0x0  ,__R__)\
            f1(ip_h     ,15 ,10 ,0x0  ,__R__)\
            f1(ip_s     ,9  ,8  ,0x0  ,__W__)\
            f1(z7_7     ,7  ,7  ,0x0  ,__R__)\
            f1(exccode  ,6  ,2  ,0x0  ,__R__)\
            f1(z1_0     ,1  ,0  ,0x0  ,__R__)\
    )\
    f2(epc,14,0,\
            f1(all      ,31 ,0  ,0x0  ,__W__)\
    )

typedef enum{
    Int = 0x0,
    AdEL = 0x04,
    AdES = 0x05,
    Sys = 0x08,
    Bp = 0x09,
    RI = 0x0a,
    CpU = 0x0b,
    Ov = 0x0c,
} ExcCode_t;
    
#define __cp0_reg_type__(regname,rd,sel,...) \
    typedef struct {\
        __VA_ARGS__ \
    } regname##_t ;

#define __cp0_reg_def__(regname,rd,sel,...) \
    regname##_t regname;

#define __cp0_field_def__(name,msb,lsb,reset,writable) \
    unsigned int name: msb-lsb+1; \

__cp0_info__(__cp0_reg_type__,__cp0_field_def__)

typedef struct {
    __cp0_info__(__cp0_reg_def__,)
} CP0_t;

extern uint8_t clock_tick;
void cp0_init(CP0_t* cp0);
word_t cp0_read(CP0_t* cp0, uint8_t rd_sel);
bool cp0_write(CP0_t* cp0, uint8_t rd_sel, word_t data);
#endif
