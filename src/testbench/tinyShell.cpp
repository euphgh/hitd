#include "common.hpp"
#include "fmt/core.h"
#include "nemu/isa.hpp"
#include "paddr/paddr_interface.hpp"
#include "soc.hpp"
#include "testbench/sim_state.hpp"
#include <cstdlib>
#include <fcntl.h>
#include <functional>
#include <iostream>
#include <readline/history.h>
#include <readline/readline.h>
#include <sstream>
#include <string>
#include <sys/wait.h>
#include <tuple>
#include <unistd.h>
#include <utility>
#include <vector>

using namespace std;
using namespace fmt;

static bool tinyShellEnd = false;
extern vector<tuple<string, function<int(vector<string> &)>, string>>
    built_in_cmds;
dual_soc *tinyShellSoc = nullptr;

static int cmd_q(vector<string> &args) {
  if (sim_status == SIM_INT) {
    auto back =
        readline("Simulation not end, still want quit(input y for quit):");
    if (string(back) == "y") {
      sim_status = SIM_STOP;
      tinyShellEnd = true;
    }
    free(back);
  } else {
    tinyShellEnd = true;
  }
  return 0;
}
static int cmd_help(vector<string> &args) {
  for (auto it : built_in_cmds) {
    print("{:s}\n", get<2>(it));
  }
  return 0;
}
static int cmd_c(vector<string> &args) {
  if (sim_status != SIM_INT)
    print("simulation finish, can not continue");
  else {
    sim_status = SIM_RUN;
    tinyShellEnd = true;
  }
  return 0;
}

static int cmd_ss(vector<string> &args) {
  if (nemu->next_is_delay_slot) {
    print("snapshot can not save, because next instruction is delay slot");
  } else {
    extern string mkSnapShotDir(const string &parentFolder);
    auto pdir = mkSnapShotDir(HITD_HOME "/snapshot");
    nemu->saveSnapShot(pdir + "/nemu.properties");
    tinyShellSoc->saveSnapShot(pdir);
    print("snapshot {:s} saved\n", pdir);
  }
  return 0;
}

// 内置命令
vector<tuple<string, function<int(vector<string> &)>, string>> built_in_cmds = {
    make_tuple("q", cmd_q, "Quit TinyShell by `q`"),
    make_tuple("help", cmd_help, "Print help by `help`"),
    make_tuple("c", cmd_c, "Continue simulate by `c`"),
    make_tuple("ss", cmd_ss, "Save snapshot by `ss`"),
};

// 执行命令
static void exec_cmd(vector<string> &cmd_tokens) {
  // 获取命令和参数
  char **args = new char *[cmd_tokens.size() + 1];
  for (int i = 0; i < cmd_tokens.size(); i++) {
    args[i] = strdup(cmd_tokens[i].c_str());
  }
  args[cmd_tokens.size()] = nullptr;

  // 如果命令在内置命令字典中，则执行内置命令
  for (auto it : built_in_cmds) {
    if (get<0>(it) == cmd_tokens[0]) {
      get<1>(it)(cmd_tokens);
      return;
    }
  }
  print("not find command `{:s}`\n", cmd_tokens[0]);
}

// 解析输入的命令行
static void parse_cmd(const string &cmd_str) {
  // 分割命令行
  vector<string> tokens;
  istringstream iss(cmd_str);
  string token;
  while (iss >> token) {
    tokens.push_back(token);
  }

  // 执行单个命令
  exec_cmd(tokens);
}

void tinyShell() {
  nemu->isa_reg_display("logs/Nemu-State.txt");
  extern uint64_t ticks;
  print("now tick is {:d}, print `help` for more\n", ticks);

  if (sim_status == SIM_END)
    return;
  tinyShellEnd = false;
  char *line;
  while ((line = readline(">>> ")) != nullptr) {
    if (strlen(line) > 0) {
      add_history(line);
      parse_cmd(line);
    }
    free(line);
    if (tinyShellEnd)
      break;
  }
}

static uint64_t execInstrNum0 = 0, execInstrNum1 = 0;
static string lastSSname0 = "", lastSSname1 = "";
void checkSnapShop(uint64_t currInstrNum) {
  if (unlikely(currInstrNum - execInstrNum0 >
               900000)) { // 900000 is about 1 mins
    extern string mkSnapShotDir(const string &parentFolder);
    auto pdir = mkSnapShotDir(HITD_HOME "/snapshot");
    nemu->saveSnapShot(pdir + "/nemu.properties");
    tinyShellSoc->saveSnapShot(pdir);

    extern void rmr(std::string dir);
    rmr(lastSSname1);
    lastSSname1 = std::move(lastSSname0);
    execInstrNum1 = execInstrNum0;

    lastSSname0 = std::move(pdir);
    execInstrNum0 = currInstrNum;
  }
}