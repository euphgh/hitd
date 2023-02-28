#include "common.hpp"
#include <cstdio>
#include <getopt.h>
#include <map>
#include <string>
#include "testbench/sim_state.hpp"

static std::map<std::string, int> img_str_to_code{
    std::make_pair("func", TEST_NAME_FUNC),
    std::make_pair("perf", TEST_NAME_PERF),
};
const char* arg_log_file = "trace.log";
int arg_img_code;
bool arg_batch_mode = false;
static const struct option table[] = {
    {"batch"    , no_argument      , NULL, 'b'},
    {"log"      , required_argument, NULL, 'l'},
    {"test"     , required_argument, NULL, 't'},
    {"help"     , no_argument      , NULL, 'h'},
};
void parse_args(int argc, char *argv[]) {
    int o;
    while ( (o = getopt_long(argc, argv, "bl:i:", table, NULL)) != -1) {
        switch (o) {
            case 'l': 
                arg_log_file = optarg; 
                break;
            case 't': 
                Assert(img_str_to_code.find(std::string(optarg))!=img_str_to_code.end(), "not support test name %s", optarg);
                arg_img_code = img_str_to_code.at(optarg);
                break;
            default:
                printf("Usage: %s [OPTION...] [args]\n\n", argv[0]);
                printf("\t-b,--batch              run with batch mode\n");
                printf("\t-l,--log=FILE           output log to FILE\n");
                printf("\t-i,--img=IMAGE NAME     IMAGE NAME is in set {func, perf}");
                printf("\n");
                exit(0);
        }
    }
}
