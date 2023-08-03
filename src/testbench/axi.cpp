#include "testbench/axi.hpp"
#include "common.hpp"
#include "fmt/core.h"
#include "testbench/difftest/struct.hpp"
#include "testbench/sim_state.hpp"
#include <cstdint>
#include <fmt/core.h>
#include <vector>
// clang format off
using namespace fmt;
extern el::Logger *mycpu_log;

void axi_paddr::update_output() {
#define __my_axi_out_ref__(width, name, masterIn)                              \
  IFONE(masterIn, pins.name = s_##name;)
  AXI_BUNDLE(__my_axi_out_ref__)
}

bool axi_paddr::calculate_output() { /*{{{*/
  bool res = read_eval();
  res &= write_eval();
  return res;
} /*}}}*/

void axi_paddr::reset() { /*{{{*/
  r_status = r_idel;
  idel_wait_read();
  w_status = w_idel;
  idel_wait_write();
} /*}}}*/

word_t shiftDataToAXI(word_t data, wen_t info, word_t paddr) {
  if (info.size != 4) {
    switch (paddr & 0x3) {
    case 0x0:
      return data;
    case 0x1:
      return data << 8;
    case 0x2:
      return data << 16;
    default:
      return data << 24;
    };
  } else
    return data;
}

word_t shiftDataFromAXI(word_t data, wen_t info, word_t paddr) {
  if (info.size != 4) {
    switch (paddr & 0x3) {
    case 0x0:
      return data;
    case 0x1:
      return data >> 8;
    case 0x2:
      return data >> 16;
    default:
      return data >> 24;
    };
  } else
    return data;
}

void generateReadStrb(wen_t &info, word_t paddr) {
  uint8_t low2 = paddr & 0x3;
  switch (info.size) {
  case 1:
    info.wstrb = 1 << low2;
  case 2:
    info.wstrb = low2 == 0 ? 0b0011 : 0b1100;
  default:
    info.wstrb = 0xf;
  }
}

void axi_paddr::set_diff_mem(PaddrTop *diff_mem) { check_paddr_top = diff_mem; }

bool axi_paddr::check_axi_req(uint8_t num_bytes, burst_t burst_type,
                              word_t start_addr, uint8_t burst_len) { /*{{{*/
  bool res = true;
  __ASSERT_SIM__(
      num_bytes <= (CONFIG_AXI_DWID >> 3),
      fmt::format("32 AXI read bytes number not support {}", num_bytes));
  __ASSERT_SIM__(burst_type != BURST_RESERVED, "Arburst type is RESERVED");

  word_t align_addr = start_addr & ~(num_bytes - 1);
  bool aligned = start_addr == align_addr;

  if (burst_type == BURST_WRAP) {
    __ASSERT_SIM__(aligned, "Arburst type is WRAP but not aligned");
    __ASSERT_SIM__(
        (burst_len == 2 || burst_len == 4 || burst_len == 8 || burst_len == 16),
        "Arburst type is WRAP but arlen is", burst_len);
    // NOTE:wrap type must not cross 4KB bound for wrapping at 4KB
  } else {
    __ASSERT_SIM__(
        align_addr >> 12 == (align_addr + num_bytes * burst_len - 1) >> 12,
        "Arburst type is %d but cross 4KB address bound", burst_type);
    if (burst_len) {
      __ASSERT_SIM__(aligned, "This enviroment do not support unalign burst");
    }
  } // NOTE: FIX must not cross 4KB address bound
  return res;
} /*}}}*/
void axi_paddr::read_difftest() { /*{{{*/
  word_t check_data;
  check_paddr_top->do_read(r_cur_addr, r_cur_info, &check_data);
  __ASSERT_SIM__(check_data == s_rdata,
                 "read {} bytes at [" HEX_WORD "] is error !!!",
                 (uint8_t)r_cur_info.size, r_cur_addr);
  extern void print_reg_diff(word_t ref, word_t my_ans, const char *name);
  print_reg_diff(check_data, s_rdata, "mem");
} /*}}}*/

const char *burst_str(burst_t num) { /*{{{*/
  const char *res;
  switch (num) {
  case BURST_WRAP:
    res = "WRAP ";
    break;
  case BURST_INCR:
    res = "INCR ";
    break;
  case BURST_FIXED:
    res = "FIXED";
    break;
  default:
    res = "RESER";
    break;
  }
  return res;
} /*}}}*/

bool axi_paddr::accept_read_req() { /*{{{*/
  bool res = true;
  uint8_t num_bytes = 1 << pins.arsize;

  r_burst_count = pins.arlen + 1;
  word_t start_addr = pins.araddr;
  r_burst_type = (burst_t)pins.arburst;

  check_axi_req(num_bytes, r_burst_type, start_addr, r_burst_count);

  if (r_burst_type == BURST_WRAP) {
    r_wrap_off_mask = ((r_burst_count) << pins.arsize) - 1;
    r_wrap_bound = start_addr & ~r_wrap_off_mask;
    r_wrap_offset = (start_addr & r_wrap_off_mask) >> pins.arsize;
  } else
    r_wrap_offset = 0;

  r_cur_id = pins.arid;
  r_cur_addr = start_addr;
  r_cur_info.size = num_bytes;
  generateReadStrb(r_cur_info, r_cur_addr);
  r_cur_NO = 0;

  r_left_time = r_delay();
  s_arready = 0;
  paddr_top->log_pt->trace(fmt::format(
      "[T] read  req [" HEX_WORD "], size={}, len={}, burst={}, id={}",
      start_addr, num_bytes, r_burst_count, burst_str(r_burst_type), r_cur_id));
  return res;
} // check axi, assign last_count, assign left_time, unset arready }}}
bool axi_paddr::do_once_read() { /*{{{*/
  bool res = true;
  res = paddr_top->do_read(r_cur_addr, r_cur_info, &s_rdata);
  IFDEF(CONFIG_MEM_DIFF, read_difftest();)
  s_rdata = shiftDataToAXI(s_rdata, r_cur_info, r_cur_addr);
  r_cur_data[r_cur_NO++] = s_rdata;
  s_rvalid = 1;
  s_rlast = r_burst_count == r_cur_NO;
  s_rid = r_cur_id;
  s_rresp = res ? RESP_OKEY : RESP_DECERR;

  switch (r_burst_type) {
  case BURST_FIXED:
    break;
  case BURST_INCR:
    r_cur_addr += r_cur_info.size;
    break;
  case BURST_WRAP:
    r_cur_addr =
        ((r_cur_addr + r_cur_info.size) & r_wrap_off_mask) | r_wrap_bound;
    break;
  default:
    assert(0);
  }
  return res;
} // check axi, last_count--, assign axi R channel valid}}}
void axi_paddr::idel_wait_read() { /*{{{*/
  s_rvalid = 0;
  s_rresp = 0;
  s_rid = 0;
  s_rlast = 0;
  s_rdata = 0;
  s_arready = 1;
};                            /*}}}*/
bool axi_paddr::read_eval() { /*{{{*/
  bool res = true;
  switch (r_status) {
  case r_idel:
    if (pins.arvalid) {
      r_status = r_req_ok;
      res &= accept_read_req();
    }
    break;
  case r_req_ok:
    if (r_left_time)
      r_left_time--;
    else {
      r_status = r_wait_last;
      res &= do_once_read();
    }
    break;
  case r_wait_last:
    if (pins.rready) {
      if (pins.rlast) {
        r_status = r_idel;
        idel_wait_read();
        read_data_trace();
      } else
        res &= do_once_read();
    }
    break;
  }
  return res;
} /*}}}*/

bool axi_paddr::accept_write_req() { /*{{{*/
  bool res = true;
  uint8_t num_bytes = 1 << pins.awsize;

  w_burst_count = pins.awlen + 1;
  word_t start_addr = pins.awaddr;
  w_burst_type = (burst_t)pins.awburst;

  check_axi_req(num_bytes, w_burst_type, start_addr, w_burst_count);

  if (w_burst_type == BURST_WRAP) {
    w_wrap_off_mask = ((w_burst_count) << pins.awsize) - 1;
    w_wrap_bound = start_addr & ~w_wrap_off_mask;
    w_wrap_offset = (start_addr & w_wrap_off_mask) >> pins.awsize;
  } else
    w_wrap_offset = 0;

  w_cur_NO = 0;
  w_cur_id = pins.awid;
  w_cur_addr[w_cur_NO] = start_addr;
  w_cur_info[w_cur_NO].size = num_bytes;
  s_awready = 0;
  s_wready = 1;

  paddr_top->log_pt->trace(format(
      "[T] write req [" HEX_WORD "] size={}, len={}, burst={}, id={}",
      start_addr, num_bytes, w_burst_count, burst_str(w_burst_type), w_cur_id));
  return res;
};                                    /*}}}*/
bool axi_paddr::accept_write_data() { /*{{{*/
  bool res = true;
  __ASSERT_SIM__(pins.wid == w_cur_id,
                 "Write data " HEX_WORD " wid({:d}) != awid({:d})", pins.wdata,
                 pins.wid, w_cur_id);
  w_cur_data[w_cur_NO] = pins.wdata;
  w_cur_info[w_cur_NO].wstrb = pins.wstrb;
  w_cur_NO++;
  if (w_cur_NO == w_burst_count) {
    __ASSERT_SIM__(pins.wlast == 1,
                   "Write data " HEX_WORD
                   " wlast != 1 when the last wdata arrive",
                   pins.wdata);
    s_wready = 0;
    w_left_time = w_delay();
    write_data_trace();
  } else {
    __ASSERT_SIM__(pins.wlast == 0,
                   "Write data " HEX_WORD
                   " wlast is set but not the last transition",
                   pins.wdata);
    word_t last_addr = w_cur_addr[w_cur_NO - 1];
    uint8_t last_size = w_cur_info[w_cur_NO - 1].size;
    w_cur_info[w_cur_NO].size = last_size;
    switch (w_burst_type) {
    case BURST_FIXED:
      w_cur_addr[w_cur_NO] = last_addr;
      break;
    case BURST_INCR:
      w_cur_addr[w_cur_NO] = last_addr + last_size;
      break;
    case BURST_WRAP:
      w_cur_addr[w_cur_NO] =
          ((last_addr + last_size) & w_wrap_off_mask) | w_wrap_bound;
      break;
    default:
      assert(0);
    }
  }
  return res;
};                               /*}}}*/
bool axi_paddr::do_all_write() { /*{{{*/
  bool res = true;
  for (size_t i = 0; i < w_burst_count; i++) {
    auto wData = shiftDataFromAXI(w_cur_data[i], w_cur_info[i], w_cur_addr[i]);
    res &= paddr_top->do_write(w_cur_addr[i], w_cur_info[i], wData);
  }
  s_bvalid = 1;
  s_bresp = res ? RESP_OKEY : RESP_DECERR;
  s_bid = w_cur_id;
  return res;
};                                  /*}}}*/
void axi_paddr::idel_wait_write() { /*{{{*/
  s_awready = 1;
  s_wready = 0;
  s_bid = 0;
  s_bresp = 0;
  s_bvalid = 0;
};                             /*}}}*/
bool axi_paddr::write_eval() { /*{{{*/
  bool res = true;
  switch (w_status) {
  case w_idel:
    if (pins.awvalid) {
      w_status = w_req_ok;
      res &= accept_write_req();
    }
    break;
  case w_req_ok:
    if (pins.wvalid) {
      res &= accept_write_data();
      w_status = pins.wlast ? w_data_ok : w_req_ok;
    }
    break;
  case w_data_ok:
    if (w_left_time)
      w_left_time--;
    else {
      w_status = w_wait_back;
      res &= do_all_write();
    }
    break;
  case w_wait_back:
    if (pins.bready) {
      w_status = w_idel;
      idel_wait_write();
      paddr_top->log_pt->trace(fmt::format("[T] write finish id={}", w_cur_id));
    }
    break;
  }
  return res;
} /*}}}*/

void my_word_fmt(uint32_t data, wen_t info, std::stringstream &out) { /*{{{*/
  int width = 8;
  char res[8] = {0};
  for (size_t i = 0; i < width; i++) {
    char tmp = '\0';
    if (info.wstrb & 0x1) {
      char seg = data & 0xf;
      if (seg < 10)
        tmp = 48 + seg;
      else
        tmp = 87 + seg;
    } else
      tmp = '?';
    res[width - 1 - i] = tmp;
    info.wstrb = info.wstrb >> (i & 0x1);
    data = data >> 4;
  }
  out << res;
} /*}}}*/
void axi_paddr::read_data_trace() { /*{{{*/
  std::stringstream res;
  res << "[T] read  data ";
  for (int i = 0; i < r_burst_count; i++) {
    int index = (i + r_burst_count - r_wrap_offset) & (r_burst_count - 1);
    my_word_fmt(r_cur_data[index], r_cur_info, res);
    res << " ";
  }
  res << "id=" << std::to_string(r_cur_id);
  paddr_top->log_pt->trace(res.str());
} /*}}}*/
void axi_paddr::write_data_trace() { /*{{{*/
  std::stringstream res;
  res << "[T] write data ";
  for (int i = 0; i < w_burst_count; i++) {
    int index = (i + w_burst_count - w_wrap_offset) & (w_burst_count - 1);
    my_word_fmt(w_cur_data[index], w_cur_info[index], res);
    res << " ";
  }
  res << "id=" << std::to_string(w_cur_id);
  paddr_top->log_pt->trace(res.str());
} /*}}}*/
