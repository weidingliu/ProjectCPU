
#include <testbench.h>

char *difftest_ref_so;
#ifdef DIFFTEST
DiffTest *ref = NULL;
#endif

#if defined INTER_MEM
uint8_t* pmem_start = NULL;
int mem_size=0;
// #else 
// #include <Memory.h>
#endif
void *get_img_start(){
    return pmem_start;
}
int get_img_size(){
    return mem_size;
}

void CpuTestBench :: init_testbench(int argc, char** argv){
    contextp->commandArgs(argc, argv);

    #ifdef DIFFTEST
    difftest_ref_so=argv[1];
    //printf("%s\n",difftest_ref_so);
    ref = new DiffTest();
    #endif
    // printf("---%s\n",);
    #if defined INTER_MEM
    ram->init_mem(argv[2]);
    pmem_start = ram->mem;
    mem_size= ram->mem_size;
    #else 
        init_mem(argv[2]);

    #endif
    

}

void CpuTestBench :: eval(){
    uint32_t inst;
    uint32_t rdata;
    
    while (! contextp->gotFinish()){
        dut->clk ^=1;
        #ifdef INTER_MEM
        if(dut->pc_valid){
            // printf("sdffff %x-----\n",dut->PC);
            ram->pmem_read(dut->PC,&inst);
            dut->inst_ready = 1;

            dut->inst=inst;
        }
        
        if(dut->en & (dut->clk != 1)){
            if(dut->we){
                ram->pmem_write(dut->addr,dut->wdata,dut->wmask);
                
            }
            else {
                
                ram->pmem_read(dut->addr,&rdata);
                dut->rdata = rdata;
                
            }
        }
        #endif
        //printf("%d\n",dut->clk);
        

        #ifdef DIFFTEST
        
        
        if(dut->clk != 0){
            state =ref->step(sim_time);
        }
        // printf("dfgg %ld\n",sim_time);
        if(state==STATE_ABORT || state==STATE_END){
            // printf("adfgdfg\n");
            break;
        }
        #endif
        dut->eval();
        #ifdef WTRACE
        m_trace->dump(sim_time);
        #endif
        // printf("dfgg %ld\n",sim_time);
        
        // if(sim_time > 1000) break;
        sim_time++;
    }

    // printf("adfgddddddddddfg\n");
}

void CpuTestBench :: reset_rtl(){
    while(sim_time<5){
        dut->clk ^= 1;
        #ifdef INTER_MEM
        dut->inst=0; 
        dut->inst_ready = 0;
        #endif
        dut->reset = 1;
        dut->eval();
        #ifdef WTRACE
        m_trace->dump(sim_time);
        #endif
        sim_time++;
    }
    dut->reset = 0;
}

void CpuTestBench :: end_testbench(){
    #ifdef DIFFTEST
    ref->end_test(state);
    #endif
    
    #ifdef WTRACE
    m_trace->close();
    #endif

    delete dut;
    delete contextp;
    exit(EXIT_SUCCESS);
}


CpuTestBench:: CpuTestBench(){
    contextp = new VerilatedContext;
    dut = new VTop;

    #ifdef INTER_MEM
    ram = new Memory();
    #endif

    Verilated::traceEverOn(true);
    sim_time=0;
    #ifdef WTRACE
    m_trace = new VerilatedVcdC;
    dut->trace(m_trace,5);
    m_trace->open("waveform.vcd");
    #endif
}

CpuTestBench::~CpuTestBench(){
    #ifdef INTER_MEM
    delete ram;
    ram = NULL;
    #endif
    #ifdef DIFFTEST
    delete ref;
    ref = NULL;

    #endif

}