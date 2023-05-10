# HIT-Difftest：支持NSCSCC的MIPS32差分测试
哈尔滨工业大学(本部)开发，
用于测试verlog/systemverilog编写的MIPS32-Release1处理器的差分测试环境，
可仿真NSCSCC大赛官方提供的SoC，需使用verilator编译V代码。
借鉴了南京大学的模拟器框架Nemu、重庆大学的模拟器cemu和soc-simulator。

可仿真如下测试：
- [x]  NSCSCC功能测试
- [x]  NSCSCC性能测试
- [ ]  NSCSCC系统测试(待完善)
- [x]  uboot仿真至进入shell
- [x]  linux仿真至进入shell

可支持如下功能
- [x] 比对通用寄存器
- [x] 比对HILO寄存器
- [x] 比对CP0寄存器
- [x] 比对内存数据
- [x] 生成波形文件，支持fst和vcd格式
- [x] 生成log文件，自动分析AXI协议
- [ ] 性能测试的数据统计(待完善)
- [ ] 死循环检测(待完善)
- [ ] linux内核源码的C调试器(待完善)

## 环境说明
该测试环境，即testbench，是一个**Linux系统下的cpp工程**，使用了多方库文件。
为了确保能够编译该工程，需要配置一定的编译环境。
编译和运行本项目需要V源码，并结合V代码对cpp的API进行一定的实现。

项目的**master分支**是一个模板，定义了运行testbench必须实现的函数，
但**未提供实现**，函数需要根据不同的V代码进行不同实现。
项目的**mycpu分支提供了一个实现，对应的V代码是github110037/mycpu.git的difftest分支。**
该仓库的V代码是一个实现了NSCSCC基本集的CPU，无法运行uboot和Linux。

***建议使用这两个仓库的对应分支进行初次编译以熟悉流程。***
### 手动配置
1. 安装以下软件包：
* fd
* flex
* bison
* llvm15    (若无头文件则需单独安装)
* libfmt    (若无头文件则需单独安装)
* readline  (若无头文件则需单独安装)
* verilator
* libncurses(若无头文件则需单独安装)
2. 克隆HITD仓库到任意路径
```bash
git clone https://github.com/github1100037/HITD.git 
cd HITD ##若使用mycpu请自行使用git switch mycpu切换到对应分支
export HITD_HOME=$(pwd) ##导入该仓库路径作为环境变量，编译时会使用
```
3. 指定V代码文件夹，测试V代码通过verilator编译
```bash
## 若使用mycpu仓库，请先git clone https://github.com/github1100037/mycpu.git获取仓库到任意路径
## 并使用cd mycpu; git switch difftest切换到对应分支
export VSRC_HOME=/you/verilog/path ##导入v代码仓库路径作为环境变量，编译时会使用
make vtest ##确保V代码能通过编译，具体编译命令详见scripts/ver_to_cpp.mk，可自行修改编译选项
```

4. 编译工程，生成可执行ELF文件
```bash
make menuconfig ##生成默认编译选项文件.config
make elf ##编译全部源代码
```
如果执行上述命令没有报错，则编译成功，会生成可执行文件```build/Vmycpu_top```。
执行```make sim```运行该文件。
### Nix配置(推荐)
Nix是一个包管理器和构建系统，它解析Nix表达式语言中指定的可重现构建指令，
创建一个不可变的包存储，允许原子升级、回滚和并发安装不同版本的包，从根本上消除依赖地狱。

Nix非常适合进行包安装，环境变量、文件管理等，可利用它**简化手动安装中的第1、2步，其他步骤不变**。

1. 阅读[Nix官方网站](https://nixos.org/download.html)安装Nix包管理器，较新的Linux发行版都可支持。
2. 克隆仓库到任意路径
```bash
git clone https://github.com/github1100037/HITD.git
cd HITD
```
3. 生成环境。只需执行命令：```nix-shell```
### Docker配置(未实现)
## 使用说明
使用分为三步
1. 适配V源码
2. 配置编译选项
3. 编译运行。

### 适配V源码
运行testbench需要V源码，并针对对特定的V代码编写cpp函数，使得cpp的testbench能获取V代码变量值。
必须获取的变量值有通用寄存器，退休指令PC等数据。
cpp获取V代码数据的方法是使用verilator的dpi功能获取V代码变量数据，
使用方法可参考[verilator官方手册](https://verilator.org/guide/latest/connecting.html#direct-programming-interface-dpi)。
对本项目而言，必须使用dpi实现```src/testbench/dpic/export.cpp```下的如下函数：
```cpp
/* initalize dpi */
void dpi_init();
/* pass regfile num and get the value of arch regfile in this cycle */
uint32_t dpi_regfile(uint8_t num);
/* return the number of retire instructions in this cycle */
uint8_t dpi_retire();
/* return the PC value of the last retire instruction in this cycle */
uint32_t dpi_retirePC();
/* return 0 if all retire instruction is not interrrupted 
 * else return which instruction is interrrupted */
uint8_t dpi_interrupt_seq();
```
dpi_init用于赋值一些全局静态变量，即verilator的dpi函数所需要的模块范围变量。
因为调用dpi函数获取V代码变量时，需要指定变量所在的模块。
指定变量所在模块使用```svSetScope```函数，传入一个verilator定义的模块范围类型```svScope```的变量，返回之前设定的模块范围变量。
获取模块范围变量通过函数```svGetScopeFromName```函数，传入模块名的字符串。
通过使用全局变量保存以减少函数调用。
```cpp
XXTERN svScope svSetScope(const svScope scope);
XXTERN svScope svGetScopeFromName(const char* scopeName);
```

每个时钟周期，testbench都会调用dpi_retire判断是否有指令退休和退休数。
如果有，会再调用dpi_interrupt_seq获取是否有异常，让模拟器执行相同的指令数目，
并在模拟器执行出现中断的指令时，要求模拟器读取中断信号。
最后，会在该周期调用dpi_retirePC和dpi_regfile函数，比对寄存器是否正确。
该部分代码位于src/testbench/mainloop.cpp的113行。

接口函数的实现样例可参考github110037/mycpu.git的difftest分支和本项目的mycpu分支。
如果实现了如上的函数，可以实现如下功能：
- [x] 比对通用寄存器
- [x] 比对内存数据
- [x] 生成波形文件，支持fst和vcd格式
- [x] 生成log文件，自动分析AXI协议

在文件```src/testbench/dpic/export.cpp```中，还有其他以dpi开头的函数，是为了实现附加功能设计的。
如果需要如下附加功能，则必须实现：
- [x] 实时检查HILO寄存器
- [x] 实时检查CP0寄存器

这两种实时比对功能一不同的方式实现。
* 类似通用寄存器，如果指令退休，则根据手册判断指令是否会修改特殊寄存器，会修改则比对
* 比对时机依赖于V代码生成的比对信号，testbench在每个时钟周期检查该信号，如果置起则比对

HILO寄存器实时比对种采用方式一实现，因此只需要一个函数：
```cpp
/* return the two regiter value: cat(hi,lo) */
uint64_t dpi_get_hilo();
```
CP0寄存器实时比对采用方式二实现，因此需要两个函数：
```cpp
/* return true if cp0 change in this cycle
 * and write the PC of instruction who
 * change the cp0 */
bool dpi_is_cp0_change(uint32_t* changed_pc);
/* get CP0 value by rd and select */
uint32_t dpi_get_cp0(int rd, int sel);
```

### 配置编译选项
本项目使用Kconfig配置编译选项，使用```make menuconfig```打开界面更改配置。
下介绍menuconfig可配置的选项，详细可查看```Kconfig```文件：
* Run Mode：默认是"Use nemu as nscscc difftest emulator"，对于使用者无需改变。
* **Test Program**：执行的测试程序，可选NSCSCC功能测试、 NSCSCC性能测试、 NSCSCC系统测试、uboot、linux。
    其中NSCSCC系统测试只能运行到打印出基本信息，不能运行shell进行输入输出，
    系统测试的shell需要python辅助输入输出，并非真正的shell。
* **Build Options**：编译选项，可选使用clang编译，可选编译优化选项。可选启动debug的-g选项。
* **Log Options**：启用Tracer功能，会生成log文件帮助debug。
    可配置log文件的路径、trace文件是全部保留还是只留最后几KB。
    tracer有不同种类，MyCPU和CPU模拟器(Nemu)分别支持不同的tracer：
    * I(instruction)trace，记录执行过的指令，Nemu可用。
    * M(memeory)trace，记录模拟器的无Cache访存，Nemu可用。
        注意，此处的访存是物理地址的访存，虚拟地址的访存记录有待完善。
    * T(transition)trace，记录MyCPU的AXI总线访存，MyCPU可用。
        注意，此处的访存是基于MyCPU端口的AXI总线的物理地址的访存，虚拟地址的访存记录暂不实现。
    * E(exception)trace，记录异常的触发和返回，MyCPU可用。
    * F(function)trace，记录函数的触发和返回，MyCPU可用。

    MyCPU的trace只能根据MyCPU暴露的接口信号生成，因此只能产生TTrace，其开关位于该选项之下。
    ITrace、MTrace、ETrace和FTrace开关位于"Nemu Options"/"Testing and Debugging"/下。
* **Nemu Options**
    由如下三个选项组组成
    * ISA Option：用于配置模拟器Nemu的指令集体系，只可选MIPS32-Release1或者龙芯基本集(nscscc set)
    * Testing and Debugging：用于配置log使能和自动死循环检测。
        log使能相关部分已在上文提及，自动死循环检测不建议开启。
        因为该检测基于PC轨迹的重复次数，只能检测简单的死循环。
        实际上，在性能测试、uboot和linux均会将非死循环误判为死循环，有待参数调优和逻辑简化。
    * Miscellaneous：杂项，**使用者只需注意其中的TLB entry number，可配置TLB的项数**。
* **Verilog Simulate Options**
    由如下三个选项组组成
    * **AXI Options**：配置AXI总线规格，默认规格已基于NSCSCC规程，无需修改。
    * **Perference Test**：配置所运行的性能测试，从测试n到测试m；
        配置是否开启性能测试的时间分析，若开启，则会生成相关数据文件。
        可视化数据文件的python脚本位于```tools/mycpu_perf.py```，有待完善。
    * **Wave and Debugging**：配置是否生成波形文件、波形文件夹位置、波形文件格式。
        **注意：波形文件会大幅降低程序运行速度**

### 编译运行
本项目使用Makefile进行编译管理和运行，下介绍Makefile伪命令。
* make elf：生成ELF，但不运行
* make sim：运行测试，sim会自动先执行elf
* make gdb：使用gdb运行elf，gdb会自动先执行elf
* make menuconfig：使用选项界面更改配置

## 贡献说明
***特别说明：该项目是本人公开合作的第一个项目，如有本人出现不妥的说明、不符合开源社区开发者的言行、
代码不符合开源社区开发规范等， 欢迎提出批评意见，本人会积极改正指正，与各位一同交流探讨。***

关于本项目提交的issue，**请统一以Nix方式复现并汇报**，有助于开发人员减少环境配置方面的工作。
对于有意合作开发并提交PR者，如果能先通过email联系，本人将感激不尽。

由于本项目继承与Nemu，因此使用Makefile编译。
编写代码建议使用的lsp是[clangd](https://clangd.llvm.org)，
可以使用[bear](https://github.com/rizsotto/Bear)工具生成compile_commands.json。

目前有以下优先待完成的事项：
- [ ] 编写可视化性能测试分析数据脚本
- [ ] 编写开发者模式的说明文档
- [ ] 实现虚拟内存的MTrace
- [ ] 适配基于Chisel语言环境
- [ ] 实现NSCSCC系统测试的shell操作
- [ ] 实现Docker方式环境配置
- [ ] 修复Linux内核源码的C调试器，显示变量

## 感谢
本项目参考或使用了如下项目：
* [NJU-ProjectN/nemu](https://github.com/NJU-ProjectN/nemu)：使用并修改了Nemu的框架，使用cpp进行了部分重写。
* [cyyself/cemu](https://github.com/cyyself/cemu)和[cyyself/soc-simulator](https://github.com/cyyself/soc-simulator)：
借鉴了soc-simulator的框架，使用cpp进行了大部分重写。
    并使用cemu作为nemu的difftest模拟器。
    在此十分感谢@cyyself本人，不胜其烦的为我解答了仿真linux的问题。
* [aclements/libelfin](https://github.com/aclements/libelfin)：使用了该库编译出的a文件，帮助解析Dwarf文件格式。
    在开发者模式的时，实现了linux内核源码的C调试器
* [amrayn/easyloggingpp](https://github.com/amrayn/easyloggingpp)：使用了该log库，才能够打印出漂亮格式化的log
