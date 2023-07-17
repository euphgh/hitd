#ifndef __DIFFTEST_GLOBALINFO_HPP__
#define __DIFFTEST_GLOBALINFO_HPP__
#include "common.hpp"
#include "testbench/difftest/struct.hpp"
#include <cstdint>
#include <queue>
extern diff_state dutArchState;
extern uint8_t dutCommitNum;
extern word_t dutLastCommitPC;
extern uint8_t dutIntrSeq;
extern CP0_t dutCP0;
extern el::Logger *mycpu_log;
extern uint64_t ticks;
using RandQueue = std::queue<std::pair<uint8_t, word_t>>;
extern RandQueue randQueue;
#endif