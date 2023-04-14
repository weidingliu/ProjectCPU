#include <difftest.h>


// not compare estat
static const int DIFFTEST_NR_GREG = sizeof(arch_greg_state_t) / sizeof(uint32_t);
static const int DIFFTEST_NR_CSRREG = sizeof(arch_csr_state_t) / sizeof(uint32_t);
static const int DIFFTEST_NR_REG = DIFFTEST_NR_GREG + DIFFTEST_NR_CSRREG;

static const char* reg_name[DIFFTEST_NR_REG] = {
        "r0",      "ra",     "tp",      "sp",      "a0",      "a1",     "a2",        "a3",        "a4",      "a5",
        "a6",      "a7",     "t0",      "t1",      "t2",      "t3",     "t4",        "t5",        "t6",      "t7",
        "t8",      " x",     "fp",      "s0",      "s1",      "s2",     "s3",        "s4",        "s5",      "s6",
        "s7",      "s8",
        "crmd",    "prmd",   "euen",    "ecfg",    "era",     "badv",   "eentry",    "tlbidx",    "tlbehi",  "tlbelo0",
        "tlbelo1", "asid",   "pgdl",    "pgdh",    "save0",   "save1",  "save2",     "save3",     "tid",     "tcfg",
        "tval",    "llbctl", "tlbrentry", "dmw0",  "dmw1",    "estat",   "this_pc"
};

static const char compare_mask[DIFFTEST_NR_CSRREG] = {
    1,  1,  1,  1,  1,  1,  1,  1,  1,  1,
    1,  1,  1,  1,  1,  1,  1,  1,  1,  1,
    1,  1,  1,  1,  1,  0,  1
};

int DiffTest :: step(vluint64_t& main_time){

    return STATE_RUNNING;
}

// extern void *get_img_start();
// void Difftest::do_first_instr_commit() {
//     if (dut.commit[0].valid && dut.commit[0].pc == FIRST_INST_ADDRESS) {
//         printf("The first instruction of core %d has commited. Difftest enabled.\n", coreid);

//         proxy->memcpy(0x0, get_img_start(), EMU_RAM_SIZE, DIFFTEST_TO_REF);
//         munmap(get_img_start(), EMU_RAM_SIZE);
//         proxy->regcpy(dut_regs_ptr, DIFFTEST_TO_REF, DIFF_TO_REF_ALL);
//     }
// }

void DiffTest::do_instr_commit(int i) {
    // progress = true;

    /* rdcntv{L/H}.w */
    // if (dut.commit[i].is_CNTinst) {
    //     // printf("rdcntv / rdcntid indt from dut, copy result to nemu: %d\n",dut.commit[i].wdata);
    //     uint32_t timer_low, timer_high;
    //     timer_low = (uint32_t)((dut.commit[i].timer_64_value) & 0x00000000ffffffff);
    //     timer_high = (uint32_t)(((dut.commit[i].timer_64_value) & 0xffffffff00000000)>>32);
    //     struct la32_timer timer;
    //     timer.counter_id = dut.csr.tid;
    //     timer.stable_counter_l = timer_low;
    //     timer.stable_counter_h = timer_high;
    //     timer.time_val = dut.csr.tval;
    //     // printf("timer64: 0x%lx, low: 0x%x, high: 0x%x\n",dut.commit[i].timer_64_value,timer_low,timer_high);
    //     proxy->timercpy(&timer);
    // }

    /* single step exec */
    // auto start = std::chrono::steady_clock::now();
    proxy->exec(1);
    // auto end = std::chrono::steady_clock::now();
    // nemu_nano_seconds += std::chrono::nanoseconds(end-start);


}


void DiffTest::display() {
    fflush(NULL);
    printf("\n==============  DUT Regs  ==============\n");
    for (int i = 0; i < 32; i ++) {
        printf("%s(r%2d): 0x%08x ", reg_name[i], i, dut_regs_ptr[i]);
        if (i % 4 == 3) printf("\n");
    }
    printf("pc: 0x%08x\n", dut.csr.this_pc);
    printf("CRMD: 0x%08x,    PRMD: 0x%08x,   EUEN: 0x%08x\n", dut.csr.crmd, dut.csr.prmd, dut.csr.euen);
    printf("ECFG: 0x%08x,   ESTAT: 0x%08x,    ERA: 0x%08x\n", dut.csr.ecfg, dut.csr.estat, dut.csr.era);
    printf("BADV: 0x%08x,  EENTRY: 0x%08x, LLBCTL: 0x%08x\n", dut.csr.badv, dut.csr.eentry, dut.csr.llbctl);
    printf("cpu.ll_bit: %d\n", dut.csr.llbctl & 0x1);
    printf("INDEX: 0x%08x, TLBEHI: 0x%08x, TLBELO0: 0x%08x, TLBELO1: 0x%08x\n", dut.csr.tlbidx, dut.csr.tlbehi, dut.csr.tlbelo0, dut.csr.tlbelo1);
    printf("ASID: 0x%08x, TLBRENTRY: 0x%08x, DMW0: 0x%08x, DMW1: 0x%08x\n", dut.csr.asid, dut.csr.tlbrentry, dut.csr.dmw0, dut.csr.dmw1);
    printf("*******************************************************************************\n");
#ifdef SIMU_TRACE
    fprintf(trace_out,"\n==============  DUT Regs  ==============\n");
        for (int i = 0; i < 32; i ++) {
        fprintf(trace_out,"%s(r%2d): 0x%08x ", reg_name[i], i, dut_regs_ptr[i]);
        if (i % 4 == 3) fprintf(trace_out,"\n");
    }
    fprintf(trace_out,"pc: 0x%08x\n", dut.csr.this_pc);
    fprintf(trace_out,"CRMD: 0x%08x,    PRMD: 0x%08x,   EUEN: 0x%08x\n", dut.csr.crmd, dut.csr.prmd, dut.csr.euen);
    fprintf(trace_out,"ECFG: 0x%08x,   ESTAT: 0x%08x,    ERA: 0x%08x\n", dut.csr.ecfg, dut.csr.estat, dut.csr.era);
    fprintf(trace_out,"BADV: 0x%08x,  EENTRY: 0x%08x, LLBCTL: 0x%08x\n", dut.csr.badv, dut.csr.eentry, dut.csr.llbctl);
    fprintf(trace_out,"cpu.ll_bit: %d\n", dut.csr.llbctl & 0x1);
    fprintf(trace_out,"INDEX: 0x%08x, TLBEHI: 0x%08x, TLBELO0: 0x%08x, TLBELO1: 0x%08x\n", dut.csr.tlbidx, dut.csr.tlbehi, dut.csr.tlbelo0, dut.csr.tlbelo1);
    fprintf(trace_out,"ASID: 0x%08x, TLBRENTRY: 0x%08x, DMW0: 0x%08x, DMW1: 0x%08x\n", dut.csr.asid, dut.csr.tlbrentry, dut.csr.dmw0, dut.csr.dmw1);
    fprintf(trace_out,"*******************************************************************************\n");
#endif
    printf("\n==============  REF Regs  ==============\n");
    fflush(NULL);

    proxy->isa_reg_display();
    fflush(NULL);
}


DiffTest::DiffTest() {
    proxy = new DIFF_PROXY();
}

DiffTest::~DiffTest() {
    delete proxy;
    proxy = NULL;
}
