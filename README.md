# **七级流水线CPU基于LoongArch32r**
---------------------------------------------------------
## 目录结构
---------------
```
├── core
│   ├── axi  // axi 总线相关
│   └── vsrc // CPU core 文件
├── cpu-tests
│   ├── am  // 用于编译最小化测试用例
│   └── tests // 测试用例
├── doc // 文档
└── testbench // 使用verilator搭建的测试平台
    └── include
```
-----------------------------------
## 项目特征
本项目中的CPU实现了Loongarch32R非特权架构中的全部整数指令与全部特权指令与CSR寄存器，通过chiplab的func_lab15以及random_test。

**流水线握手**采用流水级之间握手机制实现分布式的阻塞控制。

**前后端分离**前端取指与后端通过FIFO进行分离，最大程度地取指令。

**乘法器**有两种实现，分别为：基于移位乘法器实现的Booth-2位乘法器，计算32位乘法需要18个周期;Booth-2 + Walloc 压缩部分积的高性能华莱士树乘法器，每次计算32-bit乘法需要2个周期。

**除法器**为一位恢复余数绝对值除法，计算32位除法需要33个周期。

**Cache**为基于状态机的阻塞式cache，在命中时读写只需要等待一个上升沿，在本项目提供的测试程序中：ICACHE命中率为98.61%，DCACHE命中率为97.89%。

**简易的AXI_FULL总线**：在AXI_LITE的基础上改进为FULL接口，指令与数据访存接口经过仲裁之后，转为AXI_FULL接口，支持一递增的突发传输。

**TLB**为32项全相联结构。

**异常与中断**支持Loongarch32R中定义的全部中断与异常。

**更简单的仿真框架** 

**时钟频率**在龙芯实验箱上使用龙芯杯性能测试SOC，CPU core时钟频率能够达到90MHz。

## 关于更简单的仿真框架（目前因为适配chiplab的仿真环境之后，暂时不能使用）
事实上，我认为[chiplab](https://gitee.com/loongson-edu/chiplab?_from=gitee_search)提供的仿真框架十分优秀，但是在我进行CPU设计与仿真的时候发现，

在CPU搭建初期直接使用chiplab提供的仿真框架不符合一个CPU设计的流程：我们可能想要在实现完一条或者若干条指令之后立马对这些指令进行测试，但是因为chiplab的框架太集成，内部代码太复杂（文档中对于仿真框架的实现细节不是很清晰），当我的cpu只实现了一两条指令时，我无法使用chiplab的仿真框架进行流水线的初始验证，因此我参考[一生一芯](https://ysyx.oscc.cc)项目与[南京大学PA](https://ysyx.oscc.cc/docs/ics-pa/)
做了一个简单的仿真框架，在其中能够编写一些简单的裸机测试用例，当你完成一条指令之后，可以编写相应的c代码对这条指令单独进行测试与验证，将CPU的bug锁定在比较小的范围，在CPU核的功能完善之后再接入chiplab环境。


其中cpu-tests中的测试一大部分来源于[一生一芯](https://ysyx.oscc.cc)项目。

## 如何运行测试？
在‘cpu-tests’目录下输入‘make run ALL=XXX’,其中XXX为测试用例的名字（如 add.c，XXX为add），这个测试环境的搭建参考一生一芯讲义中的
npc测试环境搭建以及NEMU中的测试环境，其中实现了一键回归测试，在‘cpu-tests’目录下输入‘make run’，即可一键编译与仿真各个测试用例；如果需要记录波形，在‘cpu-tests’目录下输入‘make runvcd ALL=XXX’,其中XXX为测试用例的名字（如 add.c，XXX为add）并没有提供在追踪波形下的一键回归测试。

### 关于输出波形
在‘cpu-tests’目录下输入‘make runvcd ALL=XXX’,其中XXX为测试用例的名字（如 add.c，XXX为add），在仿真结束之后就会使用GTKWave打开记录的波形，只有输入‘runvcd’时仿真环境才会记录仿真波形，这样做的目的是：保存仿真波形是一件很耗时的事情，如果不需要查看波形就不保存。

当然你也可以自己在cpu-tests下自己实现测试用例，不过目前由于本人对于loongarch-gcc掌握不熟练，在某些情况下会编译出非对齐访存指令，这在loongarch架构中会产生中断，但是在这个版本的CPU中我还没有对特权架构进行设计（正在开发）。

## 关于AM与difftest
本项目中并没有实现完整的AM，只实现了trm中的halt()用于指示仿真的结束。

difftest来源于[Loongarch-NEMU](https://gitee.com/wwt_panache/la32r-nemu?_from=gitee_search)，同时使用方式也与[一生一芯](https://ysyx.oscc.cc)项目是一致的。

## 对Hit xxx Trap”的说明

在测试结束时仿真环境会产生一个‘Hit xxx Trap’的信息，当产生的是‘Hit GOOD Trap’时表示仿真程序运行到了结尾，并且运行中没有产生错误。

## 仿真环境以及工具版本
Verilator -> 4.227

GTKWave -> v3.3.104

GCC -> [chiplab](https://gitee.com/loongson-edu/chiplab?_from=gitee_search)中toolchain给出仓库中的realease最新版即可。

NEMU -> [chiplab](https://gitee.com/loongson-edu/chiplab?_from=gitee_search)中toolchain给出仓库中的realease最新版即可。

除了上述工具之外，还需要搭建chiplab环境，具体步骤可见[chiplab](https://gitee.com/loongson-edu/chiplab?_from=gitee_search)仓库，其中请配置好NEMU以及GCC，具体的步骤在chiplab官方仓库中也有。

## 本项目的不足
1. 基于PIPT的cache与TLB结构带来了巨大的性能损失，在理想情况下，每一次取指都需要等待2个时钟周期，每次访存都需要3个时钟周期。（由于时间关系来不及改进）
2. 深流水情况下，并没有实现的分支预测器，使得性能也存在巨大的损失。（理由同上）

3. 各个模块之间的时序十分耦合，在某个地方进行打拍的改动就会导致其他模块出错，这个可以使用握手信号来解决，但是在最初设计时并没有考虑到。

4. 软件预取指令并没有实现功能，只当做一条空指令。

5. 在龙芯试验箱上启动pmon引导程序还存在问题，主要表现在进入pmon的主线程之前的初始化中，在某些函数的函数调用前导指令中可能会存在轮训nand flash进入死循环的情况。

6. 并没有实现性能计数器，不能针对CPU架构进行针对性的改进。

7. 内存栅障指令实现比较粗暴，对于ibar指令，在exe阶段当做一条无条件跳转指令处理，跳转地址为ibar指令的PC+4。

## 参考项目
[一生一芯](https://ysyx.oscc.cc)项目

[南京大学PA](https://ysyx.oscc.cc/docs/ics-pa/)

[Loongarch-NEMU](https://gitee.com/wwt_panache/la32r-nemu?_from=gitee_search)

[chiplab](https://gitee.com/loongson-edu/chiplab?_from=gitee_search)

《龙芯架构32位精简版参考手册》可以从龙芯官网下载。https://www.loongson.cn/FileShow

LA32R 相关工具链请前往龙芯官方的 Chiplab 仓库下载 https://gitee.com/loongson-edu/chiplab 


