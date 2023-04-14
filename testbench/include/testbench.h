
#include <common.h>
#include <difftest.h>
#include <Memory.h>

// public class ObjectPool{
//     public static testbench=new CpuTestBench();
//     public static memory = new Memory();
// }



class CpuTestBench {
    public:
    VerilatedContext* contextp;
    VTop *dut;
    vluint64_t sim_time;

    #ifdef WTRACE
    VerilatedVcdC *m_trace;
    #endif
    
    #ifdef DIFFTEST
    DiffTest *ref = NULL;
    #endif

    Memory *ram = NULL;

    void init_testbench(int argc, char** argv);
    void reset_rtl();
    void eval();
    void end_testbench();
    
    CpuTestBench();
    ~CpuTestBench();


};



