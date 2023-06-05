
verilator是一款开源的verilog仿真工具, 在"一生一芯"项目中, 你将会使用它来进行RTL功能仿真, 从而验证你编写的RTL代码.

**安装Verilator**
-------------------------------
请在官网或者Verilator官方文档中找到安装verilator的步骤, 然后按照从git安装的相应步骤进行操作. 我们之所以不采用apt-get安装, 是因为其版本较老.

本设计使用DPI-C机制实现硬件与仿真环境的数据传输，比如：DIFFTEST的实现就是基于DPI-C，还有可以利用这个机制来实现仿真环境的CPU访存行为，但是需要注意的是，这个机制只能在仿真环境使用，并不能用于综合。

**参考资料**
---------------------------------

详细过程可以参考[Verilator 官方文档](https://verilator.org/guide/latest/copyright.html)

关于DPI-C机制可以参考[DPI进阶](https://blog.csdn.net/zhajio/article/details/109362408?ops_request_misc=%257B%2522request%255Fid%2522%253A%2522166726769616782425180684%2522%252C%2522scm%2522%253A%252220140713.130102334.pc%255Fblog.%2522%257D&request_id=166726769616782425180684&biz_id=0&utm_medium=distribute.pc_search_result.none-task-blog-2~blog~first_rank_ecpm_v1~rank_v31_ecpm-2-109362408-null-null.nonecase&utm_term=DPI)

