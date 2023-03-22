# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vmycpu_top.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vmycpu_top \
	Vmycpu_top__Dpi_Export__0 \
	Vmycpu_top___024root__DepSet_h368ace38__0 \
	Vmycpu_top___024root__DepSet_hcf0db31f__0 \
	Vmycpu_top___024root__DepSet_hcf0db31f__1 \
	Vmycpu_top___024root__DepSet_hcf0db31f__2 \
	Vmycpu_top_inst_data_tp__DepSet_h5994ee5c__0 \
	Vmycpu_top_data_data_tp__DepSet_h08e43d75__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vmycpu_top__ConstPool_0 \
	Vmycpu_top___024root__Slow \
	Vmycpu_top___024root__DepSet_h368ace38__0__Slow \
	Vmycpu_top___024root__DepSet_h368ace38__1__Slow \
	Vmycpu_top___024root__DepSet_hcf0db31f__0__Slow \
	Vmycpu_top_inst_data_tp__Slow \
	Vmycpu_top_inst_data_tp__DepSet_h73ef9383__0__Slow \
	Vmycpu_top_data_data_tp__Slow \
	Vmycpu_top_data_data_tp__DepSet_ha4df465a__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vmycpu_top__Dpi \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vmycpu_top__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
