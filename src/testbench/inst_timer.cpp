#include "testbench/inst_timer.hpp"
#include <cstdint>
#include <memory>
#include <fstream>
#include <tuple>

inst_timer::inst_timer(AddrIntv _range): 
    mask(_range.mask),
    item_nr((mask+1)>>2),
    data(std::make_unique<inst_info[]>(item_nr)) { }

void inst_timer::add_inst(Decode& inst_state, consume_t consumed_time, uint64_t ticks){/*{{{*/
    inst_info& info = data[pc2index(inst_state.pc)];
    ++info.runtime;
    info.consume += consumed_time;
    info.verbose.push_back(std::make_tuple(ticks, consumed_time));
    if (inst_state.is_delay_slot){
        data[pc2index(inst_state.dnpc)].is_enter = true;
        data[pc2index(inst_state.snpc)].is_enter = true;
    }
}/*}}}*/

bool inst_timer::save_date(std::string filename){/*{{{*/
        std::fstream outfile;
        outfile.open(filename, std::fstream::out|std::fstream::trunc|std::fstream::binary);
        bool res = outfile.is_open();
        if (!res) LOG(ERROR) << "inst_timer fail to write " << filename;
        else {
            for (iindex_t index=0; index<=item_nr; index++) {
                inst_info& it = data[index];
                if (it.runtime){
                    word_t pc = index2pc(index);
                    outfile.write((char*)&pc, sizeof(word_t));
                    outfile.write((char*)&(it.is_enter), sizeof(bool));
                    outfile.write((char*)&(it.runtime), sizeof(runtime_t));
                    // outfile << std::hex << index2pc(index)  << std::dec << "\t";
                    // outfile << it.is_enter << "\t";
                    // outfile << it.runtime << "\t";
                    // outfile << "[";
                    for (auto it: it.verbose) {
                        consume_t consume = std::get<1>(it)/2;
                        outfile.write((char*)&(std::get<0>(it)), sizeof(uint32_t));
                        outfile.write((char*)&(consume), sizeof(consume_t));
                        // outfile << "(" << std::get<0>(it) << ",";
                        // outfile << std::get<1>(it) << ")";
                    }
                    // outfile << "]\n";
                }
            }
            outfile.close();
        }
        return res;
}    /*}}}*/
