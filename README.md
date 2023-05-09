# HIT-Difftest：支持NSCSCC的MIPS32差分测试
哈尔滨工业大学(本部)开发，用于测试verlog/systemverilog编写的MIPS32-Release1处理器的差分测试环境，
可仿真NSCSCC大赛官方提供的SoC，需使用verilator编译v代码。

可仿真如下测试：
* NSCSCC功能测试
* NSCSCC性能测试
* NSCSCC系统测试(待完善)
* uboot仿真至进入shell
* linux仿真至进入shell

可支持如下功能
* 比对通用寄存器
* 比对HILO寄存器
* 比对CP0寄存器
* 比对内存数据
* 生成波形文件，支持fst和vcd格式
* 生成log文件，自动分析AXI协议
* 性能测试的数据统计(待完善)
* 死循环检测(待完善)
* linux内核源码的C调试器(待完善)

## 环境说明
该测试环境是一个linux系统下的cpp工程，使用了多方库文件。
为了确保能够编译该工程，需要配置一定的编译环境。
编译时需要V源码，若没有V源码，可使用github110037/mycpu.git的difftest分支。
预计支持如下三种环境配置方式，已实现两种：
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
2. 克隆仓库到任意路径
```bash
git clone https://github.com/github1100037/HITD.git
cd HITD
```
3. 导入环境变量，通过环境变量指定v代码文件夹，测试v代码通过verilator编译
```bash
export HITD_HOME=$(pwd) ##导入该仓库路径作为环境变量，编译时会使用
export VSRC_HOME=/you/verilog/path ##导入v代码仓库路径作为环境变量，编译时会使用
```
注意，确保使用命令```make vtest```v代码不会有编译报错。 编译命令详见```scripts/ver_to_cpp.mk```

4. 编译工程，生成可执行ELF文件
```bash
make menuconfig ##生成默认编译选项文件.config
make elf ##编译全部源代码
```
如果执行上述命令没有报错，则编译成功，会生成可执行文件```build/Vmycpu_top```。
执行```make sim```运行该文件。
### Nix配置(推荐)
Nix是一个包管理器，提供了一种滚动发行和xxx的特殊折衷。
非常适合进行包安装，环境变量、文件管理等等。
1. 阅读官方手册安装Nix包管理器，较新的Linux发行版都可支持。
2. 克隆仓库到任意路径
```bash
git clone https://github.com/github1100037/HITD.git
cd HITD
```
3. 生成环境。只需执行命令：```nix-shell```

该指令会自动将软件包下载到缓存中，进行环境变量配置等。
该指令执行完毕后会开一个新的shell，在该shell里拥有所有编译改项目所需的软件包和环境变量。
但退出该Shell后，软件包不再可用，环境变量也恢复原。

4. 指定v代码文件夹，测试v代码通过verilator编译
```bash
export VSRC_HOME=/you/verilog/path ##导入v代码仓库路径作为环境变量，编译时会使用
make vtest ## 测试v代码不会有编译报错。 编译命令详见scripts/ver_to_cpp.mk
```
5. 编译工程，同手动编译
### Docker配置(未实现)
## 使用说明
使用分为三步
1. 适配V源码
2. 配置编译选项
3. 编译运行。
运行需要V源码，若没有V源码，可使用github110037/mycpu.git的difftest分支。

### 适配V源码
difftest运行需要获取V代码变量值，其中必须获取通用寄存器，退休指令PC等数据。
更具体而言，必须实现```src/testbench/dpic/export.cpp```下的如下函数：
```cpp
/* initalize dpi */
void dpi_init();
/* pass regfile num and get the value of arch regfile in this cycle */
uint32_t dpi_regfile(uint8_t num);
/* return the number of retire instruction in this cycle */
uint8_t dpi_retire();
/* return the PC value of the last retire instruction in this cycle */
uint32_t dpi_retirePC();
```
每个时钟周期，testbench都会调用dpi_retire判断是否有指令退休。
如果有，则会在该周期调用另外的api，并让模拟器执行相同的指令数目，比对寄存器是否正确。
关于函数的实现，具体参考github110037/mycpu.git的difftest分支和本项目的mycpu分支。
C代码获取V代码数据的方式采用dpi，详见verilator的相关部分。

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
对于有意合作开发并提交pr者，如果能先通过email联系，本人将感激不尽。

目前有以下优先待完成的事项
* 可视化性能测试分析数据
* 虚拟内存的MTrace
* 基于Chisel语言的适配
* 开发者模式的相关文档说明
* 系统测试的shell操作
* Docker方式环境配置
* linux内核源码的C调试器，显示变量

## 感谢
本项目参考或使用了如下项目：
* NJU-ProjectN/nemu：使用并修改了Nemu的框架，使用cpp进行了部分重写。
* cyyself/cemu和cyyself/soc-simulator：借鉴了soc-simulator的框架，使用cpp进行了大部分重写。
    并使用cemu作为nemu的difftest模拟器。
    在此十分感谢cyyself本人，不胜其烦的为我解答了仿真linux的问题。
* aclements/libelfin：使用了该库编译出的a文件，帮助解析Dwarf文件格式。
    在开发者模式的时，实现了linux内核源码的C调试器
* amrayn/easyloggingpp：使用了该log库，才能够打印出漂亮格式化的log
