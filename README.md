# **distributed shark hands five-stage CPU base on LA32r**

How to use?
cpu-tests is programer, you can program yourself test script to test you design,and I use C++ to build the testbench with difftest.

## 目录结构
---------------
```
├── chiplab
│   ├── chip
│   ├── docs
│   ├── fpga
│   ├── IP
│   ├── sims
│   ├── software
│   └── toolchains
├── core
│   └── vsrc
├── cpu-tests
│   ├── am
│   ├── build
│   └── tests
├── doc
└── testbench
    ├── build
    └── include
```
------------
## 项目特征
本项目中的CPU实现了Loongarch32R非特权架构中的全部整数指令（特权架构与总线正在紧张推进中），目前完成了整数指令的仿真与测试。

**流水线**采用流水级之间握手机制实现分布式的阻塞控制。

**乘法器**为Booth-2位乘法器，计算32位乘法需要18个周期。

**除法器**为一位恢复余数绝对值除法，计算32位除法需要33个周期。

**更简单的仿真框架** 

## 关于更简单的仿真框架
事实上，我认为[chiplab](https://gitee.com/loongson-edu/chiplab?_from=gitee_search)提供的仿真框架十分优秀，但是在我进行CPU设计与仿真的时候发现，
直接使用chiplab提供的仿真框架不符合一个CPU设计的流程：我们可能想要在实现完一条或者若干条指令之后立马对这些指令进行测试，但是因为chiplab的框架太集成，内部代码太复杂（文档中对于仿真框架的实现细节不是很清晰），当我的cpu只实现了一两条指令时，我无法使用chiplab的仿真框架进行流水线的初始验证，因此我参考[一生一芯](https://ysyx.oscc.cc)项目与[南京大学PA](https://ysyx.oscc.cc/docs/ics-pa/)
做了一个简单的仿真框架，在其中能够编写一些简单的裸机测试用例，当你完成一条指令之后，可以编写相应的c代码对这条指令单独进行测试与验证，将CPU的bug锁定在比较小的范围，在CPU核的功能完善之后再接入chiplab环境。

其中cpu-tests中的测试一大部分来源于[一生一芯](https://ysyx.oscc.cc)项目。

## 如何运行测试？
在‘cpu-tests’目录下输入‘make run ALL=XXX’,其中XXX为测试用例的名字（如 add.c，XXX为add），这个测试环境的搭建参考一生一芯讲义中的
npc测试环境搭建以及NEMU中的测试环境，其中并没有实现一键回归测试（可能后续会添加）。

当然你也可以自己在cpu-tests下自己实现测试用例，不过目前由于本人对于loongarch-gcc掌握不熟练，在某些情况下会编译出非对齐访存指令，这在loongarch架构中会产生中断，但是在这个版本的CPU中我还没有对特权架构进行设计（正在开发）。

## 关于AM与difftest
本项目中并没有实现完整的AM，只实现了trm中的halt()用于指示仿真的结束。

difftest来源于[Loongarch-NEMU](https://gitee.com/wwt_panache/la32r-nemu?_from=gitee_search)，同时使用方式也与[一生一芯](https://ysyx.oscc.cc)项目是一致的。

## 对Hit xxx Trap”的说明

在测试结束时仿真环境会产生一个‘Hit xxx Trap’的信息，当产生的是‘Hit GOOD Trap’时表示仿真程序运行到了结尾，并且运行中没有产生错误。

## 参考项目
[一生一芯](https://ysyx.oscc.cc)项目

[南京大学PA](https://ysyx.oscc.cc/docs/ics-pa/)

[Loongarch-NEMU](https://gitee.com/wwt_panache/la32r-nemu?_from=gitee_search)

[chiplab](https://gitee.com/loongson-edu/chiplab?_from=gitee_search)

《龙芯架构32位精简版参考手册》可以从龙芯官网下载。https://www.loongson.cn/FileShow

LA32R 相关工具链请前往龙芯官方的 Chiplab 仓库下载 https://gitee.com/loongson-edu/chiplab 


