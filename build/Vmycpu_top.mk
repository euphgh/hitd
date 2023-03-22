# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f Vmycpu_top.mk

default: Vmycpu_top

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /nix/store/7hx812432lymdrm4jwvv7k6xsw2kb624-verilator-5.006/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = Vmycpu_top
# Module prefix (from --prefix)
VM_MODPREFIX = Vmycpu_top
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-MMD -Wall -Werror -std=gnu++17 -I/home/hgh/cpu/hitd/include -DNSCSCC_HOME="/home/hgh/cpu/nscscc2021_group_v0.01" -DHITD_HOME="/home/hgh/cpu/hitd"  -I/home/hgh/cpu/hitd/src/nemu/isa/mips32/include   -Og -ggdb3  -D__GUEST_ISA__=mips32 \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	-lreadline -ldl -lLLVM-11 -lfmt \
	/home/hgh/cpu/hitd/build/obj-Vmycpu_top/src/nemu/isa/mips32/cp0.o \
	/home/hgh/cpu/hitd/build/obj-Vmycpu_top/src/nemu/isa/mips32/difftest/dut.o \
	/home/hgh/cpu/hitd/build/obj-Vmycpu_top/src/nemu/isa/mips32/system/mmu.o \
	/home/hgh/cpu/hitd/build/obj-Vmycpu_top/src/nemu/isa/mips32/system/intr.o \
	/home/hgh/cpu/hitd/build/obj-Vmycpu_top/src/nemu/isa/mips32/logo.o \
	/home/hgh/cpu/hitd/build/obj-Vmycpu_top/src/nemu/isa/mips32/init.o \
	/home/hgh/cpu/hitd/build/obj-Vmycpu_top/src/nemu/isa/mips32/reg.o \
	/home/hgh/cpu/hitd/build/obj-Vmycpu_top/src/nemu/isa/mips32/inst.o \
	/home/hgh/cpu/hitd/build/obj-Vmycpu_top/src/nemu/cpu/cpu-exec.o \
	/home/hgh/cpu/hitd/build/obj-Vmycpu_top/src/nemu/cpu/difftest/ref.o \
	/home/hgh/cpu/hitd/build/obj-Vmycpu_top/src/nemu/cpu/difftest/dut.o \
	/home/hgh/cpu/hitd/build/obj-Vmycpu_top/src/nemu/cpu/hostcall.o \
	/home/hgh/cpu/hitd/build/obj-Vmycpu_top/src/nemu/utils/deadloop.o \
	/home/hgh/cpu/hitd/build/obj-Vmycpu_top/src/nemu/utils/timer.o \
	/home/hgh/cpu/hitd/build/obj-Vmycpu_top/src/nemu/utils/mtrace.o \
	/home/hgh/cpu/hitd/build/obj-Vmycpu_top/src/nemu/utils/ftrace.o \
	/home/hgh/cpu/hitd/build/obj-Vmycpu_top/src/nemu/utils/rand.o \
	/home/hgh/cpu/hitd/build/obj-Vmycpu_top/src/nemu/utils/state.o \
	/home/hgh/cpu/hitd/build/obj-Vmycpu_top/src/nemu/memory/paddr.o \
	/home/hgh/cpu/hitd/build/obj-Vmycpu_top/src/nemu/memory/vaddr.o \
	/home/hgh/cpu/hitd/build/obj-Vmycpu_top/src/device/PaddrConfreg.o \
	/home/hgh/cpu/hitd/build/obj-Vmycpu_top/src/device/Puart8250.o \
	/home/hgh/cpu/hitd/build/obj-Vmycpu_top/src/device/Pmem.o \
	/home/hgh/cpu/hitd/build/obj-Vmycpu_top/src/device/PaddrTop.o \
	/home/hgh/cpu/hitd/build/obj-Vmycpu_top/src/soc.o \
	/home/hgh/cpu/hitd/build/obj-Vmycpu_top/src/utils/disasm.o \
	/home/hgh/cpu/hitd/build/obj-Vmycpu_top/src/utils/log/init.o \
	/home/hgh/cpu/hitd/build/obj-Vmycpu_top/src/utils/log/easylogging++.o \
	/home/hgh/cpu/hitd/build/obj-Vmycpu_top/src/utils/parse_args.o \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	axi \
	cp0_checker \
	diff-main \
	difftest \
	api \
	dpi_line \
	export \
	inst_timer \
	mainloop \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	src/testbench \
	src/testbench/dpic \


### Default rules...
# Include list of all generated classes
include Vmycpu_top_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

axi.o: src/testbench/axi.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
cp0_checker.o: src/testbench/cp0_checker.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
diff-main.o: src/testbench/diff-main.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
difftest.o: src/testbench/difftest.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
api.o: src/testbench/dpic/api.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
dpi_line.o: src/testbench/dpic/dpi_line.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
export.o: src/testbench/dpic/export.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
inst_timer.o: src/testbench/inst_timer.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
mainloop.o: src/testbench/mainloop.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
Vmycpu_top: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
