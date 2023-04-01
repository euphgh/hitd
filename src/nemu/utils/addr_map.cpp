#include "nemu/addr_map.hpp"
#include <system_error>
#include <memory>
#include "fmt/core.h"
#include <fstream>
bool code_at(word_t addr, std::string& res);
bool func_at(word_t addr, std::string& res);
bool addr_map::code_is(word_t addr, std::string& res){
    std::string src_name;
    uint32_t line;
    bool find = false;
    if (code_at(addr, src_name, line)){
        std::ifstream src_file(src_name);
        if (src_file.is_open()){
            while (line > 0) {
                src_file.getline(buffer.data(), buffer.size());
                line--;
            }
            s = buffer.data();
            find = true;
        }
        else 
            s = fmt::format("not find {}",src_name);
    }
    return find;
}
bool addr_map::code_at(word_t addr, std::string& file, uint32_t& line){
    exec(fmt::format(ADDR2LINE " -e {} {:x}", elf_file, addr));
    bool find = s.find('?') == std::string::npos;
    if (find){
        int sperator = s.find_last_of(':');
        line = atoi(s.substr(sperator+1).c_str());
        file = s.substr(0,sperator);
    }
    return find;
}
bool addr_map::func_at(word_t addr, std::string& res){
    exec(fmt::format( ADDR2LINE " -e {} {:x} -f -i", elf_file, addr));
    bool find = s.find('?') == std::string::npos;
    res = s;
    return find;
}
bool addr_map::exec(const std::string& cmd) {
    std::unique_ptr<FILE, decltype(&pclose)> pipe(popen(cmd.c_str(), "r"), pclose);
    if (!pipe)
        throw std::runtime_error("popen() failed!");
    bool success = std::fgets(buffer.data(), buffer.size(), pipe.get())!=nullptr;
    s = buffer.data();
    s.erase(s.length()-1);
    return success;
}
