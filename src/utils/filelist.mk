DIRS-y += src/utils/log
SRCS-y += src/utils/disasm.cpp
SRCS-y += src/utils/parse_args.cpp
LLVM_FLAGS += $(shell llvm-config --cxxflags)
LLVM_LIBS += $(shell llvm-config --libs)
