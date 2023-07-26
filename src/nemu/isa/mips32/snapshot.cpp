#include "common.hpp"
#include "isa-def.hpp"
#include "isa/cp0.hpp"
#include "macro.hpp"
#include "properties/Properties.h"
#include "properties/PropertiesParser.h"
#include <fmt/core.h>
#include <fstream>
#include <string>

using namespace fmt;
using namespace std;
using namespace cppproperties;
#define SL_HEX_WORD(value) format("h{:08x}", value)
#define SL_BOOL(value) format("{}", (bool)value)
void mips32_CPU_state::saveSnapShot(string fileName) {
  Properties props;
  props.AddProperty("PC", SL_HEX_WORD(arch_state.pc));
  props.AddProperty("HI", SL_HEX_WORD(arch_state.hi));
  props.AddProperty("LO", SL_HEX_WORD(arch_state.lo));
  props.AddProperty("LLBIT", SL_BOOL(arch_state.llbit));
  for (int i = 0; i < 32; i++)
    props.AddProperty("GPR" + to_string(i), SL_HEX_WORD(arch_state.gpr[i]));

  word_t value;
#define __cp0_reg_write_props__(regname, rd, sel, ...)                         \
  cp0.read((rd << 3 | sel), value);                                            \
  props.AddProperty(#regname, SL_HEX_WORD(value));
  __cp0_info__(__cp0_reg_write_props__, , );
#undef __cp0_reg_write_props__
  for (int i = 0; i < CONFIG_TLB_NR; i++) {
    bool g = tlb[i].g;
    bool v0 = tlb[i].v0;
    bool v1 = tlb[i].v1;
    bool d0 = tlb[i].d0;
    bool d1 = tlb[i].d1;
    bool c0 = tlb[i].c0;
    bool c1 = tlb[i].c1;
    bool pfn0 = tlb[i].pfn0;
    bool pfn1 = tlb[i].pfn1;
    bool vpn2 = tlb[i].vpn2;
    bool asid = tlb[i].asid;
    props.AddProperty("TLB" + to_string(i) + "G", SL_BOOL(g));
    props.AddProperty("TLB" + to_string(i) + "V0", SL_BOOL(v0));
    props.AddProperty("TLB" + to_string(i) + "V1", SL_BOOL(v1));
    props.AddProperty("TLB" + to_string(i) + "D0", SL_BOOL(d0));
    props.AddProperty("TLB" + to_string(i) + "D1", SL_BOOL(d1));
    props.AddProperty("TLB" + to_string(i) + "C0", SL_HEX_WORD(c0));
    props.AddProperty("TLB" + to_string(i) + "C1", SL_HEX_WORD(c1));
    props.AddProperty("TLB" + to_string(i) + "PFN0", SL_HEX_WORD(pfn0));
    props.AddProperty("TLB" + to_string(i) + "PFN1", SL_HEX_WORD(pfn1));
    props.AddProperty("TLB" + to_string(i) + "VPN2", SL_HEX_WORD(vpn2));
    props.AddProperty("TLB" + to_string(i) + "ASID", SL_HEX_WORD(asid));
  }
  PropertiesParser::Write(fileName, props);
}
void mips32_CPU_state::loadSnapShot(string fileName) {
  Properties props = PropertiesParser::Read(fileName + "/nemu.properties");
  arch_state.pc = props.GetHexWord("PC", CONFIG_RESET_PC);
  arch_state.hi = props.GetHexWord("HI", 0);
  arch_state.lo = props.GetHexWord("LO", 0);
  arch_state.llbit = props.GetBool("LLBIT", false);
  for (int i = 0; i < 32; i++) {
    arch_state.gpr[i] = props.GetHexWord("GPR" + to_string(i), 0);
  }
  for (int i = 0; i < CONFIG_TLB_NR; i++) {
    tlb[i].g = props.GetBool("TLB" + to_string(i) + "G", false);
    tlb[i].v0 = props.GetBool("TLB" + to_string(i) + "V0", false);
    tlb[i].v1 = props.GetBool("TLB" + to_string(i) + "V1", false);
    tlb[i].d0 = props.GetBool("TLB" + to_string(i) + "D0", false);
    tlb[i].d1 = props.GetBool("TLB" + to_string(i) + "D1", false);
    tlb[i].c0 = props.GetHexWord("TLB" + to_string(i) + "C0", 0);
    tlb[i].c1 = props.GetHexWord("TLB" + to_string(i) + "C1", 0);
    tlb[i].pfn0 = props.GetHexWord("TLB" + to_string(i) + "PFN0", 0);
    tlb[i].pfn1 = props.GetHexWord("TLB" + to_string(i) + "PFN1", 0);
    tlb[i].vpn2 = props.GetHexWord("TLB" + to_string(i) + "VPN2", 0);
    tlb[i].asid = props.GetHexWord("TLB" + to_string(i) + "ASID", 0);
  }
  word_t value;
#define __cp0_reg_readpp__(regname, rd, sel, ...)                              \
  if (props.isDefined(#regname)) {                                             \
    value = props.GetHexWord(#regname, 0);                                     \
    cp0.regname = {__VA_ARGS__};                                               \
  }

#define __cp0_field_readpp__(name, msb, lsb, reset, writable, check)           \
  .name = (unsigned int)BITS(value, msb, lsb),

  __cp0_info__(__cp0_reg_readpp__, __cp0_field_readpp__, );
#undef __cp0_reg_readpp__
#undef __cp0_field_readpp__
}
#undef SL_HEX_WORD

#undef concat
#include <chrono>
#include <ctime>
#include <filesystem>
#include <iostream>

string genTimeStr() {
  // 获取当前日期和时间
  auto now = chrono::system_clock::now();
  time_t time = chrono::system_clock::to_time_t(now);

  // 将日期和时间格式化为字符串
  char timeStr[100];
  strftime(timeStr, sizeof(timeStr), "%d_%H-%M-%S", localtime(&time));
  return timeStr;
}

string mkSnapShotDir(const string &parentFolder) {
  namespace fs = filesystem;
  auto timeStr = genTimeStr();

  // 创建一个新的文件夹
  fs::path newFolder = fs::path(parentFolder) / timeStr;
  fs::create_directory(newFolder);

  // 返回新文件夹的绝对路径
  return newFolder.string();
}

void rmr(std::string dir) {
  namespace fs = filesystem;
  fs::path path(dir); // 将目录名转换为路径对象
  if (fs::exists(path)) {
    if (fs::is_directory(path)) {
      // 如果是目录，则递归删除目录中的所有文件和子目录
      for (auto &entry : fs::directory_iterator(path)) {
        rmr(entry.path().string());
      }
    }
    // 删除目录本身
    fs::remove(path);
  }
}