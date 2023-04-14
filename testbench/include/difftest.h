#include <common.h>

// #include "VTop___024root.h"
// #include "VTop__Dpi.h"
// #include <svdpi.h>
// #include "verilated_dpi.h"

#ifdef DIFFTEST

#define DIFF_PROXY NemuProxy
/* max commit width */
#define DIFFTEST_COMMIT_WIDTH 6

enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };
enum {
    STATE_RUNNING = 0,
    STATE_END,
    STATE_TIME_LIMIT,
    STATE_ABORT
};

typedef struct {
    uint32_t gpr[32];
} arch_greg_state_t;

typedef struct __attribute__((packed)) {
    uint32_t crmd;
    uint32_t prmd;
    uint32_t euen;
    uint32_t ecfg;
    uint32_t era, badv, eentry;
    uint32_t tlbidx, tlbehi, tlbelo0, tlbelo1;
    uint32_t asid, pgdl, pgdh;
    uint32_t save0, save1, save2, save3;
    uint32_t tid, tcfg, tval; // ticlr;
    uint32_t llbctl, tlbrentry, dmw0, dmw1;
    uint32_t estat;
    uint32_t this_pc;
} arch_csr_state_t;

typedef struct {
    uint8_t valid = 0;
    uint32_t pc;
    uint32_t inst;
    uint8_t skip;
    uint8_t is_CNTinst;
    uint64_t timer_64_value;
    uint8_t wen;
    uint8_t wdest;
    uint32_t wdata;
    uint8_t csr_rstat;
    uint32_t csr_data;
} instr_commit_t;


typedef struct {
    instr_commit_t commit[DIFFTEST_COMMIT_WIDTH];
    arch_greg_state_t regs;
    arch_csr_state_t csr;
} difftest_core_state_t;


typedef uint64_t paddr_t;
typedef uint64_t vaddr_t;

class NemuProxy {
private:
    void* handle = NULL;
public:
    /* coreid is be used to distinguish multi-core */
    NemuProxy();
    ~NemuProxy();

    void (*memcpy)(paddr_t nemu_addr, void* dut_buf, size_t n, bool direction);
    void (*regcpy)(void* dut, bool direction, bool do_csr);
    void (*csrcpy)(void* dut, bool direction);
    void (*uarchstatus_cpy)(void* dut, bool direction);
    int (*store_commit)(uint64_t saddr, uint64_t sdata);
    void (*exec)(uint64_t n);
    vaddr_t (*guided_exec)(void* disambiguate_para);
    void (*raise_intr)(uint64_t no);
    void (*isa_reg_display)();
    void (*tlbfill_index_set)(uint32_t index);
    void (*timercpy)(void* dut);
    void (*estat_sync)(uint32_t index, uint32_t mask);
    int  (*check_end)();
};

class DiffTest{
    private:
    DIFF_PROXY *proxy = NULL;
    difftest_core_state_t dut;
    difftest_core_state_t ref;

    uint32_t *dut_regs_ptr = (uint32_t *)&dut.regs;
    uint32_t *ref_regs_ptr = (uint32_t *)&ref.regs;

    /* copy dut initialized state to ref when instruction is the first instruction */
    void do_first_instr_commit();

    /* nemu execute one instruction */
    void do_instr_commit(int index);

    public:
    void init_difftest();
    /* Trigger a difftest checking produre */
    int step(vluint64_t& main_time);

    /* Print dut core state info */
    void display();

    DiffTest();
    ~DiffTest();

};

#define check_and_assert(func)                \
    do {                                      \
        if (!func) {                          \
            printf("ERROR: %s\n", dlerror()); \
            assert(func);                     \
        }                                     \
    } while (0);

#endif




