#ifndef __TESTBENCH_GOLDENFILE_HPP__
#define __TESTBENCH_GOLDENFILE_HPP__
#include "common.hpp"
#include <fstream>

class GoldenFile {
public:
  GoldenFile(const std::string &filename);
  bool compare(word_t pc, uint8_t wnum, word_t wdata);
  bool isError() { return error; }

private:
  std::ifstream file;
  bool error;
};
#endif