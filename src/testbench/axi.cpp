#include "diff_sim.hpp"
#include "diff_proj/diff_log.h"
#include "axi.hpp"
bool axi_paddr::calculate_output(){
    bool res = read_eval();
    res &= write_eval();
    return res;
}
void axi_paddr::reset(){
    r_status = r_idel;
    idel_wait_read();
    w_status = w_idel;
    idel_wait_write();
}
#define __my_axi_out_ref__(width,name,masterIn) IFONE(masterIn, pins.name = s_##name;)
void axi_paddr::update_output(){
    AXI_BUNDLE(__my_axi_out_ref__)
}
bool axi_paddr::check_axi_req(uint8_t num_bytes, burst_t burst_type, word_t start_addr, uint8_t burst_len){/*{{{*/
    bool res = true;
    __ASSERT_SIM__(num_bytes<=(CONFIG_AXI_DWID>>3), \
            "32 AXI read bytes number not support %d",num_bytes);
    __ASSERT_SIM__(burst_type!=BURST_RESERVED, \
            "Arburst type is RESERVED");

    word_t align_addr = start_addr & ~(num_bytes-1);
    bool aligned = start_addr==align_addr;

    if (burst_type==BURST_WRAP){
        __ASSERT_SIM__(aligned, "Arburst type is WRAP but not aligned");
        __ASSERT_SIM__((burst_len==2 || burst_len==4 || burst_len==8 || burst_len==16), \
                "Arburst type is WRAP but arlen is %d", burst_len);
        // NOTE:wrap type must not cross 4KB bound for wrapping at 4KB
    }
    else {
        __ASSERT_SIM__(align_addr>>12==(align_addr + num_bytes * burst_len - 1)>>12,\
                "Arburst type is %d but cross 4KB address bound",burst_type);
        if (burst_len) {__ASSERT_SIM__(aligned, "This enviroment do not support unalign burst");}
    }//NOTE: FIX must not cross 4KB address bound
    return res;
}/*}}}*/

bool axi_paddr::accept_read_req(){/*{{{*/
    bool res = true;
    uint8_t num_bytes = 1 << pins.arsize;

    r_burst_count = pins.arlen + 1;
    word_t start_addr = pins.araddr;
    r_burst_type = (burst_t)pins.arburst;

    check_axi_req(num_bytes, r_burst_type, start_addr, r_burst_count);

    if (r_burst_type==BURST_WRAP){
        r_wrap_off_mask = ((r_burst_count)<<pins.arsize)-1;
        r_wrap_bound = start_addr & ~r_wrap_off_mask;
    }
    r_cur_id = pins.arid;
    r_cur_addr = start_addr;
    r_cur_info.size = num_bytes;

    r_left_time = rand_delay();
    s_arready = 0;
    return res;
} // check axi, assign last_count, assign left_time, unset arready }}}
bool axi_paddr::do_once_read(){/*{{{*/
    bool res = true;
    res = paddr_top.do_read(r_cur_addr, r_cur_info, &s_rdata);
    s_rvalid = 1;
    s_rlast = r_burst_count==0;
    s_rid = r_cur_id;
    s_rresp = res ? RESP_OKEY : RESP_DECERR;
    r_burst_count--;

    switch (r_burst_type) {
        case BURST_FIXED:
            break;
        case BURST_INCR:
            r_cur_addr += r_cur_info.size;
            break;
        case BURST_WRAP:
            r_cur_addr = ((r_cur_addr + r_cur_info.size) & r_wrap_off_mask) | r_wrap_bound;
            break;
        default:
            assert(0);
    }
    return res;
} // check axi, last_count--, assign axi R channel valid}}}
void axi_paddr::idel_wait_read(){/*{{{*/
    s_rvalid = 0;
    s_rresp = 0;
    s_rid = 0;
    s_rlast = 0;
    s_rdata = 0;
    s_arready = 1;
};/*}}}*/
bool axi_paddr::read_eval(){/*{{{*/
    bool res = true;
    switch (r_status) {
        case r_idel: 
            if (pins.arvalid){
                r_status = r_req_ok;
                res &= accept_read_req();
            }
            break;
        case r_req_ok:
            if (r_left_time) r_left_time--;
            else {
                r_status = r_wait_last;
                res &= do_once_read();
            }
            break;
        case r_wait_last:
            if (pins.rready && pins.rlast) {
                r_status = r_idel;
                idel_wait_read();
            }
            else res &= do_once_read();
            break;
    }
    return res;
}/*}}}*/

bool axi_paddr::accept_write_req(){/*{{{*/
    bool res = true;
    uint8_t num_bytes = 1 << pins.awsize;

    w_burst_count = pins.awlen + 1;
    word_t start_addr = pins.awaddr;
    w_burst_type = (burst_t)pins.awburst;

    check_axi_req(num_bytes, w_burst_type, start_addr, w_burst_count);

    if (w_burst_type==BURST_WRAP){
        w_wrap_off_mask = ((w_burst_count)<<pins.awsize)-1;
        w_wrap_bound = start_addr & ~w_wrap_off_mask;
    }

    w_cur_NO = 0;
    w_cur_id = pins.awid;
    w_cur_addr[w_cur_NO] = start_addr;
    w_cur_info[w_cur_NO].size = num_bytes;
    s_awready = 0;
    s_wready = 1;
    return res;
};/*}}}*/
bool axi_paddr::accept_write_data(){/*{{{*/
    bool res = true;
    __ASSERT_SIM__(pins.wid==w_cur_id, "Write data %x wid(%x) != awid(%x)",pins.wdata, pins.wid, w_cur_id);
    w_cur_data[w_cur_NO] = pins.wdata;
    w_cur_info[w_cur_NO].wstrb = pins.wstrb;
    w_cur_NO++;
    if (w_cur_NO == w_burst_count) {
        __ASSERT_SIM__(pins.wlast==1, "Write data %x wlast != 1 when the last wdata arrive",pins.wdata);
        s_wready = 0;
        w_left_time = rand_delay();
    }
    else {
        __ASSERT_SIM__(pins.wlast==0, "Write data %x wlast is set but not the last transition",pins.wdata);
        word_t last_addr = w_cur_addr[w_cur_NO-1];
        uint8_t last_size= w_cur_info[w_cur_NO-1].size;
        w_cur_info[w_cur_NO].size = last_size;
        switch (w_burst_type) {
            case BURST_FIXED:
                w_cur_addr[w_cur_NO] = last_addr;
                break;
            case BURST_INCR:
                w_cur_addr[w_cur_NO] = last_addr + last_size;
                break;
            case BURST_WRAP:
                w_cur_addr[w_cur_NO] = ((last_addr+last_size) & w_wrap_off_mask) | w_wrap_bound;
                break;
            default:
                assert(0);
        }
    }
    return res;
};/*}}}*/
bool axi_paddr::do_all_write(){/*{{{*/
    bool res = true;
    for (size_t i = 0; i < w_burst_count; i++) {
        res &= paddr_top.do_write(w_cur_addr[i], w_cur_info[i], w_cur_data[i]);
    }
    s_bvalid = 1;
    s_bresp = res ? RESP_OKEY : RESP_DECERR;
    s_bid = w_cur_id;
    return res;
};/*}}}*/
void axi_paddr::idel_wait_write(){/*{{{*/
    s_awready = 1;
    s_wready = 0;
    s_bid = 0;
    s_bresp = 0;
    s_bvalid = 0;
};/*}}}*/
bool axi_paddr::write_eval(){/*{{{*/
    bool res = true;
    switch (w_status) {
        case w_idel:
            if (pins.awvalid){
                w_status = w_req_ok;
                res &= accept_write_req();
            }
            break;
        case w_req_ok:
            if (pins.wvalid){
                res &= accept_write_data();
                w_status = pins.wlast ? w_data_ok : w_req_ok;
            }
            break;
        case w_data_ok:
            if (w_left_time) w_left_time--;
            else {
                w_status = w_wait_back;
                res &= do_all_write();
            }
            break;
        case w_wait_back:
            if (pins.bready){
                w_status = w_idel;
                idel_wait_write();
            }
            break;
    }
    return res;
}/*}}}*/
