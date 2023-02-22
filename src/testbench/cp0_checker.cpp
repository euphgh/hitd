#include "cp0.hpp"
#include <queue>
#include "testbench/dpic.hpp"
#include <memory>
#include "testbench/cp0_checker.hpp"
#include "testbench/sim_state.hpp"
#include "fmt/core.h"
#include "easylogging++.h"

void cp0_checker::check_change(){
    word_t pc;
    if (dpi_is_cp0_change(&pc)){
        pc_when_changed.push(pc);
        saved_cp0.push(std::make_unique<CP0_t>(true));
    }
}
void cp0_checker::check_value(word_t pc, const CP0_t& ref){
    if (pc_when_changed.empty()) return;
    if (pc == pc_when_changed.front()){
        bool res = saved_cp0.front()->check(ref);
        if (res){
            pc_when_changed.pop();
            saved_cp0.pop();
        }
        else {
            std::raise(SIGTRAP);
            __ASSERT_SIM__(0, "CP0 value not correct");
            saved_cp0.front()->log_error(ref);
            pc_when_changed.pop();
            saved_cp0.pop();
        }
    }
}
