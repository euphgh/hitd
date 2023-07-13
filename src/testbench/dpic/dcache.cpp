#include "common.hpp"
#include "macro.hpp"
#include "svdpi.h"
#include "testbench/difftest/global_info.hpp"
#include "testbench/sim_state.hpp"
#include <fmt/core.h>
#include <iomanip>
#include <map>
#include <sstream>
#include <utility>

#define dclog(str, ...) mycpu_log->trace(fmt::format("[C] " str, ##__VA_ARGS__))
enum CacheMainState { run, miss, readDram, refill, uncache, instr };
enum CacheWriteState { wIdel, wReq, wData, waitwBack };
enum CacheOp {
  IndexInvalidI = 0b00000,
  IndexWriteBackInvalidD = 0b00001,
  IndexStoreTagI = 0b01000,
  IndexStoreTagD = 0b01001,
  HitInvalidI = 0b10000,
  HitInvalidD = 0b10001,
  HitWriteBackInvalidD = 0b10101,
};

static std::map<CacheMainState, std::string> mainStateStr = {
    std::make_pair(run, "run"),           std::make_pair(miss, "miss"),
    std::make_pair(readDram, "readDram"), std::make_pair(refill, "refill"),
    std::make_pair(uncache, "uncache"),   std::make_pair(instr, "instr"),
};
static std::map<CacheWriteState, std::string> writeStateStr = {
    std::make_pair(wIdel, "wIdel"),
    std::make_pair(wReq, "wReq"),
    std::make_pair(wData, "wData"),
    std::make_pair(waitwBack, "waitBack"),
};
static std::map<CacheOp, std::string> cacheOpStr = {
    std::make_pair(IndexInvalidI, "IC Idx Invalid"),
    std::make_pair(IndexWriteBackInvalidD, "DC Idx WB Invalid"),
    std::make_pair(IndexStoreTagI, "IC Idx Store Tag"),
    std::make_pair(IndexStoreTagD, "DC Idx Store Tag"),
    std::make_pair(HitInvalidI, "IC Hit Invalid"),
    std::make_pair(HitInvalidD, "DC Hit Invalid"),
    std::make_pair(HitWriteBackInvalidD, "DC Hit WB Invalid"),
};
struct CacheState {
  CacheMainState mainState;
  CacheWriteState writeState;
  bool valid;
  word_t reqAddr;
  bool isUncache;
  bool isWrite;
  word_t writeData;
  bool cancel;
  CacheOp instrOp;
  bool instrOk;
};

static CacheState state[2] = {{run, wIdel, 0}, {run, wIdel, 0}};
static unsigned char oldMap = 0;
static unsigned char newMap = 1;

static bool reqIsSame() {
  auto res = true;
  res &= state[oldMap].reqAddr == state[newMap].reqAddr;
  res &= state[oldMap].isUncache == state[newMap].isUncache;
  res &= state[oldMap].isWrite == state[newMap].isWrite;
  res &= state[oldMap].writeData == state[newMap].writeData;
  res &= state[oldMap].cancel == state[newMap].cancel;
  return res;
}

bool stateIsSame() {
  auto res = true;
  res &= state[oldMap].mainState == state[newMap].mainState;
  res &= state[oldMap].writeState == state[newMap].writeState;
  return res;
}

extern "C" void
v_difftest_CacheRun(char io_mainState, svBit io_hasValid, int io_reqAddr,
                    svBit io_isUncache, svBit io_isWrite, int io_writeData,
                    svBit io_cancel, int io_retData, char io_hitWays,
                    svBit io_isHit, char io_victimWay, int io_vicTag,
                    svBit io_vicDirty, svBit io_vicValid, const int *io_vicLine,
                    char io_writeState, char io_instrOp, svBit io_instrOk,
                    svBit io_instrRetire) {
  std::swap(oldMap, newMap);
  state[newMap].mainState = (CacheMainState)io_mainState;
  state[newMap].writeState = (CacheWriteState)io_writeState;
  state[newMap].reqAddr = io_reqAddr;
  state[newMap].isUncache = io_isUncache;
  state[newMap].isWrite = io_isWrite;
  state[newMap].writeData = io_writeData;
  state[newMap].cancel = io_cancel;
  state[newMap].instrOp = (CacheOp)io_instrOp;
  state[newMap].instrOk = io_instrOk;

  if (state[newMap].mainState != state[oldMap].mainState) {
    dclog("mainState Change: {} -> {}", mainStateStr[state[oldMap].mainState],
          mainStateStr[state[newMap].mainState]);
    if (io_mainState == miss) {
      auto wordNum = 8;
      std::stringstream res;
      for (int i = 0; i < wordNum; i++)
        res << std::hex << std::setw(8) << std::setfill('0') << io_vicLine[i]
            << " ";
      dclog("victim {:d} way with tag: " HEX_WORD
            ", valid: {:b}, dirty: {:b}, data: {}",
            (uint8_t)io_victimWay, (word_t)io_vicTag, io_vicValid, io_vicDirty,
            res.str());
    }
  }
  if (io_mainState == instr) {
    if (state[newMap].mainState != state[oldMap].mainState)
      dclog("EXEC {:s}", cacheOpStr[(CacheOp)io_instrOp]);
    else {
      if (state[newMap].instrOp != state[oldMap].instrOp)
        mycpu_log->error(fmt::format("CacheOp not same {:b} -> {:b}",
                                     state[oldMap].instrOp,
                                     state[newMap].instrOp));
      if (state[newMap].instrOk != state[oldMap].instrOk)
        dclog("FIN {:s}", cacheOpStr[(CacheOp)io_instrOp]);
      if (io_instrRetire)
        dclog("RETIRE {:s}", cacheOpStr[(CacheOp)io_instrOp]);
    }
  }
  if (state[newMap].writeState != state[oldMap].writeState)
    dclog("WriteState Change: {} -> {}",
          writeStateStr[state[oldMap].writeState],
          writeStateStr[state[newMap].writeState]);

  if (state[oldMap].valid == false && io_hasValid == false)
    return;

  if (io_hasValid == true) {
    if (!reqIsSame()) {
      auto cacheStr = io_isUncache ? "UnCache" : "Cache";
      auto cancelStr = io_cancel ? " CANCELED" : "";
      auto hitInfo = io_isUncache ? ""
                     : io_isHit
                         ? fmt::format("hitWay: {:d}", (uint8_t)io_hitWays)
                         : "notHit";
      if (state[newMap].isWrite) {
        dclog("{:s} WRITE{:s} addr: " HEX_WORD ", data: " HEX_WORD ", {:s}",
              cacheStr, cancelStr, state[newMap].reqAddr,
              state[newMap].writeData, hitInfo);
      } else {
        auto retData =
            io_isHit && !io_isUncache
                ? fmt::format(", retData: " HEX_WORD, (word_t)io_retData)
                : "";
        dclog("{:s} READ{:s} addr: " HEX_WORD ", {:s}{:s}", cacheStr, cancelStr,
              state[newMap].reqAddr, hitInfo, retData);
      }
    }
  }
  if (io_hasValid == false && state[oldMap].valid == true) {
    if (io_mainState != run)
      dclog("FLUSHED when main is {:s}, write is {:s}",
            mainStateStr[state[newMap].mainState],
            writeStateStr[state[newMap].writeState]);
  }
}