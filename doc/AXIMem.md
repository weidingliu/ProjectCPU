# AXIMem访存模拟
========================================

以读写端口分离的状态机实现，在设计中读写各自一套状态机。


由于设计中存在axi birdge，因此每次读写请求都需要等待两个周期才能返回数据，如果是单纯的AXI访存模型的话则只需要等待一个周期就能够返回数据。