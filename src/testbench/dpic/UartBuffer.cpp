#include "common.hpp"
#include "testbench/difftest/api.hpp"
#include "testbench/difftest/global_info.hpp"
#include "testbench/sim_state.hpp"
#include "verilated_dpi.h"
#include <fmt/core.h>

using namespace std;
using namespace fmt;

#define dulog(str, ...) mycpu_log->trace(fmt::format("[U] " str, ##__VA_ARGS__))
#define duError(str, ...) mycpu_log->error(fmt::format(str, ##__VA_ARGS__))

#ifdef CONFIG_UTRACE
static uint32_t inNum = 0;
static uint32_t outNum = 0;
void difftestResetUartStats() {
  inNum = 0;
  outNum = 0;
}
extern "C" void v_difftest_UartBuffer(char io_curGroup, char io_curFew,
                                      svBit io_enqFire, char io_enqChar,
                                      char io_state, svBit io_awFire,
                                      svBit io_wFire, char io_wChar,
                                      char io_awLen, svBit io_deqValid) {
  uint32_t queueNum = io_deqValid ? (io_curGroup * 16) + io_curFew : 0;
  if (inNum != outNum + queueNum) {
    duError("inNum {:d} != outNum {:d} + queueNum {:d} = fCnt {:d} +  gCnt "
            "{:d} * 16",
            inNum, outNum, queueNum, io_curFew, io_curGroup);
    sim_status = SIM_ABORT;
  }
  if (io_enqFire) {
    inNum++;
    dulog("enq {:c}, {:d}", io_enqChar, inNum);
  }
  if (io_wFire) {
    dulog("put \"{:c}\" ", io_wChar);
  }
  if (io_awFire) {
    dulog("deq {:d} chars, {:d}", io_awLen + 1, outNum);
    outNum += io_awLen + 1;
  }
}
#else
void dpic_UartBuffer_init() {}
extern "C" void v_difftest_UartBuffer(char io_curGroup, char io_curFew,
                                      svBit io_enqFire, char io_enqChar,
                                      char io_state, svBit io_awFire,
                                      svBit io_wFire, char io_wChar,
                                      char io_awLen, svBit io_deqValid) {}
#endif
#undef dulog
#undef duError