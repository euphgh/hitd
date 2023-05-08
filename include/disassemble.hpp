#ifndef __DISASSEMBLE_HPP__
#define __DISASSEMBLE_HPP__
#include <common.hpp>
#include <string>
using std::string;
const string &llvm_disassemble(word_t pc, word_t inst);
void llvm_disasm_init();
#endif // !__DISASSEMBLE_HPP
