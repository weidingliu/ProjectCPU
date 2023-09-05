# AXIMem访存模拟
========================================

以读写端口分离的状态机实现，在设计中读写各自一套状态机。


由于设计中存在axi birdge，因此每次读写请求都需要等待两个周期才能返回数据，如果是单纯的AXI访存模型的话则只需要等待一个周期就能够返回数据。

使用DPI-C机制使得verilog能够访问使用c进行模拟的memory内的数据，也就是说我们的memory是使用c编写的，这使得在testbench层面使用Makefile构建一个一键编译测试用例来初始化memory成为一个便捷的事情。

具体的定义可以查看[Verilator官方文档](https://www.veripool.org/verilator/)
