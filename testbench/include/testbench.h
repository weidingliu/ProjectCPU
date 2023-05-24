
#include <common.h>
#include <difftest.h>
#include <Memory.h>

// public class ObjectPool{
//     public static testbench=new CpuTestBench();
//     public static memory = new Memory();
// }
#ifdef DIFFTEST
extern   DiffTest *ref;
#endif
extern uint8_t *pmem_start; 
extern int mem_size;


class CpuTestBench {
    public:
    VerilatedContext* contextp;
    VTop *dut;
    vluint64_t sim_time;
    int state = STATE_RUNNING;

    #ifdef WTRACE
    VerilatedVcdC *m_trace;
    #endif
    
    #ifdef INTER_MEM
    Memory *ram = NULL;
    #endif

    void init_testbench(int argc, char** argv);
    void reset_rtl();
    void eval();
    void end_testbench();
    
    CpuTestBench();
    ~CpuTestBench();


};



