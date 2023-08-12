#include "Vmycpu_top.h"
#include "easylogging++.h"
#include "generated/autoconf.h"
#include "nemu/isa.hpp"
#include "paddr/paddr_interface.hpp"
#include "soc.hpp"
#include "testbench/args.hpp"
#include "testbench/axi.hpp"
#include "testbench/difftest/api.hpp"
#include "testbench/difftest/global_info.hpp"
#include "testbench/difftest/struct.hpp"
#include "testbench/inst_timer.hpp"
#include "testbench/sim_state.hpp"
#include <csignal>
#include <fmt/core.h>

#define wave_file_t MUXDEF(CONFIG_EXT_FST, VerilatedFstC, VerilatedVcdC)
#define __WAVE_INC__                                                           \
  MUXDEF(CONFIG_EXT_FST, "verilated_fst_c.h", "verilated_vcd_c.h")
#ifdef CONFIG_WAVE_ON
#include __WAVE_INC__
#endif

extern uint64_t ticks;
extern uint64_t total_times;
extern el::Logger *mycpu_log;
extern FILE *golden_trace;
diff_state *dut_ptr;
#define RST_TIME 32
void disableLogger(el::Logger *logger);
void enableLogger(el::Logger *logger);

inline static void sim_ending(int nemu_end_state) { /*{{{*/
  switch (nemu_end_state) {
  case NEMU_END:
    sim_status = SIM_END;
    break;
  case NEMU_ABORT:
    sim_status = SIM_NEMU_QUIT;
    break;
  default:
    __ASSERT_SIM__(0, "unexpected nemu quit state {}", nemu_end_state);
    break;
  }
} /*}}}*/
static bool sim_end_statistics(dual_soc &soc, string waveName) { /*{{{*/
  bool res = false;
  switch (sim_status) {
  case SIM_ABORT:
    mycpu_log->info("mycpu has error and quit");
    break;
  case SIM_END:
    mycpu_log->info("mycpu pass test");
    difftestBrJmpStats("MyCPUBrJmpStats" + waveName + ".txt");
    difftestBCacheStats();
    nemu->lhts.show("NemuBrStats" + waveName + ".txt");
    nemu->isa_reg_display("logs/Nemu-State.txt");
    res = true;
    break;
  case SIM_NEMU_QUIT:
    mycpu_log->info("mycpu stop test for nemu abnormal exit");
    break;
  default:
    mycpu_log->info("mycpu quit with not defined state %v", sim_status);
    break;
  }
  return res;
} /*}}}*/

static void check_cpu_state(diff_state *mycpu) { /*{{{*/
  bool res = nemu->ref_checkregs(mycpu);
  if (!res) {
    __ASSERT_SIM__(0, "MyCPU execution\t{} error !!!", nemu->isa_disasm_inst());
    nemu->ref_log_error(mycpu);
  }
} /*}}}*/

#ifdef CONFIG_CP0_DIFF
static void inline checkCP0(const CP0_t &dut) {
  if (nemu->cp0.check(&dut) == false) {
    nemu->cp0.log_error(dut);
    __ASSERT_SIM__(false, "CP0 not match");
  }
}
#endif

extern void tinyShell();
extern dual_soc *tinyShellSoc;

extern uint64_t arg_wave_on_tick;
bool mainloop(Vmycpu_top *top, axi_paddr *axi, std::string wave_name,
              dual_soc &soc) { /*{{{*/
  uint64_t snapshotTick = CONFIG_SNAPSHOT_TICK;
  tinyShellSoc = &soc;
  auto tickAdd = [&soc, &snapshotTick]() {
    ticks++;
    if (unlikely(snapshotTick == ticks)) {
      if (nemu->next_is_delay_slot) {
        snapshotTick += 2;
      } else {
        string mkSnapShotDir(const string &parentFolder);
        auto pdir = mkSnapShotDir(HITD_HOME "/snapshot");
        nemu->saveSnapShot(pdir + "/nemu.properties");
        soc.saveSnapShot(pdir);
      }
    }
#ifdef CONFIG_TRUNCATE_MANUAL
    if (unlikely(ticks == CONFIG_TRACE_START_TICK)) {
      enableLogger(mycpu_log);
      enableLogger(nemu->log_pt);
    }
    if (unlikely(ticks == CONFIG_TRACE_END_TICK)) {
      disableLogger(mycpu_log);
      disableLogger(nemu->log_pt);
    }
#endif
  };

  sim_status = SIM_RUN;
  IFDEF(CONFIG_WAVE_TAIL_ENABLE, uint64_t wave_on_tick = arg_wave_on_tick);

  /* close log when manual truncate */
  IFDEF(CONFIG_TRUNCATE_MANUAL, disableLogger(mycpu_log));
  IFDEF(CONFIG_TRUNCATE_MANUAL, disableLogger(nemu->log_pt));

  IFDEF(CONFIG_WAVE_ON, Verilated::traceEverOn(true));
  IFDEF(CONFIG_WAVE_ON, wave_file_t tfp);
  IFDEF(CONFIG_WAVE_ON, top->trace(&tfp, 0));
  IFDEF(CONFIG_WAVE_ON,
        tfp.open(
            (CONFIG_WAVE_DIR "/" + wave_name + "." + CONFIG_WAVE_EXT).c_str()));

  ticks = 0;
  top->aclk = 0;
  top->aresetn = 0;
  IFDEF(CONFIG_COMMIT_WAIT, uint64_t last_commit = ticks);
  IFDEF(CONFIG_PERF_ANALISES,
        inst_timer perf_timer(AddrIntv(0x1fc00000, bit_mask(22))));
  while (ticks < (RST_TIME & ~0x1)) {
    tickAdd();
    axi->reset();
    nemu->reset();
    top->aclk = !top->aclk;
    top->eval();
    IFDEF(CONFIG_WAVE_ON, IFDEF(CONFIG_WAVE_TAIL_ENABLE,
                                if (ticks > wave_on_tick)) tfp.dump(ticks));
    IFDEF(CONFIG_COMMIT_WAIT, last_commit = ticks);
  }

  top->aresetn = 1;
  nemu->lhts.resetStats();
  difftestBrJmpReset();
  difftestResetUartStats();
  while (!randQueue.empty()) {
    randQueue.pop();
  }

    if (arg_ssDirStr != "") {
      nemu->loadSnapShot(arg_ssDirStr);
    }

    while (!Verilated::gotFinish()) {
      /* if need count perf_timer TIMED_SCOPE(one_clk,"one_clk"); */
      /* posedge edge comming {{{*/
    positive_edge:
      tickAdd();
      top->aclk = !top->aclk;

      /* update SoC and nemu clock */
      soc.tick();
      nemu->ref_tick_and_int(0);

      /* update mycpu */
      axi->calculate_output();
      top->eval();
      axi->update_output();

      /* record waveform */
      IFDEF(CONFIG_WAVE_ON, IFDEF(CONFIG_WAVE_TAIL_ENABLE,
                                  if (ticks > wave_on_tick)) tfp.dump(ticks));

      /* get mycpu instructions commit status */
      uint8_t commit_num = dutCommitNum;
      uint8_t mycpu_int = dutIntrSeq;
      word_t tmpDutLPC = dutLastCommitPC;

      /*}}}*/
      /* negtive edge comming {{{*/

      /* clean phy use */
      IFDEF(CONFIG_FREELIST_DIFF, difftest_clean_phySign());

      tickAdd();
      top->aclk = !top->aclk;
      top->eval(); // get retire result
      IFDEF(CONFIG_WAVE_ON, IFDEF(CONFIG_WAVE_TAIL_ENABLE,
                                  if (ticks > wave_on_tick)) tfp.dump(ticks));

      /* count phy use */
      IFDEF(CONFIG_FREELIST_DIFF, difftest_count_phySign());

      /* check mainloop condition */
      IFDEF(CONFIG_COMMIT_WAIT,
            __ASSERT_SIM__(ticks - last_commit < CONFIG_COMMIT_TIME_LIMIT,
                           "{} ticks not commit inst",
                           CONFIG_COMMIT_TIME_LIMIT));
      if (sim_status != SIM_RUN) {
        tinyShell();
        if (sim_status != SIM_RUN)
          break;
      }

      /* assign last commit PC to archState */
      dutArchState.pc = tmpDutLPC;

      /* run nemu and check difference {{{*/
      if (commit_num > 0) {
        for (size_t i = 0; i < commit_num; i++) {
          if (unlikely(!nemu->ref_exec_once(i == mycpu_int))) {
            sim_ending(nemu_state.state);
            goto positive_edge;
          }
          Decode &inst = nemu->inst_state;
          if (inst.skip)
            nemu->arch_state.gpr[inst.wnum] = dutArchState.gpr[inst.wnum];
          IFDEF(CONFIG_PERF_ANALISES,
                if (nemu->analysis) perf_timer.add_inst(
                    nemu->inst_state,
                    ((consume_t)(ticks - last_commit)) / commit_num, ticks));
        }
        check_cpu_state(&dutArchState);
        IFDEF(CONFIG_CP0_DIFF, checkCP0(dutCP0));
        IFDEF(CONFIG_TLB_DIFF, difftestTlbCheck());
        IFDEF(CONFIG_COMMIT_WAIT, last_commit = ticks);
        extern void checkSnapShop(uint64_t currInstrNum);
        IFDEF(CONFIG_SNAPSHOT_AUTO, checkSnapShop(nemu->inst_number));
      } /*}}}*/
    }

    IFDEF(CONFIG_WAVE_ON, tfp.close());
    IFDEF(CONFIG_PERF_ANALISES,
          perf_timer.save_date("logs/perf/" + wave_name + ".bin"));
    return sim_end_statistics(soc, wave_name);
} /*}}}*/