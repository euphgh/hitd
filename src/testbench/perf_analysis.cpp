#include <csignal>
#include <cstdint>
#include <fstream>
#include <map>
#include <memory>
#include <utility>
#include <vector>
#include "common.hpp"
#include "easylogging++.h"
#include "testbench/inst_timer.hpp"
extern uint64_t ticks;
void inst_timer::add_inst(word_t pc, consume_t consumed_time, bool end){
    if (pc==0x9fc0f324 && ticks>=35255) std::raise(SIGTRAP);
    std::shared_ptr<basic_block> block;
    for (auto iter: block_list){
        if (iter->is_block(pc)) {
            block = iter;
            break;
        }
    }
    
    if (!block) {
        block.reset(new basic_block(pc));
        block_list.push_back(block);
    }

    block->add_inst(consumed_time, end);
}
bool inst_timer::save_date(std::string filename){
    std::fstream outfile;
    outfile.open(filename, std::ios_base::out|std::ios_base::trunc);
    bool res = outfile.is_open();
    if (res){
        for (const auto& block: block_list) {
            outfile << std::hex << block->start_pc<<"\n";
            for (auto inst: block->time_barrel) {
                outfile << std::oct << inst.first <<"\t" 
                    << inst.second/2 <<"\t"
                    << inst.now_ticks << "\n";
            }
            outfile<<"\n";
        }
        outfile.flush();
        outfile.close();
    }
    else 
        LOG(ERROR) << "fail to open "<< filename << "to write perf timer";
    return res;
}
void basic_block::add_inst(consume_t consumed_time, bool end){
    if (point<time_barrel.size()){
        time_barrel[point].first++;
        time_barrel[point].second += consumed_time;
        if ((point+1==time_barrel.size()) != end){
            LOG(ERROR) << "block match error";
        }
    }
    else {
        inst_info obj = {
            .first = 1,
            .second = consumed_time,
            .now_ticks = ticks,
        };
        time_barrel.push_back(obj);
    }

    if (end) {
        point = 0;
        match_pc = start_pc;
    }
    else {
        match_pc += 4;
        point++;
    }
}
