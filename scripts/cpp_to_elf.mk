CC  := $(call remove_quote,$(CONFIG_CC))

# test ccache exist
CCACHE := $(if $(shell which ccache),ccache,)
ifneq ($(CCACHE),)
# enable ccache for verilator
export OBJCACHE = ccache
endif

# add ccache for c and cpp compiler
CC  := $(if $(CONFIG_CCACHE_ENABLE), ccache $(CC), $(CC))
CXX := $(if $(CONFIG_CCACHE_ENABLE), ccache $(CXX), $(CXX)) 
COM_FLAG := -MMD -Wall -Werror -std=gnu++17 -I$(HITD_HOME)/include
COM_FLAG += -DNSCSCC_HOME=\"$(NSCSCC_HOME)\" -DHITD_HOME=\"$(HITD_HOME)\" 
CFLAGS_BUILD += $(if $(CONFIG_CC_DEBUG),,$(call remove_quote,$(CONFIG_CC_OPT)))
CFLAGS_BUILD += $(if $(CONFIG_CC_LTO),-flto,)
CFLAGS_BUILD += $(if $(CONFIG_CC_DEBUG),-Og -ggdb3,)
CFLAGS_BUILD += $(if $(CONFIG_CC_ASAN),-fsanitize=address,)
NAME = Vmycpu_top
WORK_DIR  := $(HITD_HOME)
BUILD_DIR := $(WORK_DIR)/build
OBJ_DIR  := $(BUILD_DIR)/obj-$(NAME)

# NEMU compile rule{{{
ifdef CONFIG_NEED_NEMU
# Include all filelist.mk to merge file lists
FILELIST_MK = $(shell find ./src/nemu -name "filelist.mk")
include $(FILELIST_MK)

# Filter out directories and files in blacklist to obtain the final set of source files
DIRS-BLACKLIST-y += $(DIRS-BLACKLIST)
SRCS-BLACKLIST-y += $(SRCS-BLACKLIST) $(shell find $(DIRS-BLACKLIST-y) -name "*.cpp")
SRCS-y += $(shell find $(DIRS-y) -name "*.cpp")
NEMU_SRCS := $(filter-out $(SRCS-BLACKLIST-y),$(SRCS-y))
NEMU_SRCS := $(filter-out $(if $(CONFIG_NSC_NEMU),,src/nemu/nemu-main.cpp), $(NEMU_SRCS))

# Extract compiler and options from menuconfig
NEMU_INCLUDES = $(addprefix -I, $(NEMU_INC_PATH))
NEMU_CFLAGS  := $(CFLAGS_BUILD) -D__GUEST_ISA__=$(GUEST_ISA) $(CXXFLAGS)
NEMU_CFLAGS  := $(COM_FLAG) $(NEMU_INCLUDES) $(NEMU_CFLAGS)
NEMU_OBJS = $(NEMU_SRCS:%.cpp=$(OBJ_DIR)/%.o)
$(NEMU_OBJS): $(OBJ_DIR)/%.o: %.cpp
	@echo + CXX $<
	@mkdir -p $(dir $@)
	@$(CXX) $(NEMU_CFLAGS) -c -o $@ $<
	$(call call_fixdep, $(@:.o=.d), $@)
ifdef CONFIG_NSC_NEMU
ELFIN_AR += tools/libelfin/elf/libelf++.a
ELFIN_AR += tools/libelfin/dwarf/libdwarf++.a
# OBJ_ALL  += tools/libelfin/elf/test.a
$(ELFIN_AR):
	make -C tools/libelfin
endif
OBJ_ALL += $(NEMU_OBJS)
endif
# }}}

# CEMU compile rule{{{
ifdef CONFIG_NEED_CEMU
CEMU_SRCS     	:= $(shell find src/cemu -name "*.cpp")
CEMU_SRCS 		:= $(filter-out $(if $(CONFIG_NSC_CEMU),,src/cemu/cemu-main.cpp), $(CEMU_SRCS))
CEMU_CFLAGS   	+= $(COM_FLAG) $(CFLAGS_BUILD)
CEMU_OBJS = $(CEMU_SRCS:%.cpp=$(OBJ_DIR)/%.o)
$(CEMU_OBJS): $(OBJ_DIR)/%.o: %.cpp
	@echo + CXX $<
	@mkdir -p $(dir $@)
	@$(CXX) $(CEMU_CFLAGS) -c -o $@ $<
	$(call call_fixdep, $(@:.o=.d), $@)
OBJ_ALL += $(CEMU_OBJS)
endif
# }}}

#SOC compile rule{{{
SOC_SRCS    = $(shell find src/device src/soc.cpp -type f -name "*.cpp")
SOC_CFLAGS  += $(COM_FLAG) $(CFLAGS_BUILD)
SOC_OBJS = $(SOC_SRCS:%.cpp=$(OBJ_DIR)/%.o)
$(SOC_OBJS): $(OBJ_DIR)/%.o: %.cpp
	@echo + CXX $<
	@mkdir -p $(dir $@)
	@$(CXX) $(SOC_CFLAGS) -c -o $@ $<
	$(call call_fixdep, $(@:.o=.d), $@)
OBJ_ALL += $(SOC_OBJS) # }}}

DIS_SRCS    = src/utils/disassemble.cpp #{{{
DIS_CFLAGS  += $(COM_FLAG) $(CFLAGS_BUILD) $(shell llvm-config --cxxflags)
LIBS += $(shell llvm-config --libs)
DIS_OBJS = $(DIS_SRCS:%.cpp=$(OBJ_DIR)/%.o)
$(DIS_OBJS): $(OBJ_DIR)/%.o: %.cpp
	@echo + CXX $<
	@mkdir -p $(dir $@)
	@$(CXX) $(DIS_CFLAGS) -c -o $@ $<
	$(call call_fixdep, $(@:.o=.d), $@)
OBJ_ALL += $(DIS_OBJS) # }}}

ELG_SRCS    = $(shell find src/utils/log -type f -name "*.cpp") #{{{
ELG_CFLAGS  += $(COM_FLAG) $(CFLAGS_BUILD) -fexceptions -Wno-range-loop-construct
ELG_OBJS = $(ELG_SRCS:%.cpp=$(OBJ_DIR)/%.o)
$(ELG_OBJS): $(OBJ_DIR)/%.o: %.cpp
	@echo + CXX $<
	@mkdir -p $(dir $@)
	@$(CXX) $(ELG_CFLAGS) -c -o $@ $<
	$(call call_fixdep, $(@:.o=.d), $@)
OBJ_ALL += $(ELG_OBJS) # }}}

ARG_SRCS    = src/utils/parse_args.cpp #{{{
ARG_CFLAGS  += $(COM_FLAG) $(CFLAGS_BUILD)
ARG_OBJS = $(ARG_SRCS:%.cpp=$(OBJ_DIR)/%.o)
$(ARG_OBJS): $(OBJ_DIR)/%.o: %.cpp
	@echo + CXX $<
	@mkdir -p $(dir $@)
	@$(CXX) $(ARG_CFLAGS) -c -o $@ $<
	$(call call_fixdep, $(@:.o=.d), $@)
OBJ_ALL += $(ARG_OBJS) # }}}

# Depencies
-include $(OBJ_ALL:.o=.d)
LD := $(CXX)
LIBS += -lfmt
BINARY   := $(BUILD_DIR)/$(NAME)
ifdef CONFIG_NEED_TB
include ./scripts/ver_to_cpp.mk
else
$(BINARY): $(OBJ_ALL) $(ELFIN_AR)
	@echo + LD $@
	@$(LD) $(OBJ_ALL) $(ELFIN_AR) $(LIBS) -o $@ 
endif

# Some convenient rules
.PHONY: elf gdb sim

LOG_FILE = 	$(call remove_quote, $(CONFIG_TRACE_FILE))
LOG_DIR  = 	$(dir $(LOG_FILE))
WAVE_DIR = 	$(call remove_quote, $(CONFIG_WAVE_DIR))
ifneq ($(wildcard $(LOG_FILE)),)
    WAVE_TO_TICKS := $(shell head -n 1 $(LOG_FILE) | grep -oP '(?<=\[)[0-9]+(?=\])')
endif
ifndef WAVE_TO_TICKS 
	WAVE_TO_TICKS := 0
endif

ARGS = --log=$(LOG_FILE) -w $(WAVE_TO_TICKS)
ifdef CONFIG_NEMU_BAT
ARGS += -b
endif

dirs:
ifdef CONFIG_TRACE
	@mkdir -p $(dir $(LOG_FILE))
endif
ifdef CONFIG_WAVE_ON
	@mkdir -p $(WAVE_DIR)
endif

elf: $(BINARY)

TB_EXEC := $(BINARY) $(ARGS)
sim: elf dirs
	$(TB_EXEC)

gdb: elf
	gdb -s $(BINARY) --args $(TB_EXEC)

log:
	cat $(LOG_FILE)

clean:
	rm -rf $(BUILD_DIR)
ifdef CONFIG_TRACE
	rm -f $(LOG_FILE)
endif
ifdef CONFIG_WAVE_ON
	rm -rf $(WAVE_DIR)
endif
