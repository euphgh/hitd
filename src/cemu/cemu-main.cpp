#include "paddr/nemu_paddr.hpp"
#include "cemu/mips_core.hpp"
#include "soc.hpp"
INITIALIZE_EASYLOGGINGPP
uint64_t ticks = 0;
word_t log_pc = 0xbfc00000;
bool cemu_run = true;
el::Logger* cemu_log = nullptr;

extern int arg_img_code;
extern void parse_args(int argc, char *argv[]);
int main (int argc, char *argv[]) {
    parse_args(argc, argv);

    extern el::Logger* logger_init(std::string name);
    cemu_log = logger_init("CHemu");

    single_soc soc;
    PaddrTop * cemu_paddr_top = soc.get_single_soc();
    cemu_paddr_top->set_logger(cemu_log);

    mips_core cemu(cemu_paddr_top);
    std::signal(SIGINT, [](int) {cemu_run = false;});
    cemu.reset();
    cemu.jump(CONFIG_RESET_PC);
    while (cemu_run) {
        ticks++;
        cemu.step(soc.ext_int());
        log_pc = cemu.get_pc();
        // printf(FMT_WORD "\n", log_pc);
        if (cemu_run==false) {
            printf(FMT_WORD "\n", log_pc);
            break;
        }
        soc.tick();
    }
    return 0;
}
