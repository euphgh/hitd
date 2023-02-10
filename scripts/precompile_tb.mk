include Vmycpu_top.mk

CXX_CLOF    = $(HITD_HOME)/scripts/tb_cpp_flags.txt
LD_CLOF     = $(HITD_HOME)/scripts/tb_ld_flags.txt
OBJS_EXTRA  = $(HITD_HOME)/scripts/tb_ld_objs.txt

files: $(CXX_CLOF) $(LD_CLOF) $(OBJS_EXTRA)
	@echo CXX_CLOF: $(CXX_CLOF)
	@echo LD_CLOF: $(LD_CLOF)
	@echo OBJS_EXTRA: $(OBJS_EXTRA)
var::
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
$(LD_CLOF):
	$(file > $@,$(LDFLAGS))
	$(file >>$@,$(LDLIBS))
	$(file >>$@,$(LIBS))
	$(file >>$@,$(SC_LIBS))
$(OBJS_EXTRA):
	$(file > $@,$(HITD_HOME)/obj_dir/$(VK_GLOBAL_OBJS))
