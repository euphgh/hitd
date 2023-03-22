#ifndef __CP0_H__
#define __CP0_H__
#include "common.hpp"

#define __W__ 1
#define __R__ 0
// anything about hard interrupt can not check
#define __c__ 1
#define __n__ 0

#define __cp0_info__(f2,f1) \
    f2(badvaddr, 8, 0,\
            f1(all      ,31 ,0  ,0x0  ,__R__, __c__)\
    )\
    f2(count, 9, 0,\
            f1(all      ,31 ,0  ,0x0  ,__W__, __n__)\
    )\
    f2(compare, 11, 0,\
            f1(all      ,31 ,0  ,0x0  ,__W__, __c__)\
    )\
    f2(status, 12, 0,\
            f1(z31_23   ,31 ,23 ,0x0  ,__R__, __n__)\
            f1(bev      ,22 ,22 ,0x1  ,__R__, __c__)\
            f1(z21_16   ,21 ,16 ,0x0  ,__R__, __n__)\
            f1(im       ,15 ,8  ,0x0  ,__W__, __c__)\
            f1(z7_2     ,7  ,2  ,0x0  ,__R__, __n__)\
            f1(exl      ,1  ,1  ,0x0  ,__W__, __c__)\
            f1(ie       ,0  ,0  ,0x0  ,__W__, __c__)\
    )\
    f2(cause, 13, 0,\
            f1(bd       ,31 ,31 ,0x0  ,__R__, __c__)\
            f1(ti       ,30 ,30 ,0x0  ,__R__, __n__)\
            f1(z29_16   ,29 ,16 ,0x0  ,__R__, __n__)\
            f1(ip_h     ,15 ,10 ,0x0  ,__R__, __n__)\
            f1(ip_s     ,9  ,8  ,0x0  ,__W__, __c__)\
            f1(z7_7     ,7  ,7  ,0x0  ,__R__, __n__)\
            f1(exccode  ,6  ,2  ,0x0  ,__R__, __c__)\
            f1(z1_0     ,1  ,0  ,0x0  ,__R__, __n__)\
    )\
    f2(epc,14,0,\
            f1(all      ,31 ,0  ,0x0  ,__W__, __c__)\
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
    class regname##_t{\
        public: \
        __VA_ARGS__ \
        bool equals(const regname##_t obj); \
    };

#define __cp0_reg_def__(regname,rd,sel,...) \
    regname##_t regname;

#define __cp0_field_def__(name,msb,lsb,reset,writable,check) \
    unsigned int name: msb-lsb+1; \

__cp0_info__(__cp0_reg_type__,__cp0_field_def__)

class CP0_t {
    public:
        CP0_t (bool dpic = false) {}
        void reset();
        bool read (uint8_t rd_sel, word_t& data) const;
        bool write(uint8_t rd_sel, word_t  data); // write writable field 
        bool check(const CP0_t& ref);
        void log_error(const CP0_t& ref);
        __cp0_info__(__cp0_reg_def__,)
        uint8_t clock_tick;
    private:
        inline void compare_wfunc(){ cause.ti = 0;}
};
#endif
