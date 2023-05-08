TOP_NAME = mycpu_top
VSRC_SUB_DIR = $(shell fd -t d . $(VSRC_HOME))
VINCLUDE = $(addprefix -I, $(VSRC_SUB_DIR))

TB_SRCS     := $(shell find src/testbench -name "*.cpp")
TB_INCLUDES  = $(addprefix -I, $(TB_INC_PATH) $(NEMU_INC_PATH))

TB_CFLAGS 	:= -MMD -Wall -Werror -std=gnu++17 -I$(HITD_HOME)/include
TB_CFLAGS 	+= -DNSCSCC_HOME=\\\"$(NSCSCC_HOME)\\\" -DHITD_HOME=\\\"$(HITD_HOME)\\\" 
TB_CFLAGS   += $(CFLAGS_BUILD) -D__GUEST_ISA__=$(GUEST_ISA)
TB_CFLAGS   += $(TB_INCLUDES)

# verilator -Mdir Name of output object directory
VXX_MDIR = $(HITD_HOME)/build
VXX_WNO = -Wno-caseincomplete \
		  -Wno-width \
		  -Wno-pinmissing \
		  -Wno-implicit \
		  -Wno-timescalemod

NPROC = $(shell nproc)

VXXFLAGS := --cc --exe --build
VXXFLAGS += --Mdir $(VXX_MDIR) 
VXXFLAGS += $(VXX_WNO) 
VXXFLAGS += --relative-includes 
VXXFLAGS += $(VINCLUDE)
# VXXFLAGS += -j $(NPROC)
VXXFLAGS += -CFLAGS "$(TB_CFLAGS)"
VXXFLAGS += -LDFLAGS "$(LIBS)"

ifdef CONFIG_WAVE_ON
	VXXFLAGS += --trace$(if $(CONFIG_EXT_FST),-fst)
endif

VSRC_TOP := $(VSRC_HOME)/$(TOP_NAME).v
VSRC_ALL := $(shell find -L $(VSRC_HOME) -type f -name "*.v")
LD_LOG := $(BUILD_DIR)/$(BINARY).log

elf:$(BINARY)

$(BINARY): $(VSRC_ALL) $(TB_SRCS) $(OBJ_ALL)
	@-rm -f $(BINARY)
	@echo + VERILATOR $(BINARY)
	@verilator $(VXXFLAGS) $(VSRC_TOP) $(TB_SRCS) $(OBJ_ALL) > /dev/null
