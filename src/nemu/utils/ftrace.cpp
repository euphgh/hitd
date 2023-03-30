#include "nemu/mytrace.hpp"
#include "fmt/core.h"
#include <csignal>
void ftracer::push(word_t call_at, word_t call_to){
    std::map<word_t, std::tuple<word_t, std::string>>::iterator
        it = start_addr_map.upper_bound(call_to);
    IFDEF(CONFIG_FTRACE, 
            log_pt->trace(fmt::format("[F] {1: >{0}}call {2} -> {3}",
                fstack.size()*2,"", search(call_at), std::get<1>(it->second))));
    fstack.push(std::pair(call_at, it));
}
bool ftracer::pop(word_t ret_at, word_t ret_to){
    addr_pair top = fstack.top();
    word_t call_at = top.first;
    IFDEF(CONFIG_FTRACE, 
            log_pt->trace(fmt::format("[F] {1: >{0}}ret  {2} -> {3}",
                    (fstack.size()-1)*2,"", search(ret_at), search(ret_to))));
    if (fstack.empty()){
        log_pt->warn("function stack not match");
        raise(SIGTRAP);
        nemu_state.state=NEMU_STOP;
        return false;
    }
    fstack.pop();
    return ret_to==call_at+8;
}
std::string ftracer::call_stack_info(){
    auto copy = fstack;
    std::stringstream buf("function call stack has ");
    buf << copy.size() << " levels\n";
    int level = 0;
    while (!copy.empty()) {
        auto elemrnt = copy.top();
        word_t begin = std::get<0>(elemrnt.second->second);
        const char* func_name = begin < elemrnt.first ? 
            std::get<1>(elemrnt.second->second).c_str() : "unknow";
        copy.pop();
        buf << fmt::format("#{:04d}" HEX_WORD "in {}\n", 
                level, elemrnt.first, func_name);
    }
    return buf.str();
}
ftracer::ftracer(std::string elf_name, el::Logger* input_logger):
    log_pt(input_logger){/*{{{*/
        std::vector<std::tuple<word_t, word_t, std::string>> func_list;
        load_elf_info(elf_name.c_str(), func_list);
        for (auto tup : func_list) {
            word_t len   = std::get<1>(tup);
            if (len){
                word_t start = std::get<0>(tup);
                std::string name = std::get<2>(tup);
                start_addr_map.insert(std::make_pair(start+len, std::make_tuple(start, name)));
            }
        }
}/*}}}*/

const std::string& ftracer::search(word_t addr){/*{{{*/
    auto it = start_addr_map.upper_bound(addr);
    word_t start = std::get<0>(it->second);
    if (it!=start_addr_map.end() && start <= addr)
        return std::get<1>(it->second);
    else
        return unknow;
}/*}}}*/
