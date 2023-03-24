/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <cstdint>
#include <cstdio>
#include <fmt/core.h>
#if defined(__GNUC__) && !defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmaybe-uninitialized"
#endif

#include "llvm/MC/MCAsmInfo.h"
#include "llvm/MC/MCContext.h"
#include "llvm/MC/MCDisassembler/MCDisassembler.h"
#include "llvm/MC/MCInstPrinter.h"
#include "llvm/MC/TargetRegistry.h"
#include "llvm/Support/TargetSelect.h"
#include <csignal>

#if defined(__GNUC__) && !defined(__clang__)
#pragma GCC diagnostic pop
#endif

#if LLVM_VERSION_MAJOR < 11
#error Please use LLVM with major version >= 11
#endif

using namespace llvm;

static llvm::MCDisassembler *gDisassembler = nullptr;
static llvm::MCSubtargetInfo *gSTI = nullptr;
static llvm::MCInstPrinter *gIP = nullptr;

extern void init_disasm(const char *triple) {
  llvm::InitializeAllTargetInfos();
  llvm::InitializeAllTargetMCs();
  llvm::InitializeAllAsmParsers();
  llvm::InitializeAllDisassemblers();

  std::string errstr;
  std::string gTriple(triple);

  llvm::MCInstrInfo *gMII = nullptr;
  llvm::MCRegisterInfo *gMRI = nullptr;
  auto target = llvm::TargetRegistry::lookupTarget(gTriple, errstr);
  if (!target) {
    llvm::errs() << "Can't find target for " << gTriple << ": " << errstr
                 << "\n";
    assert(0);
  }

  MCTargetOptions MCOptions;
  gSTI = target->createMCSubtargetInfo(gTriple, "", "");
  std::string isa = target->getName();
  gMII = target->createMCInstrInfo();
  gMRI = target->createMCRegInfo(gTriple);
  auto AsmInfo = target->createMCAsmInfo(*gMRI, gTriple, MCOptions);
  auto llvmTripleTwine = Twine(triple);
  auto llvmtriple = llvm::Triple(llvmTripleTwine);
  auto Ctx = new llvm::MCContext(llvmtriple, AsmInfo, gMRI, nullptr);
  gDisassembler = target->createMCDisassembler(*gSTI, *Ctx);
  gIP = target->createMCInstPrinter(llvm::Triple(gTriple),
                                    AsmInfo->getAssemblerDialect(), *AsmInfo,
                                    *gMII, *gMRI);
  gIP->setPrintImmHex(true);
  gIP->setUseMarkup(true);
  gIP->setPrintBranchImmAsAddress(true);
}
#include "common.hpp"
extern std::string disassemble(word_t inst_value, word_t pc){
    MCInst inst;
    uint8_t* code = (uint8_t*)&inst_value;
    llvm::ArrayRef<uint8_t> arr(code, 4);
    uint64_t dummy_size = 0;
    gDisassembler->getInstruction(inst, dummy_size, arr, pc, llvm::nulls());
    // raise(SIGTRAP);
    std::string s = fmt::format("{:2x} {:2x} {:2x} {:2x}", code[0], code[1],code[2],code[3]);
    raw_string_ostream os(s);
    gIP->printInst(&inst, pc, "", *gSTI, os);
    return s;
}
