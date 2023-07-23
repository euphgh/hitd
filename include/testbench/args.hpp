#ifndef __TESTBENCH_ARGS_HH__
#define __TESTBENCH_ARGS_HH__
#include "common.hpp"
#include <string>
extern const char *arg_log_file;
extern bool arg_batch_mode;
extern std::string arg_ssDirStr;
extern bool arg_useSnapShot;
extern uint64_t arg_wave_on_tick;
void parse_args(int argc, char *argv[]);
#endif