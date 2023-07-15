#include "isa/cp0.hpp"
// clang-format off
bool CP0_t::read (uint8_t rd_sel, word_t& data) const {/*{{{*/
    bool res = true;
    switch (rd_sel) {
#define __cp0_reg_read__(regname,rd,sel,...) \
    case (rd<<3|sel):{ \
                         IFDEF(__cp0_##regname##_rfunc__, regname##_rfunc();) \
                         const regname##_t& tmp = regname;\
                         data = (__VA_ARGS__ 0); \
                         break; \
                     }
#define __cp0_field_read__(name,msb,lsb,reset,writable,check) \
    (tmp.name << lsb) |
      __cp0_info__(__cp0_reg_read__, __cp0_field_read__, );
    default:
      res = false;
    }
    return res;
}/*}}}*/

bool CP0_t::write(uint8_t rd_sel, word_t data){/*{{{*/
    bool res = true;
    switch (rd_sel) {
#define __cp0_reg_write__(regname,rd,sel,...) \
    case (rd<<3|sel):{ \
                         regname##_t *old = &(regname); \
                         regname = { \
                             __VA_ARGS__ \
                         }; \
                         IFDEF(__cp0_##regname##_wfunc__, regname##_wfunc(data);) \
                         break; \
                     } 
#define __cp0_field_write__(name,msb,lsb,reset,writable,check) \
    .name = static_cast<unsigned int>(writable ? ((data & BITMASK(msb+1)) >> lsb) : old->name),
      __cp0_info__(__cp0_reg_write__, __cp0_field_write__, );
    default:
      res = false;
      break;
    }
    return res;
}/*}}}*/

bool CP0_t::check(const CP0_t *ref) { /*{{{*/
    bool res = true;
#define __cp0_reg_check__(regname, rd, sel, ...)                               \
  res &= regname.equals(ref->regname);
    __cp0_info__(__cp0_reg_check__, , ) return res;
} /*}}}*/

#define __cp0_reg_equals__(regname,rd,sel,...) \
    bool regname##_t::equals(const regname##_t obj){ \
        bool res = true; \
        __VA_ARGS__ \
        return res; \
    }
#define __cp0_field_equals__(name,msb,lsb,reset,writable,check) \
    res &= check ? (name==obj.name) : 1;
__cp0_info__(__cp0_reg_equals__, __cp0_field_equals__, )

    void CP0_t::log_error(const CP0_t &dut) { /*{{{*/
    extern void print_reg_diff(word_t ref, word_t my_ans, const char* name);
    word_t dut_value, ref_value;
#define __cp0_reg_log__(regname,rd,sel,...) \
    if (!regname.equals(dut.regname)){ \
        read((rd<<3|sel), ref_value); \
        dut.read((rd<<3|sel), dut_value); \
        print_reg_diff(ref_value, dut_value, #regname); \
    }
    __cp0_info__(__cp0_reg_log__, , );
} /*}}}*/

void CP0_t::reset(){/*{{{*/
    clock_tick = false;
    clock_tick = 0;
#define __cp0_reg_init__(regname,rd,sel,...) \
    regname = { \
        __VA_ARGS__ \
    };
#define __cp0_field_init__(name,msb,lsb,reset,writable,check) .name = reset,
    __cp0_info__(__cp0_reg_init__, __cp0_field_init__, );
}/*}}}*/
