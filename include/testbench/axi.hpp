#ifndef __AXI_HH__
#define __AXI_HH__

#include "Vmycpu_top.h"
#include "common.h"
#include "generated/autoconf.h"
#include <memory>
#include "PaddrInterface.hpp"

typedef enum {/*{{{*/
    BURST_FIXED = 0,
    BURST_INCR  = 1,
    BURST_WRAP  = 2,
    BURST_RESERVED  = 3
}burst_t;/*}}}*/
typedef enum {/*{{{*/
    RESP_OKEY   = 0,
    RESP_EXOKEY = 1,
    RESP_SLVERR = 2,
    RESP_DECERR = 3
}resp_t ;/*}}}*/
// AXI_BUNDLE{{{
#define AUTO_T(width) \
    typename std::conditional <(width) <=  8, CData, \
    typename std::conditional <(width) <= 16, SData, \
    typename std::conditional <(width) <= 32, IData, QData >::type >::type >::type
#define  __M_IN__ 1
#define  __M_OUT__ 0
#define AXI_BUNDLE(_,...) \
    _(CONFIG_AXI_IDWID  ,arid   , __M_OUT__) __VA_ARGS__\
    _(CONFIG_AXI_AWID   ,araddr , __M_OUT__) __VA_ARGS__\
    _(8                 ,arlen  , __M_OUT__) __VA_ARGS__\
    _(3                 ,arsize , __M_OUT__) __VA_ARGS__\
    _(2                 ,arburst, __M_OUT__) __VA_ARGS__\
    _(1                 ,arvalid, __M_OUT__) __VA_ARGS__\
    _(1                 ,arready, __M_IN__ ) __VA_ARGS__\
    \
    _(CONFIG_AXI_IDWID  ,rid    , __M_IN__ ) __VA_ARGS__\
    _(CONFIG_AXI_DWID   ,rdata  , __M_IN__ ) __VA_ARGS__\
    _(2                 ,rresp  , __M_IN__ ) __VA_ARGS__\
    _(1                 ,rlast  , __M_IN__ ) __VA_ARGS__\
    _(1                 ,rvalid , __M_IN__ ) __VA_ARGS__\
    _(1                 ,rready , __M_OUT__) __VA_ARGS__\
    \
    _(CONFIG_AXI_IDWID  ,awid   , __M_OUT__) __VA_ARGS__\
    _(CONFIG_AXI_AWID   ,awaddr , __M_OUT__) __VA_ARGS__\
    _(8                 ,awlen  , __M_OUT__) __VA_ARGS__\
    _(3                 ,awsize , __M_OUT__) __VA_ARGS__\
    _(2                 ,awburst, __M_OUT__) __VA_ARGS__\
    _(1                 ,awvalid, __M_OUT__) __VA_ARGS__\
    _(1                 ,awready, __M_IN__ ) __VA_ARGS__\
    \
    _(CONFIG_AXI_IDWID  ,wid    , __M_OUT__) __VA_ARGS__\
    _(CONFIG_AXI_DWID   ,wdata  , __M_OUT__) __VA_ARGS__\
    _(CONFIG_AXI_DWID/8 ,wstrb  , __M_OUT__) __VA_ARGS__\
    _(1                 ,wlast  , __M_OUT__) __VA_ARGS__\
    _(1                 ,wvalid , __M_OUT__) __VA_ARGS__\
    _(1                 ,wready , __M_IN__ ) __VA_ARGS__\
    \
    _(CONFIG_AXI_IDWID  ,bid    , __M_IN__ ) __VA_ARGS__\
    _(2                 ,bresp  , __M_IN__ ) __VA_ARGS__\
    _(1                 ,bvalid , __M_IN__ ) __VA_ARGS__\
    _(1                 ,bready , __M_OUT__)
/*}}}*/
#define __my_axi_ref_def__(width,name,masterIn) IFZERO(masterIn,const) AUTO_T(width)& name;
#define __my_axi_ref_ini__(width,name,masterIn) name (mycpu->name)
#define __my_axi_out_def__(width,name,masterIn) IFONE(masterIn, AUTO_T(width) s_##name;)
#define __comm__ ,
class axi_ref{
    public:
        AXI_BUNDLE(__my_axi_ref_def__)
        axi_ref(Vmycpu_top *mycpu):
            AXI_BUNDLE(__my_axi_ref_ini__, __comm__) {}
};
class axi_paddr{
    private:
        axi_ref pins;
        AXI_BUNDLE(__my_axi_out_def__)
            uint8_t delay;
    public:
        PaddrTop paddr_top;
        axi_paddr(Vmycpu_top *mycpu):
            pins(axi_ref(mycpu)) {}
        bool calculate_output();
        void update_output();
        void reset();

    private:
        bool check_axi_req(uint8_t num_bytes, burst_t burst_type, word_t start_addr, uint8_t burst_len);
        typedef enum{/*{{{*/
            r_idel,     // no transition; arready = 1
            r_req_ok,   // see arready and arvalid are set in posedge, and delay not end; arready = rvalid = 0;
            r_wait_last,// delay end and set rvalid but not (rready and rlast); rvalid = 1;
                        //
        } rstatus_t;/*}}}*/
        typedef enum{/*{{{*/
            w_idel,     // no transition; arready = 1, but wready = 0;
            w_req_ok,   // wait to accept wdata and info; wready always 1, but if id error sim will stop
            w_data_ok,  // see wready, wvalid, wlast set in posedge, start delay; bvalid and awready = 0
            w_wait_back,// delay is end, wait bready to reset; bvalid = 1;
        } wstatus_t;/*}}}*/

        rstatus_t r_status;
        uint8_t r_burst_count;
        uint8_t r_left_time;
        word_t r_wrap_off_mask;
        word_t r_wrap_bound;
        burst_t r_burst_type;

        word_t r_cur_addr;
        wen_t r_cur_info;
        uint8_t r_cur_id;

        bool accept_read_req();
        bool do_once_read();
        void idel_wait_read();
        bool read_eval();
        
        wstatus_t w_status;
        uint8_t w_burst_count;
        uint8_t w_left_time;
        word_t w_wrap_off_mask;
        word_t w_wrap_bound;
        burst_t w_burst_type;

        word_t w_cur_addr[16];
        wen_t w_cur_info[16];
        uint8_t w_cur_id;
        word_t w_cur_data[16];
        uint8_t w_cur_NO;

        bool accept_write_req();
        bool accept_write_data();
        bool do_all_write();
        void idel_wait_write();
        bool write_eval();
        inline int rand_delay() {return rand()%16+16;}
};

#endif // !__AXI_HPP__
