WORK_DIR  := $(HITD_HOME)
BUILD_DIR := $(WORK_DIR)/build
NAME = Vmycpu_top
INC_PATH := $(WORK_DIR)/include $(INC_PATH)
OBJ_DIR  := $(BUILD_DIR)/obj-$(NAME)
BINARY   := $(BUILD_DIR)/$(NAME)

# Compilation flags
ifeq ($(CC),clang)
CXX := clang++
else
CXX := g++
endif
LD := $(CXX)
INCLUDES = $(addprefix -I, $(INC_PATH))
CFLAGS  := -MMD -Wall -Werror $(INCLUDES) $(CFLAGS)
LDFLAGS := $(LDFLAGS)

OBJS += $(SRCS:%.cpp=$(OBJ_DIR)/%.o)

$(OBJ_DIR)/%.o: %.cpp $(CXX_CLOF)
	@echo + CXX $<
	@mkdir -p $(dir $@)
	@$(CXX) $(CFLAGS) @$(CXX_CLOF) -c -o $@ $<
	$(call call_fixdep, $(@:.o=.d), $@)

# Depencies
-include $(OBJS:.o=.d)

# Some convenient rules

.PHONY: app clean

app: $(BINARY)

$(BINARY): $(OBJS) $(OBJS_EXTRA) $(LD_CLOF) $(ARCHIVES)
	@echo + LD $@
	@$(LD) -o $@ $(OBJS) $(OBJS_APPEND) $(LDFLAGS) @$(LD_CLOF) $(ARCHIVES) $(LIBS)

clean:
	rm -rf $(BUILD_DIR)
