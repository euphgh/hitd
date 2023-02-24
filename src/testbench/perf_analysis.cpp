#include <fstream>
#include <memory>
#include "easylogging++.h"
#include "testbench/inst_timer.hpp"
inst_timer::inst_timer(AddrIntv inst_range): 
    total_size((inst_range.mask+1)>>2),
    mask(inst_range.mask),
    prefix(inst_range.start),
    time_barrel(std::make_unique<std::pair<word_t, consume_t>[]>(total_size)) {
        for (int i=0; i<= total_size; i++) {
            time_barrel[i].second = 0;
            time_barrel[i].first = 0;
        }
    }

inst_timer::~inst_timer(){
    time_barrel.release();
}
void inst_timer::add_inst(word_t pc, consume_t consumed_time){
    int index = (pc&mask) >> 2;
    std::pair<word_t,consume_t>& element = time_barrel[index];
    ++element.first;
    element.second += consumed_time;
}
bool inst_timer::save_date(std::string filename){
    std::fstream outfile;
    outfile.open(filename, std::ios_base::out|std::ios_base::trunc);
    bool res = outfile.is_open();
    if (res){
        for (int i = 0; i < total_size; i++) {
            std::pair<word_t, consume_t>& element = time_barrel[i];
            if (element.first)
                outfile << std::hex << (prefix|(i<<2)) << "\t" << std::oct << element.first << "\t" << element.second/2 << "\n";
        }
        outfile.flush();
        outfile.close();
    }
    else 
        LOG(ERROR) << "fail to open "<< filename << "to write perf timer";
    return res;
}
