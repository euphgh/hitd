#include "common.hpp"
#include "elf/elf++.hh"
#include "dwarf/dwarf++.hh"
#include "isa.hpp"
#include <fmt/core.h>
#include <stack>
class nemu_context : public dwarf::expr_context {
    dwarf::taddr reg (unsigned regnum) override {
        return nemu->arch_state.gpr[regnum];
    }
    dwarf::taddr pc()   { return nemu->inst_state.pc; }
    dwarf::taddr deref_size (dwarf::taddr address, unsigned size) override {
        return nemu->isa_vaddr_read(address, size);
    }
};
class Debugger {
    public:
        Debugger (const std::string& elf_name);
        dwarf::die get_function_from_pc(word_t pc);
        dwarf::line_table::iterator get_line_entry_from_pc(word_t pc);
        void print_src_line(const std::string& file_name, unsigned line);
        void print_src_line_at(word_t pc);
        void print_src_blk_at(word_t pc, unsigned up, unsigned down);
        std::string source_at(word_t pc);
        uint32_t pc_at_func(const std::string& name);
        bool is_same_src(word_t old_pc, word_t new_pc);
        bool is_func_new_line(word_t old_pc, word_t new_pc);
        std::string get_func_name(word_t pc);
        std::tuple<std::string, unsigned> get_local(word_t pc);
        inline void call_func_at(word_t pc) { fstack.push(pc); }
        inline void ret_func_to(word_t pc) { 
            if (fstack.empty()) 
                fmt::print("fstack ret not match to " HEX_WORD "\n", pc);
            else 
                fstack.pop();
        }
        void read_variables(word_t pc) {
            using namespace dwarf;
            auto func = get_function_from_pc(pc);
            for (const auto& die : func) {
                if (die.tag == DW_TAG::variable) {
                    auto loc_val = die[DW_AT::location];

                    //only supports exprlocs for now
                    if (loc_val.get_type() == value::type::exprloc) {
                        nemu_context context;
                        auto result = loc_val.as_exprloc().evaluate(&context);

                        switch (result.location_type) {
                            case expr_result::type::address:
                                {
                                    auto offset_addr = result.value;
                                    auto value = nemu->isa_vaddr_read(offset_addr,4);
                                    std::cout << at_name(die) << " (0x" << std::hex << offset_addr << ") = " << value << std::endl;
                                    break;
                                }

                            case expr_result::type::reg:
                                {
                                    auto value = nemu->arch_state.gpr[result.value];
                                    std::cout << at_name(die) << " (reg " << result.value << ") = " << value << std::endl;
                                    break;
                                }

                            default:
                                std::cout << "Unhandled variable location" <<std::endl;
                        }
                    }
                    else 
                        std::cout << "Unhandled variable location" <<std::endl;
                }
            }
        }
        dwarf::dwarf m_dwarf;
        elf::elf m_elf;
        std::stack<word_t> fstack;
};
bool step_once(bool once);
bool next_once(bool once);
void backtrace();
void step_out();
extern Debugger mips_dwarf;
