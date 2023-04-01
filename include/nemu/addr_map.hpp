#include <string>
#include <array>
#include "common.hpp"
#define ADDR2LINE "mipsel-linux-gnu-addr2line"
class addr_map {
    std::string elf_file;
    std::string s;
    std::array<char, 128> buffer;
    public:
    addr_map(std::string _elf_name): elf_file(_elf_name) {}
    bool code_is(word_t addr, std::string& res);
    bool code_at(word_t addr, std::string& file, uint32_t& line);
    bool func_at(word_t addr, std::string& res);
    private:
    bool exec(const std::string& cmd);
};
