#include "nemu/goldenFile.hpp"
#include "common.hpp"
#include "easylogging++.h"
#include <fmt/color.h>
#include <fmt/core.h>
#include <fstream>

GoldenFile::GoldenFile(const std::string &filename)
    : file(filename), error(false) {
  using namespace fmt;
  if (!file.is_open()) {
    print("can not open golden trace {:s}\n", filename);
  }
}

bool GoldenFile::compare(word_t pc, uint8_t wnum, word_t wdata) {
  using namespace fmt;
  std::string line;
  bool back = true;
  if (wnum != 0) {
    if (std::getline(file, line)) {
      word_t refPC, refWdata;
      uint32_t refWnum, check;
      sscanf(line.c_str(), "%x\t%x\t%x\t%x", &check, &refPC, &refWnum,
             &refWdata);
      if (check) {
        error |= refPC != pc;
        error |= refWnum != wnum;
        error |= refWdata != wdata;
        if (error) {
          print(fg(color::red),
                "dut: pc = " HEX_WORD ", wnum = {:d}, wdata = " HEX_WORD "\n",
                pc, wnum, wdata);
          print(fg(color::green),
                "ref: pc = " HEX_WORD ", wnum = {:d}, wdata = " HEX_WORD "\n",
                refPC, refWnum, refWdata);
          back = false;
        }
      }
    } else
      back = false;
  }
  return back;
}