#include "common.hpp"
#include "disassemble.hpp"
#include "easylogging++.h"
#include "fmt/core.h"
#include "nemu/isa.hpp"
#include "soc.hpp"
#include <csignal>
bool g_si_print = false;
extern uint64_t ticks;
void compare_exec(uint64_t n) {
  extern std::unique_ptr<SoC_t> soc;
  uint64_t snapshotTick = CONFIG_SNAPSHOT_TICK;
  const SoC_t *soc_ptr = soc.get();
  auto tickAdd = [&soc_ptr, &snapshotTick]() {
    ticks++;
    if (unlikely(snapshotTick == ticks)) {
      if (nemu->next_is_delay_slot) {
        snapshotTick += 2;
      } else {
        string mkSnapShotDir(const string &parentFolder);
        auto pdir = mkSnapShotDir(HITD_HOME "/snapshot");
        nemu->saveSnapShot(pdir + "/nemu.properties");
        soc_ptr->saveSnapShot(pdir);
      }
    }
#ifdef CONFIG_TRUNCATE_MANUAL
    extern void disableLogger(el::Logger * logger);
    extern void enableLogger(el::Logger * logger);
    if (unlikely(ticks == CONFIG_TRACE_START_TICK)) {
      enableLogger(nemu->log_pt);
    }
    if (unlikely(ticks == CONFIG_TRACE_END_TICK)) {
      disableLogger(nemu->log_pt);
    }
#endif
  };
  for (; n > 0; n--) {
    // TIMED_SCOPE(exec_once, "compare exec once");
    tickAdd();
    soc->tick();
    nemu->ref_tick_and_int(
        soc->MUXDEF(CONFIG_DIFFTEST, dut_ext_int(), ext_int()));
    nemu->exec_once();
    if (g_si_print)
      fmt::print(
          HEX_WORD ":\t{}\n", nemu->arch_state.pc,
          llvm_disassemble(nemu->arch_state.pc,
                           nemu->isa_vaddr_read(nemu->arch_state.pc, 4)));
    if (nemu_state.state != NEMU_RUNNING)
      break;
  }
}

bool cpu_exec(uint64_t n) {
  switch (nemu_state.state) {
  case NEMU_END:
  case NEMU_ABORT:
    printf("Program execution has ended. To restart the program, exit NEMU and "
           "run again.\n");
    return false;
  default:
    nemu_state.state = NEMU_RUNNING;
  }

  compare_exec(n);

  switch (nemu_state.state) {
  case NEMU_ABORT:
    nemu->log_pt->error(
        "nemu abort when execute %v",
        llvm_disassemble(nemu->inst_state.pc, nemu->inst_state.inst));
    raise(SIGTRAP);
  case NEMU_STOP:
    break;
  case NEMU_END:
    nemu->log_pt->info("nemu run to end pc");
    break;
  case NEMU_QUIT:
    nemu->log_pt->error("nemu finish cpu-exec with unexpected state quit");
    break;
  }
  return nemu_state.state == NEMU_RUNNING;
}
