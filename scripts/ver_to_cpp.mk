TOPNAME = mycpu_top
VSRC_DIR = $(HITD_HOME)/vsrc
VSRC_SUB_DIR = $(shell find -L $(VSRC_DIR)/ -type d)
VINCLUDE = $(addprefix -I, $(VSRC_SUB_DIR))

# verilator -Mdir Name of output object directory
VXX_MDIR = $(HITD_HOME)/obj_dir
VXX_WNO = -Wno-caseincomplete \
		  -Wno-width \
		  -Wno-pinmissing \
		  -Wno-implicit \
		  -Wno-timescalemod

NPROC = $(shell nproc)

VXXFLAG := --cc 
VXXFLAG += --Mdir $(VXX_MDIR) 
VXXFLAG += $(VXX_WNO) 
VXXFLAG += --relative-includes 
VXXFLAG += $(VINCLUDE)
VXXFLAG += -j $(NPROC)

ifdef CONFIG_TRACE_ON
	VXXFLAG += --trace$(if $(CONFIG_EXT_FST),-fst)
endif

VXXBIN := $(VXX_MDIR)/V$(TOPNAME)
VSRC_TOP := $(VSRC_DIR)/$(TOPNAME).v
VSRC_ALL := $(shell find $(VSRC_DIR) -type f -name "*.v")

var:

vtoc: $(VSRC_ALL)
	verilator $(VXXFLAG) $(VSRC_TOP) 

