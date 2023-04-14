
#include <testbench.h>

char *difftest_ref_so;

void CpuTestBench :: init_testbench(int argc, char** argv){
    contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    dut = new VTop;
    Verilated::traceEverOn(true);
    sim_time=0;
    #ifdef WTRACE
    m_trace = new VerilatedVcdC;
    dut->trace(m_trace,5);
    m_trace->open("waveform.vcd");
    #endif
    ram->init_mem(NULL);
    #ifdef DIFFTEST
    difftest_ref_so=argv[1];
    //printf("%s\n",difftest_ref_so);
    ref = new DiffTest();
    #endif

}

void CpuTestBench :: eval(){
    uint32_t inst;
    while (! contextp->gotFinish()){
        dut->clk ^=1;
        if(dut->pc_valid){
            ram->pmem_read(dut->PC,&inst);
            dut->inst_ready = 1;

            dut->inst=inst;
        }
        
        dut->eval();

        #ifdef WTRACE
        m_trace->dump(sim_time);
        #endif
        if(sim_time > 30) break;
        sim_time++;
    }
}

void CpuTestBench :: reset_rtl(){
    while(sim_time<5){
        dut->clk ^= 1;
        dut->inst=0; 
        dut->reset = 1;
        dut->inst_ready = 0;
        
        dut->eval();
        #ifdef WTRACE
        m_trace->dump(sim_time);
        #endif
        sim_time++;
    }
    dut->reset = 0;
}

void CpuTestBench :: end_testbench(){

    #ifdef WTRACE
    m_trace->close();
    #endif

    delete dut;
    delete contextp;
    exit(EXIT_SUCCESS);
}


CpuTestBench:: CpuTestBench(){
    
    ram = new Memory();
}

CpuTestBench::~CpuTestBench(){
    delete ref;
    delete ram;
    ref = NULL;
    #ifdef DIFFTEST
    ram = NULL;
    #endif

}