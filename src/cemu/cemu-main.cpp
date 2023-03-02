#include "paddr/nemu_paddr.hpp"
#include "cemu/mips_core.hpp"
#include "soc.hpp"
INITIALIZE_EASYLOGGINGPP
uint64_t ticks = 0;
word_t log_pc = 0xbfc00000;
bool cemu_run = true;
el::Logger* cemu_log = nullptr;
int main (int argc, char *argv[]) {
    basic_soc soc(basic_soc::BIN_PERF);
    extern el::Logger* logger_init(std::string name);
    cemu_log = logger_init("CHemu");
    PaddrTop * cemu_paddr_top = soc.get_paddr(basic_soc::SOC_NOR);
    cemu_paddr_top->set_logger(cemu_log);
    soc.set_switch(3);

    mips_core cemu(cemu_paddr_top);
    std::signal(SIGINT, [](int) {cemu_run = false;});
    while (cemu_run) {
        ticks++;
        cemu.step();
        log_pc = cemu.get_pc();
        if (log_pc==0xbfc00100){
            cemu_log->info("run to end pc");
            cemu_run =false;
        }
    }
    return 0;
}
