#include "common.hpp"
#include "fmt/core.h"
#include "nemu/isa.hpp"
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
int exec_cmd(vector<string> &cmd_tokens) {
  // 获取命令和参数
  char **args = new char *[cmd_tokens.size() + 1];
  for (int i = 0; i < cmd_tokens.size(); i++) {
    args[i] = strdup(cmd_tokens[i].c_str());
  }
  args[cmd_tokens.size()] = nullptr;

  // 如果命令在内置命令字典中，则执行内置命令
  for (auto it : built_in_cmds) {
    if (get<0>(it) == cmd_tokens[0]) {
      return get<1>(it)(cmd_tokens);
    }
  }

  // 否则，调用外部命令
  pid_t pid = fork();
  if (pid == 0) {
    execvp(args[0], args);
    cerr << "execvp failed: " << strerror(errno) << endl;
    exit(EXIT_FAILURE);
  } else if (pid < 0) {
    cerr << "fork failed: " << strerror(errno) << endl;
    return -1;
  } else {
    int status;
    waitpid(pid, &status, 0);
    delete[] args;
    return WEXITSTATUS(status);
  }
}

// 解析输入的命令行
void parse_cmd(const string &cmd_str) {
  // 分割命令行
  vector<string> tokens;
  istringstream iss(cmd_str);
  string token;
  while (iss >> token) {
    tokens.push_back(token);
  }

  // 检查管道符号和重定向符号
  auto pipe_it = find(tokens.begin(), tokens.end(), "|");
  auto redirect_it =
      find_if(tokens.begin(), tokens.end(), [](const string &token) {
        return token == ">" || token == ">>";
      });

  // 如果存在管道符号
  if (pipe_it != tokens.end()) {
    // 获取第一个命令和第二个命令
    vector<string> cmd1(tokens.begin(), pipe_it);
    vector<string> cmd2(pipe_it + 1, tokens.end());

    // 创建管道
    int pipefd[2];
    if (pipe(pipefd) == -1) {
      cerr << "pipe failed: " << strerror(errno) << endl;
      return;
    }

    // 创建子进程并执行第一个命令
    pid_t pid1 = fork();
    if (pid1 == 0) {
      close(pipefd[0]);
      dup2(pipefd[1], STDOUT_FILENO);
      close(pipefd[1]);
      exit(exec_cmd(cmd1));
    } else if (pid1 < 0) {
      cerr << "fork failed: " << strerror(errno) << endl;
      return;
    }

    // 创建子进程并执行第二个命令
    pid_t pid2 = fork();
    if (pid2 == 0) {
      close(pipefd[1]);
      dup2(pipefd[0], STDIN_FILENO);
      close(pipefd[0]);
      exit(exec_cmd(cmd2));
    } else if (pid2 < 0) {
      cerr << "fork failed: " << strerror(errno) << endl;
      return;
    }

    // 等待子进程完成
    close(pipefd[0]);
    close(pipefd[1]);
    int status2;
    waitpid(pid1, &status2, 0);
    waitpid(pid2, &status2, 0);
    if (WIFEXITED(status2)) {
      return;
    } else {
      exit(EXIT_FAILURE);
    }

    // 如果存在重定向符号
  } else if (redirect_it != tokens.end()) {
    // 获取命令和文件名
    vector<string> cmd(tokens.begin(), redirect_it);
    string filename(*(redirect_it + 1));

    // 打开文件
    int fd;
    if (*(redirect_it) == ">") {
      fd = open(filename.c_str(), O_WRONLY | O_CREAT | O_TRUNC, 0644);
    } else {
      fd = open(filename.c_str(), O_WRONLY | O_CREAT | O_APPEND, 0644);
    }
    if (fd == -1) {
      cerr << "open failed: " << strerror(errno) << endl;
      return;
    }

    // 将输出重定向到文件
    pid_t pid = fork();
    if (pid == 0) {
      dup2(fd, STDOUT_FILENO);
      close(fd);
      exit(exec_cmd(cmd));
    } else if (pid < 0) {
      cerr << "fork failed: " << strerror(errno) << endl;
      return;
    } else {
      int status;
      waitpid(pid, &status, 0);
      close(fd);
      if (WIFEXITED(status)) {
        return;
      } else {
        exit(EXIT_FAILURE);
      }
    }

    // 否则执行单个命令
  } else {
    exec_cmd(tokens);
  }
}

void tinyShell() {
  tinyShellEnd = false;
  // 读取输入并解析命令
  extern uint64_t ticks;
  print("\nCPU State:\n");
  nemu->isa_reg_display();
  print("now tick is {:d}, print `help` for more\n", ticks);
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
