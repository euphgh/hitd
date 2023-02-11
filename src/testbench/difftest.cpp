#include <string>
#include "Vmycpu_top__Dpi.h"
#include "testbench/difftest/api.hpp"
#include "testbench/dpic.hpp"

bool difftest_check(diff_state *cpu, diff_state *ref_r){
    bool ans = ref_r->pc==cpu->pc;
    for (uint8_t i = 0; i < 32; i++) {
        ans &= (ref_r->gpr[i]==cpu->gpr[i]);
    }
    return ans;
}
void difftest_show_error(diff_state *cpu, diff_state *ref_r){
#define FMT_REG  "%-8s" FMT_WORD "%20d\n"
    Log("Difftest FAIL for " ANSI_FMT("reference",ANSI_FG_GREEN) " is different from " ANSI_FMT("nemu",ANSI_FG_RED));
    for (size_t i = 0; i < ARRLEN(ref_r->gpr); i++) {
        bool error = ref_r->gpr[i]!=cpu->gpr[i];
        const char *my_fmt = error ? ANSI_FMT(FMT_REG, ANSI_FG_RED) : FMT_REG;
        printf(my_fmt,std::to_string(i).c_str(),cpu->gpr[i],cpu->gpr[i]);
        if (error) printf(ANSI_FMT(FMT_REG, ANSI_FG_GREEN),
            std::to_string(i).c_str(),ref_r->gpr[i],ref_r->gpr[i]);
    }
    bool error = ref_r->pc!=cpu->pc;
    const char *my_fmt = error ? ANSI_FMT(FMT_REG, ANSI_FG_RED) : FMT_REG;
    printf(my_fmt,"pc",cpu->pc,cpu->pc);
    if (error) printf(ANSI_FMT(FMT_REG, ANSI_FG_GREEN),
            "pc",ref_r->pc,ref_r->pc);
}

void dut_get_state(diff_state *mycpu){
    for (uint8_t i = 0; i < 32; i++) {
        mycpu->gpr[i] = dpi_regfile(i);
    }
    mycpu->pc = dpi_retirePC();
}
