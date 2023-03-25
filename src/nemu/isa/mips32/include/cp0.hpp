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
            f1(cu321    ,31 ,29 ,0x0  ,__R__, __n__)\
            f1(cu0      ,28 ,28 ,0x0  ,__W__, __n__)\
            f1(z31_23   ,27 ,23 ,0x0  ,__R__, __n__)\
            f1(bev      ,22 ,22 ,0x1  ,__W__, __c__)\
            f1(z21_16   ,21 ,16 ,0x0  ,__R__, __n__)\
            f1(im       ,15 ,8  ,0x0  ,__W__, __c__)\
            f1(z7_2     ,7  ,5  ,0x0  ,__R__, __n__)\
            f1(ksu      ,4  ,3  ,0x0  ,__W__, __c__)\
            f1(erl      ,2  ,2  ,0x1  ,__W__, __c__)\
            f1(exl      ,1  ,1  ,0x0  ,__W__, __c__)\
            f1(ie       ,0  ,0  ,0x0  ,__W__, __c__)\
    )\
    f2(cause, 13, 0,\
            f1(bd       ,31 ,31 ,0x0  ,__R__, __c__)\
            f1(ti       ,30 ,30 ,0x0  ,__R__, __n__)\
            f1(z29_16   ,29 ,24 ,0x0  ,__R__, __n__)\
            f1(iv       ,23 ,23 ,0x0  ,__W__, __n__)\
            f1(z22_16   ,22 ,16 ,0x0  ,__R__, __n__)\
            f1(ip_h     ,15 ,10 ,0x0  ,__R__, __n__)\
            f1(ip_s     ,9  ,8  ,0x0  ,__W__, __c__)\
            f1(z7_7     ,7  ,7  ,0x0  ,__R__, __n__)\
            f1(exccode  ,6  ,2  ,0x0  ,__R__, __c__)\
            f1(z1_0     ,1  ,0  ,0x0  ,__R__, __n__)\
    )\
    f2(epc,14,0,\
            f1(all      ,31 ,0  ,0x0  ,__W__, __c__)\
    )\
    f2(ebase,15,1,\
            f1(z31      ,31 ,31 ,0x1 ,__R__, __c__)\
            f1(z30      ,30 ,30 ,0x0 ,__R__, __c__)\
            f1(eptbase  ,29 ,12 ,0x0 ,__W__, __c__)\
            f1(z11_10   ,11 ,10 ,0x0 ,__R__, __c__)\
            f1(cpunum   ,9  ,0  ,0x0 ,__R__, __c__)\
    )\
    f2(config0,16,0,\
            f1(m        ,31 ,31 ,0x1 ,__R__, __c__)\
            f1(k23      ,30 ,28 ,0x0 ,__R__, __c__)\
            f1(ku       ,27 ,25 ,0x0 ,__R__, __c__)\
            f1(impl     ,24 ,16 ,0x0 ,__R__, __c__)\
            f1(be       ,15 ,15 ,0x0 ,__R__, __c__) /* 0: little endian    */ \
            f1(at       ,14 ,13 ,0x0 ,__R__, __c__) /* 0: mips32     */ \
            f1(ar       ,12 ,10 ,0x0 ,__R__, __c__) /* 0: release1   */ \
            f1(mt       ,9  ,7  ,0x1 ,__R__, __c__) /* 1: standard TLB   */ \
            f1(z6_4     ,6  ,4  ,0x0 ,__R__, __c__)\
            f1(vi       ,3  ,3  ,0x0 ,__R__, __c__) /* 0: pIcache    */ \
            f1(k0       ,2  ,0  ,0x3 ,__W__, __c__) /* 3: kseg0 cached   */ \
    )\
    f2(config1,16,1,\
            f1(m        ,31 ,31 ,0x0 ,__R__, __c__) /* 0: no config2 */ \
            f1(ms       ,30 ,25 ,0xf ,__R__, __c__) /* 15: 16 tle item */ \
            f1(is       ,24 ,22 ,0x0 ,__R__, __c__) /* 0: Icache sets per way 64 */ \
            f1(il       ,21 ,19 ,0x5 ,__R__, __c__) /* 5: Icache line size 64bytes */ \
            f1(ia       ,18 ,16 ,0x1 ,__R__, __c__) /* 1: Icache associativity 2-way */ \
            f1(ds       ,15 ,13 ,0x0 ,__R__, __c__) /* 0: Dcache sets per way 64 */ \
            f1(dl       ,12 ,10 ,0x5 ,__R__, __c__) /* 5: Dcache line size 64bytes */ \
            f1(da       ,9  ,7  ,0x1 ,__R__, __c__) /* 1: Dcache associativity 2-way */ \
            f1(c2       ,6  ,6  ,0x0 ,__R__, __c__) /* 0: no COP2    */ \
            f1(md       ,5  ,5  ,0x0 ,__R__, __c__) /* 0: no MDMX    */ \
            f1(pc       ,4  ,4  ,0x0 ,__R__, __c__) /* 0: no perf counter   */ \
            f1(wr       ,3  ,3  ,0x0 ,__R__, __c__) /* 0: no watch register   */ \
            f1(ca       ,2  ,2  ,0x0 ,__R__, __c__) /* 0: no code compression   */ \
            f1(ep       ,1  ,1  ,0x0 ,__R__, __c__) /* 0: no ejtag   */ \
            f1(fp       ,0  ,0  ,0x0 ,__R__, __c__) /* 0: no float   */ \
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
        static const char* find_name(uint8_t rd_sel){
            const char* res = "unknow";
#define __cp0_pos_map_name__(regname,rd,sel,...) \
            if ((rd<<3|sel)==rd_sel) res = #regname;
            __cp0_info__(__cp0_pos_map_name__,)
            return res;
        }
    private:
        inline void compare_wfunc(){ cause.ti = 0;}
};
#endif
