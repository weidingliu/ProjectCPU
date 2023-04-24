#include <difftest.h>
#include <debug.h>
//#include<testbench.h>

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

bool DiffTest::check_reg(){
    fflush(NULL);
    // printf("----dut %x ref %x \n",dut.commit[0].pc,ref.csr.this_pc);
    // printf("%08x   %08x\n",dut.commit[0].pc,dut.commit[0].inst);
    for (int i=0;i<32;i++){
        // printf("%x %x\n",dut_regs_ptr[i],ref_regs_ptr[i]);
        if(dut_regs_ptr[i] != ref_regs_ptr[i]){
            printf("%d dut: %x ref :%x\n",i,dut_regs_ptr[i],ref_regs_ptr[i]);
            printf("====================================\n");
            printf("=========== REG FAIL ===============\n");
            display();
            printf("====================================\n");
            fflush(NULL);
            return false;
        }
    }

    if(dut.commit[0].pc != ref.csr.this_pc){
        
        printf("===================================\n");
        printf("=========== PC FAIL ===============\n");
        printf("ref PC is %08x dut PC is %08x\n",ref.csr.this_pc,dut.commit->pc);
        printf("===================================\n");
        display();
        printf("===================================\n");
        fflush(NULL);
        return false;
    }

    // //display();
    
    return true;
}
extern int mem_size;
int DiffTest :: step(vluint64_t& main_time){
    if(sim_over) {
        // printf("==========================================\n");
        // printf("==========================================\n");
        printf("==========================================\n");
        printf("================ DIFFTEST END ============\n");
        printf("==========================================\n");
        printf("\n");
        return STATE_END;
    }
    do_first_instr_commit();

    if(dut.commit[0].valid){
        do_instr_commit(0);
        commit_count++;
    }
    if(dut.commit[0].valid && !check_reg()){
        return STATE_ABORT;
    }
    if(commit_count == mem_size) sim_over = true;
    
    return STATE_RUNNING;
}

extern void *get_img_start();
extern int get_img_size();
void DiffTest::do_first_instr_commit() {
    // uint8_t me[get_img_size()];
    if (dut.commit[0].valid && commit_count==0) {
        printf("The first instruction of core has commited. Difftest enabled.\n");
       if(get_img_start()==NULL) panic("img_start fail!");
        dut.csr.this_pc = dut.commit[0].pc;
        proxy->memcpy(0x1c000000, get_img_start(), get_img_size(), DIFFTEST_TO_REF);
        // proxy->memcpy(0x0,me , get_img_size(), REF_TO_DUT);
        // printf("%08x\n",*((uint32_t *)me+1));

        // munmap(get_img_start(), EMU_RAM_SIZE);
        proxy->regcpy(dut_regs_ptr, DIFFTEST_TO_REF, DIFF_TO_REF_ALL);
        proxy->csrcpy((void *)&dut.csr,DIFFTEST_TO_REF);
        
    }
}

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
    // printf("sdfdg\n");
    proxy->exec(1);
    proxy->regcpy(ref_regs_ptr,REF_TO_DUT,REF_TO_DIFF_ALL);
    // printf("sdaff\n");
    // printf("df %p\n",(void *)&ref.csr);
    // proxy->csrcpy((void *)&ref.csr,REF_TO_DUT);
    // proxy->csrcpy(ref_regs_ptr,DIFFTEST_TO_REF);

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
    sim_over = false;
    commit_count=0;
}

DiffTest::~DiffTest() {
    delete proxy;
    proxy = NULL;
}


#define difftest ref

#define RETURN_NO_NULL \
  if (ref == NULL) return;


extern DiffTest* difftest;

INTERFACE_INSTR_COMMIT {
    RETURN_NO_NULL
    auto packet = difftest->get_instr_commit(index);
    packet->valid    = valid;
    if (packet->valid) {
        packet->pc            = pc;
        packet->inst          = instr;
        packet->skip          = skip;
        packet->is_TLBFILL    = is_TLBFILL;
        packet->TLBFILL_index = TLBFILL_index;
        packet->is_CNTinst    = is_CNTinst;
        packet->timer_64_value= timer_64_value;
        packet->wen           = wen;
        packet->wdest         = wdest;
        packet->wdata         = wdata;
        packet->csr_rstat     = csr_rstat;
        packet->csr_data      = csr_data ;
    }
}

// INTERFACE_EXCP_EVENT {
//     RETURN_NO_NULL
//     auto packet = difftest[coreid]->get_excp_event();
//     packet->excp_valid= excp_valid;
//     packet->eret      = eret;
//     packet->interrupt = intrNo;
//     packet->exception = cause;
//     packet->exceptionPC = exceptionPC;
//     packet->exceptionIst = exceptionInst;
// }

// INTERFACE_TRAP_EVENT {
//     RETURN_NO_NULL
//     auto packet = difftest[coreid]->get_trap_event();
//     packet->valid    = valid;
//     packet->code     = code;
//     packet->pc       = pc;
//     packet->cycleCnt = cycleCnt;
//     packet->instrCnt = instrCnt;
// }

// INTERFACE_STORE_EVENT {
//     RETURN_NO_NULL
//     auto packet = difftest[coreid]->get_store_event(index);
//     packet->valid = valid;
//     if (packet->valid) {
//         packet->paddr = storePAddr;
//         packet->vaddr = storeVAddr;
//         packet->data = storeData;
//     }
// }

// INTERFACE_LOAD_EVENT {
//     RETURN_NO_NULL
//     auto packet = difftest[coreid]->get_load_event(index);
//     packet->valid = valid;
//     if (packet->valid) {
//         packet->paddr = paddr;
//         packet->vaddr = vaddr;
//     }
// }

// INTERFACE_CSRREG_STATE {
//     RETURN_NO_NULL
//     auto packet = difftest[coreid]->get_csr_state();
//     packet->crmd = crmd;
//     packet->prmd = prmd;
//     packet->euen = euen;
//     packet->ecfg = ecfg;
//     packet->estat = estat;
//     packet->era = era;
//     packet->badv = badv;
//     packet->eentry = eentry;
//     packet->tlbidx = tlbidx;
//     packet->tlbehi = tlbehi;
//     packet->tlbelo0 = tlbelo0;
//     packet->tlbelo1 = tlbelo1;
//     packet->asid = asid;
//     packet->pgdl = pgdl;
//     packet->pgdh = pgdh;
//     packet->save0 = save0;
//     packet->save1 = save1;
//     packet->save2 = save2;
//     packet->save3 = save3;
//     packet->tid = tid;
//     packet->tcfg = tcfg;
//     packet->tval = tval;
// //    packet->ticlr = ticlr;
//     packet->llbctl = llbctl;
//     packet->tlbrentry = tlbrentry;
//     packet->dmw0 = dmw0;
//     packet->dmw1 = dmw1;
// }


INTERFACE_GREG_STATE {
    RETURN_NO_NULL
    auto packet = difftest->get_greg_state();
    packet->gpr[ 0] = gpr_0;
    packet->gpr[ 1] = gpr_1;
    packet->gpr[ 2] = gpr_2;
    packet->gpr[ 3] = gpr_3;
    packet->gpr[ 4] = gpr_4;
    packet->gpr[ 5] = gpr_5;
    packet->gpr[ 6] = gpr_6;
    packet->gpr[ 7] = gpr_7;
    packet->gpr[ 8] = gpr_8;
    packet->gpr[ 9] = gpr_9;
    packet->gpr[10] = gpr_10;
    packet->gpr[11] = gpr_11;
    packet->gpr[12] = gpr_12;
    packet->gpr[13] = gpr_13;
    packet->gpr[14] = gpr_14;
    packet->gpr[15] = gpr_15;
    packet->gpr[16] = gpr_16;
    packet->gpr[17] = gpr_17;
    packet->gpr[18] = gpr_18;
    packet->gpr[19] = gpr_19;
    packet->gpr[20] = gpr_20;
    packet->gpr[21] = gpr_21;
    packet->gpr[22] = gpr_22;
    packet->gpr[23] = gpr_23;
    packet->gpr[24] = gpr_24;
    packet->gpr[25] = gpr_25;
    packet->gpr[26] = gpr_26;
    packet->gpr[27] = gpr_27;
    packet->gpr[28] = gpr_28;
    packet->gpr[29] = gpr_29;
    packet->gpr[30] = gpr_30;
    packet->gpr[31] = gpr_31;
}
