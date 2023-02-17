NAME = Vmycpu_top
WORK_DIR  := $(HITD_HOME)
BUILD_DIR := $(WORK_DIR)/build
OBJ_DIR  := $(BUILD_DIR)/obj-$(NAME)
BINARY   := $(BUILD_DIR)/$(NAME)
LD := $(CXX)
LDFLAGS := $(LDFLAGS)
COM_FLAG = -MMD -Wall

# NEMU compile rule
NEMU_INCLUDES = $(addprefix -I, $(NEMU_INC_PATH) $(WORK_DIR)/include)
NEMU_CFLAGS  := $(COM_FLAG) $(NEMU_INCLUDES) $(NEMU_CFLAGS)
NEMU_OBJS = $(NEMU_SRCS:%.cpp=$(OBJ_DIR)/%.o)
$(NEMU_OBJS): $(OBJ_DIR)/%.o: %.cpp
	@echo + CXX $<
	@mkdir -p $(dir $@)
	@$(CXX) $(NEMU_CFLAGS) -c -o $@ $<
	$(call call_fixdep, $(@:.o=.d), $@)

# testbench compile rule
TB_INCLUDES = $(addprefix -I, $(TB_INC_PATH) $(WORK_DIR)/include $(HITD_HOME)/src/nemu/isa/mips32/include)
TB_CFLAGS  := $(COM_FLAG) $(TB_INCLUDES) $(TB_CFLAGS) -fexceptions
TB_OBJS = $(TB_SRCS:%.cpp=$(OBJ_DIR)/%.o)
$(TB_OBJS): $(OBJ_DIR)/%.o: %.cpp $(CXX_CLOF)
	@echo + CXX $<
	@mkdir -p $(dir $@)
	@$(CXX) $(TB_CFLAGS) @$(CXX_CLOF) -c -o $@ $<
	$(call call_fixdep, $(@:.o=.d), $@)

OBJS += $(TB_OBJS) $(NEMU_OBJS)

# Depencies
-include $(OBJS:.o=.d)

# Some convenient rules
.PHONY: tb gdb sim

EXTRA_OBJS = $(file < $(EXTRA_OBJS_LIST))
$(BINARY): $(OBJS) $(OBJS_EXTRA) $(LD_HEAD_OF) $(LD_TAIL_OF) $(ARCHIVES)
	@echo + LD $@
	@$(LD) $(LDFLAGS) @$(LD_HEAD_OF) $(OBJS) $(EXTRA_OBJS) $(ARCHIVES) @$(LD_TAIL_OF) $(LIBS) -o $@ 

override ARGS ?= --log=$(BUILD_DIR)/tb-log.txt
override ARGS += $(ARGS_DIFF)

tb: $(BINARY)

sim: tb
	$(TB_EXEC)

TB_EXEC := $(BINARY) $(ARGS)
gdb: tb
	gdb -s $(BINARY) --args $(TB_EXEC)

log:
	cat $(BUILD_DIR)/tb-log.txt

clean:
	rm -rf $(BUILD_DIR)
