# Sanity check
ifeq ($(wildcard $(HITD_HOME)/src/nemu/nemu-main.cpp),)
  $(error HITD_HOME=$(HITD_HOME) is not a HITD repo)
endif

# Include variables and rules generated by menuconfig
-include $(HITD_HOME)/include/config/auto.conf
-include $(HITD_HOME)/include/config/auto.conf.cmd

remove_quote = $(patsubst "%",%,$(1))

# Include rules for menuconfig
include $(HITD_HOME)/scripts/config.mk

# include rule for vtoc
include $(HITD_HOME)/scripts/ver_to_cpp.mk


# Extract variabls from menuconfig
GUEST_ISA ?= $(call remove_quote,$(CONFIG_ISA))
ENGINE ?= $(call remove_quote,$(CONFIG_ENGINE))
NAME    = $(GUEST_ISA)-nemu-$(ENGINE)

# Include all filelist.mk to merge file lists
FILELIST_MK = $(shell find ./src/nemu -name "filelist.mk")
include $(FILELIST_MK)

# Filter out directories and files in blacklist to obtain the final set of source files
DIRS-BLACKLIST-y += $(DIRS-BLACKLIST)
SRCS-BLACKLIST-y += $(SRCS-BLACKLIST) $(shell find $(DIRS-BLACKLIST-y) -name "*.cpp")
SRCS-y += $(shell find $(DIRS-y) -name "*.cpp")
NEMU_SRCS = $(filter-out $(SRCS-BLACKLIST-y),$(SRCS-y))

# Extract compiler and options from menuconfig
CC = $(call remove_quote,$(CONFIG_CC))
CFLAGS_BUILD += $(if $(CONFIG_CC_DEBUG),,$(call remove_quote,$(CONFIG_CC_OPT)))
CFLAGS_BUILD += $(if $(CONFIG_CC_LTO),-flto,)
CFLAGS_BUILD += $(if $(CONFIG_CC_DEBUG),-Og -ggdb3,)
CFLAGS_BUILD += $(if $(CONFIG_CC_ASAN),-fsanitize=address,)
CFLAGS  += $(CFLAGS_BUILD) $(CFLAGS_TRACE) -D__GUEST_ISA__=$(GUEST_ISA)
LDFLAGS += $(CFLAGS_BUILD)

CXX_CLOF    = $(HITD_HOME)/scripts/tb_cpp_flags.txt
LD_CLOF     = $(HITD_HOME)/scripts/tb_ld_flags.txt
OBJS_EXTRA  = $(HITD_HOME)/scripts/tb_ld_objs.txt
ARCHIVES 	= $(HITD_HOME)/obj_dir/Vmycpu_top__ALL.a

$(CXX_CLOF) $(LD_CLOF) $(OBJS_EXTRA) $(ARCHIVES) &: vsrc
	$(MAKE) -C $(HITD_HOME)/obj_dir -f $(HITD_HOME)/scripts/precompile_tb.mk default
	$(MAKE) -C $(HITD_HOME)/obj_dir -f $(HITD_HOME)/scripts/precompile_tb.mk files

TB_SRCS = $(shell find src/testbench -name "*.cpp")
SRCS = $(NEMU_SRCS) $(TB_SRCS)

include $(HITD_HOME)/scripts/compile_tb.mk
