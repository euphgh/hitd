include Vmycpu_top.mk

all: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS) $(CXX_CLOF) $(LD_HEAD_OF) $(LD_TAIL_OF) $(EXTRA_OBJS_LIST)

COLOR_RED := $(shell echo "\033[1;31m")
COLOR_END := $(shell echo "\033[0m")
ifneq ($(wildcard $(VM_HIER_LIBS)),)
$(warning $(COLOR_RED)Warning: VM_HIER_LIBS not empty $(VM_HIER_LIBS)$(COLOR_END))
endif
ifneq ($(wildcard $(VK_USER_OBJS)),)
$(warning $(COLOR_RED)Warning: VK_USER_OBJS not empty $(VK_USER_OBJS)$(COLOR_END))
endif


files: $(CXX_CLOF) $(LD_CLOF) $(OBJS_EXTRA)
	@echo CXX_CLOF: $(CXX_CLOF)
	@echo LD_CLOF: $(LD_CLOF)
	@echo OBJS_EXTRA: $(OBJS_EXTRA)
var:
	@echo
	@echo OBJCACHE: $(OBJCACHE) 
	@echo CXX: $(CXX) 
	@echo CPPSRC: $(CPPSRC) 
	@echo CFLAGS: $(CFLAGS)
	@echo CXXFLAGS: $(CXXFLAGS) 
	@echo CPPFLAGS: $(CPPFLAGS) 
	@echo OPT_FAST: $(OPT_FAST)
	@echo VK_USER_OBJS: $(VK_USER_OBJS) 
	@echo VK_GLOBAL_OBJS: $(VK_GLOBAL_OBJS) 
	@echo VM_PREFIX: $(VM_PREFIX)
	@echo VM_HIER_LIBS: $(VM_HIER_LIBS)
	@echo LINK: $(LINK) 
	@echo LDFLAGS: $(LDFLAGS) 
	@echo LOADLIBES: $(LOADLIBES) 
	@echo LDLIBS: $(LDLIBS) 
	@echo LIBS: $(LIBS) 
	@echo SC_LIBS: $(SC_LIBS)

$(CXX_CLOF): 
	$(file > $@,$(CPPFLAGS))
	$(file >>$@,$(CXXFLAGS))

# $(LINK) $(LDFLAGS)  $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS) $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@
# 		  |LD_HEAD_OF|				  |EXTRA_OBJS_LIST|									    |LD_TAIL_OF 							|

$(LD_HEAD_OF):
	$(file > $@,$(LDFLAGS))

$(LD_TAIL_OF):
	$(file > $@,$(LOADLIBES))
	$(file >>$@,$(LDLIBS))
	$(file >>$@,$(LIBS))
	$(file >>$@,$(SC_LIBS))

$(EXTRA_OBJS_LIST):
	$(file > $@,$(foreach element, $(VK_GLOBAL_OBJS), $(HITD_HOME)/obj_dir/$(element)))
