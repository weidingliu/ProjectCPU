
#include <testbench.h>


char *difftest_ref_so;
DiffTest *ref = NULL;
uint8_t* pmem_start = NULL;
int mem_size=0;
void *get_img_start(){
    return pmem_start;
}
int get_img_size(){
    return mem_size;
}

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
    // printf("---%s\n",);
    ram->init_mem(argv[2]);
    pmem_start = ram->mem;
    mem_size= ram->mem_size;
    
    #ifdef DIFFTEST
    difftest_ref_so=argv[1];
    //printf("%s\n",difftest_ref_so);
    ref = new DiffTest();
    #endif

}

void CpuTestBench :: eval(){
    uint32_t inst;
    uint32_t rdata;
    
    while (! contextp->gotFinish()){
        dut->clk ^=1;
        if(dut->pc_valid){
            // printf("sdffff %x-----\n",dut->PC);
            ram->pmem_read(dut->PC,&inst);
            dut->inst_ready = 1;

            dut->inst=inst;
        }
        
        if(dut->en & (dut->clk != 1)){
            if(dut->we){
                ram->pmem_write(dut->addr,dut->wdata,dut->wmask);
                #ifdef MTRACE
                printf("WRITE-> addr : %x data : %x mask: %x\n",dut->addr,dut->wdata,dut->wmask);
                #endif
            }
            else {
                
                ram->pmem_read(dut->addr,&rdata);
                dut->rdata = rdata;
                #ifdef MTRACE
                printf("READ-> addr : %x data : %x\n",dut->addr,rdata);
                #endif
            }
        }
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

        
        if(sim_time > 1000) break;
        sim_time++;
    }

    // printf("adfgddddddddddfg\n");
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
    ref->end_test(state);
    
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