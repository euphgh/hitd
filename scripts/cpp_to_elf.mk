CC = $(call remove_quote,$(CONFIG_CC))
COM_FLAG := -MMD -Wall -Werror -std=gnu++14 -I./include
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
# Include all filelist.mk to merge file lists
FILELIST_MK = $(shell find ./src/nemu -name "filelist.mk")
include $(FILELIST_MK)

# Filter out directories and files in blacklist to obtain the final set of source files
DIRS-BLACKLIST-y += $(DIRS-BLACKLIST)
SRCS-BLACKLIST-y += $(SRCS-BLACKLIST) $(shell find $(DIRS-BLACKLIST-y) -name "*.cpp")
SRCS-y += $(shell find $(DIRS-y) -name "*.cpp")
NEMU_SRCS = $(filter-out $(SRCS-BLACKLIST-y),$(SRCS-y))

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
OBJS += $(NEMU_OBJS)# }}}

# testbench compile rule{{{
ifdef CONFIG_NSC_DIFF
TB_SRCS     := $(shell find src/testbench -name "*.cpp")
TB_CFLAGS   += $(CFLAGS_BUILD) -D__GUEST_ISA__=$(GUEST_ISA) -I$(HITD_HOME)/obj_dir
TB_INCLUDES = $(addprefix -I, $(TB_INC_PATH) ./src/nemu/isa/mips32/include)
TB_CFLAGS   := $(COM_FLAG) $(TB_INCLUDES) $(TB_CFLAGS)
TB_OBJS = $(TB_SRCS:%.cpp=$(OBJ_DIR)/%.o)
$(TB_OBJS): $(OBJ_DIR)/%.o: %.cpp $(CXX_CLOF)
	@echo + CXX $<
	@mkdir -p $(dir $@)
	@$(CXX) $(TB_CFLAGS) @$(CXX_CLOF) -c -o $@ $<
	$(call call_fixdep, $(@:.o=.d), $@)
OBJS += $(TB_OBJS) 
endif
# }}}

SOC_SRCS    = $(shell find src/device src/soc -type f -name "*.cpp")#{{{
SOC_CFLAGS  += $(COM_FLAG) $(CFLAGS_BUILD)
SOC_OBJS = $(SOC_SRCS:%.cpp=$(OBJ_DIR)/%.o)
$(SOC_OBJS): $(OBJ_DIR)/%.o: %.cpp $(CXX_CLOF)
	@echo + CXX $<
	@mkdir -p $(dir $@)
	@$(CXX) $(SOC_CFLAGS) -c -o $@ $<
	$(call call_fixdep, $(@:.o=.d), $@)
OBJS += $(SOC_OBJS) # }}}

DIS_SRCS    = src/utils/disasm.cpp #{{{
DIS_CFLAGS  += $(COM_FLAG) $(CFLAGS_BUILD) $(shell llvm-config --cxxflags)
LIBS += $(shell llvm-config --libs)
DIS_OBJS = $(DIS_SRCS:%.cpp=$(OBJ_DIR)/%.o)
$(DIS_OBJS): $(OBJ_DIR)/%.o: %.cpp
	@echo + CXX $<
	@mkdir -p $(dir $@)
	@$(CXX) $(DIS_CFLAGS) -c -o $@ $<
	$(call call_fixdep, $(@:.o=.d), $@)
OBJS += $(DIS_OBJS) # }}}

ELG_SRCS    = $(shell find src/utils/log -type f -name "*.cpp")#{{{
ELG_CFLAGS  += $(COM_FLAG) $(CFLAGS_BUILD) -fexceptions -Wno-range-loop-construct
ELG_OBJS = $(ELG_SRCS:%.cpp=$(OBJ_DIR)/%.o)
$(ELG_OBJS): $(OBJ_DIR)/%.o: %.cpp
	@echo + CXX $<
	@mkdir -p $(dir $@)
	@$(CXX) $(ELG_CFLAGS) -c -o $@ $<
	$(call call_fixdep, $(@:.o=.d), $@)
OBJS += $(ELG_OBJS) # }}}

ARG_SRCS    = src/utils/parse_args.cpp#{{{
ARG_CFLAGS  += $(COM_FLAG) $(CFLAGS_BUILD)
ARG_OBJS = $(ARG_SRCS:%.cpp=$(OBJ_DIR)/%.o)
$(ARG_OBJS): $(OBJ_DIR)/%.o: %.cpp
	@echo + CXX $<
	@mkdir -p $(dir $@)
	@$(CXX) $(ARG_CFLAGS) -c -o $@ $<
	$(call call_fixdep, $(@:.o=.d), $@)
OBJS += $(ARG_OBJS) # }}}

# Depencies
-include $(OBJS:.o=.d)
BINARY   := $(BUILD_DIR)/$(NAME)
LD := $(CXX)
LDFLAGS := $(LDFLAGS)
LDFLAGS += $(CFLAGS_BUILD)
EXTRA_OBJS = $(file < $(EXTRA_OBJS_LIST))
LIBS += -lfmt
$(BINARY): $(OBJS) $(OBJS_EXTRA) $(LD_HEAD_OF) $(LD_TAIL_OF) $(ARCHIVES)
	@echo + LD $@
	@$(LD) $(LDFLAGS) @$(LD_HEAD_OF) $(OBJS) $(EXTRA_OBJS) $(ARCHIVES) @$(LD_TAIL_OF) $(LIBS) -o $@ 












# Some convenient rules
.PHONY: tb gdb sim

LOG_FILE = $(call remove_quote, $(CONFIG_TRACE_FILE))
ARGS = --log=$(LOG_FILE)
IMAGE ?= func
ARGS += --test=$(IMAGE)

dirs:
	mkdir -p $(dir $(LOG_FILE))

tb: $(BINARY)

sim: tb dirs
	$(TB_EXEC)

TB_EXEC := $(BINARY) $(ARGS)
gdb: tb
	gdb -s $(BINARY) --args $(TB_EXEC)

log:
	cat $(LOG_FILE)

clean:
	rm -rf $(BUILD_DIR)
