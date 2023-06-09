# **Cache 设计思路**
============================================

**设计特征**
1. 尽最大可能的参数化配置，可以在实例化时进行参数配置，如cache总大小；目前还无法优雅地做到单个CACHE模型屏蔽或者设置可变数量的输入输出接口，因此在提高组相联关联度时需要修改内部接口，目前的替换策略为伪lru，因此目前只支持两路组相联。
2. 状态机控制的阻塞式cache。
3. ICACHE大小4KB，DCACHE大小为4KB。
4. Dcache采用写回法设计。
5. Word字长为32-bit。
6. 一个cache行内有16个Word，也就是一个cache line占512-bit。
7. 单个Cache一共有4KB的空间缓存数据。
8. ICache 状态机有3个状态，分别为 idle（等待一个读写请求）、 scanf（访问meta data 与 cache data，并且判断是否hit）、 miss（通过axi总线读取缺失的cache line）。
9. DCache状态机有3个状态，分别为idle（等待一个读写请求）、scanf（访问meta data 与 cache data，并且判断是否hit，替换的cache line是否dirt）、miss（通过axi总线读取缺失的cache line）、write_data（写回将要被替换的dirt块）。

**在本项目提供的测试程序下，Cache命中率如下**
1. ICache 命中率 98.61%
2. DCache 命中率 97.89%

**关于仿真环境下提供的一些display的宏**
**在core/vsrc/include/cache_defines.v**中定义了一些只有在仿真环境下才有效的宏，用于查看cache的工作状态以及统计cache hit与miss的次数。
1. display_cache_missinfo 用于输出cache miss时的一些信息。
2. Display_cache_hitrate 用于统计cache hit与miss的次数。

**关于cache_util**
在core/vsrc/cache/cache_util.v中定义了一些模块，其中包括：
1. **Sramlike** 用于模拟一个同步读写的ram，cache中使用的同步ram都是基于这个模块。
2. **Data_mask** 用于根据数据地址的offset字段，选取cache line中的word数据。
3. **mask_extend** 用于拓展mask，例如：本来mask是4位的，用于指示32-bit中的4个字节哪些要写入哪些不写入，这个拓展模块的作用是将byte的写使能拓展为bit的写使能，输出是一个32-bit的bit-mask、
4. **Cacheline_Mask** 用于得到一个cahce line上的bit-mask，当写cache时，我们需要将写入数据放到cache line的对应位置，在硬件上可以实现为：old_data & (~mask) | new_data & mask，这里mask是一个bit-mask；例如：当我们的**mask**为4'b0011时，**old_data** 为4'b1010,**new_data** 为4'b1111,根据上述方式生成的写入数据为：4'b1011。 


## **下面以二路组相联，一行8个word，大小为8KB的cache为例，介绍cache的各个细节**

### 地址编码

地址切分情况：
| Tag    | group_addr |  Offset |  
| ----------- | ----------- |   ----------- | 
| 31:12     | 11:5       |  4:0       | 

**Offset（组内偏移）** 用于标识出要读写的数据具体在一路cache中的哪一个字节。本设计中，一路cache行存储8个32位数据，也就是一共有32个字节，对应于5位的偏移地址。

**group_addr（组地址）** 对于内存地址来说，应该被映射到cache的哪一个组，该部分也指示出了cache内一共有多少组。

**Tag（标签）** 用于标识数据存储在组内的哪一路cache中。


### 标志寄存器

**Valid位** ：用于标识数据是否有效。

**Dirty位（写回法中使用）** ：用于标识数据是否被修改过还未写回主存。

**LRU位（最近最少用标志）** ：用于标志替换时应该将哪一路数据替换出Cache。

### Cache块的组织
| bank0|bank1|bank2|bank3|bank4|bank5|bank6|bank7|
|------|-----|-----|-----|-----|-----|-----|-----|
| 32bit|32bit|32bit|32bit|32bit|32bit|32bit|32bit|

所有Cache行采用verilog模拟SRam 实现。

### 写回法

**主存写策略**

1. Cache命中时，当Cache中写入数据时，不直接同步更新内存中的数据，而是在cache中标记更新的块为 **”脏“** 。等该块被替换出Cache时，才将其写回内存中。
2. Cache未命中时，将目标数据读入Cache并且修改，标记为 **”脏“** 。  

**Cache数据替换策略**

对于2路组相联来说，每一组都设置了一位LRU位标志，0表示way0最近没有使用，为1同理。如果被替换的块是 **”脏“** ，那么还需要将数据写回内存。

当命中时需要将LRU标志位设置为对应的标志，即命中way0时设置为1表示最近way1未被使用；命中way1同理。

### 写直达法
写直达法在Cache数据替换策略上与写回法是一致的，不同的是主存写策略。

**主存写策略**

1. Cache命中时，当Cache中写入数据时，同时将数据写入内存中。
2. Cache未命中时，将目标数据读入Cache并且修改，再写回内存中 。 

## cache状态机设计
1. idle： 根据group_addr读取组内两路的tag与cache行。
2. scanf： 比较两路的tag，如果 **读命中** 则输出数据，转idle；如果 **写命中** 则将修改好的数据写入cache，之后进入idle。**写回法中**，如果替换的不是脏块，**读写未命中** 都转到miss，如果是脏块，将数据写回内存。
3. miss： 写回法中发生替换时将 **“脏”** 块写回内存。转Write_data。
4. Write_data： 将从内存中读出的数据写入cache行中。转idle，写未命中时设置脏位。


