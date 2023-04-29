#include <common.h>

#include "VTop___024root.h"
#include "VTop__Dpi.h"
#include <svdpi.h>
#include "verilated_dpi.h"

#ifdef DIFFTEST

#define DIFF_PROXY NemuProxy
/* max commit width */
#define DIFFTEST_COMMIT_WIDTH 6

enum {
    STATE_RUNNING = 0,
    STATE_END,
    STATE_TIME_LIMIT,
    STATE_ABORT
};
enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };
enum { REF_TO_DUT, DUT_TO_REF };
enum { REF_TO_DIFFTEST, DUT_TO_DIFFTEST };
enum { DIFF_TO_REF_GR = 0, DIFF_TO_REF_ALL};
enum { REF_TO_DIFF_GR = 0, REF_TO_DIFF_ALL};


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
    uint8_t is_TLBFILL;
    uint8_t TLBFILL_index;
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
    
    /*check nemu and dut*/
    bool check_reg();

    bool sim_over;
    int commit_count;

    public:

    /* Trigger a difftest checking produre */
    int step(vluint64_t& main_time);

    /* Print dut core state info */
    void display();
    // 
    void end_test(int state);

    inline instr_commit_t *get_instr_commit(uint8_t index) {
        return &(dut.commit[index]);
    }
    inline arch_csr_state_t *get_csr_state() {
        return &(dut.csr);
    }
    inline arch_greg_state_t *get_greg_state() {
        return &(dut.regs);
    }



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



/**
 * Headers for Verilog DPI-C difftest interface
 * These hearders are called to copy signals of dut
 */
#define DIFFTEST_DPIC_FUNC_NAME(name) \
    v_difftest_##name

#define DIFFTEST_DPIC_FUNC_DECL(name) \
    extern "C" void DIFFTEST_DPIC_FUNC_NAME(name)


//for difftest's DPI-C

#define DPIC_ARG_BIT  uint8_t
#define DPIC_ARG_BYTE char
#define DPIC_ARG_INT  int
#define DPIC_ARG_LONG long long

// v_difftest_InstrCommit
#define INTERFACE_INSTR_COMMIT           \
  DIFFTEST_DPIC_FUNC_DECL (InstrCommit) ( \
    DPIC_ARG_BYTE coreid,                \
    DPIC_ARG_BYTE index,                 \
    DPIC_ARG_BIT  valid,                 \
    DPIC_ARG_LONG pc,                    \
    DPIC_ARG_INT  instr,                 \
    DPIC_ARG_BIT  skip,                  \
    DPIC_ARG_BIT  is_TLBFILL,            \
    DPIC_ARG_BYTE TLBFILL_index,         \
    DPIC_ARG_BIT  is_CNTinst,            \
    DPIC_ARG_LONG timer_64_value,        \
    DPIC_ARG_BIT  wen,                   \
    DPIC_ARG_BYTE wdest,                 \
    DPIC_ARG_LONG wdata,                 \
    DPIC_ARG_BIT  csr_rstat,             \
    DPIC_ARG_INT  csr_data               \
  )
  


// v_difftest_CSRState
#define INTERFACE_CSRREG_STATE           \
  DIFFTEST_DPIC_FUNC_DECL (CSRRegState) ( \
    DPIC_ARG_BYTE coreid,               \
    DPIC_ARG_LONG crmd,                 \
    DPIC_ARG_LONG prmd,                 \
    DPIC_ARG_LONG euen,                 \
    DPIC_ARG_LONG ecfg,                 \
    DPIC_ARG_LONG estat,                \
    DPIC_ARG_LONG era,                  \
    DPIC_ARG_LONG badv,                 \
    DPIC_ARG_LONG eentry,               \
    DPIC_ARG_LONG tlbidx,               \
    DPIC_ARG_LONG tlbehi,               \
    DPIC_ARG_LONG tlbelo0,              \
    DPIC_ARG_LONG tlbelo1,              \
    DPIC_ARG_LONG asid,                 \
    DPIC_ARG_LONG pgdl,                 \
    DPIC_ARG_LONG pgdh,                 \
    DPIC_ARG_LONG save0,                \
    DPIC_ARG_LONG save1,                \
    DPIC_ARG_LONG save2,                \
    DPIC_ARG_LONG save3,                \
    DPIC_ARG_LONG tid,                  \
    DPIC_ARG_LONG tcfg,                 \
    DPIC_ARG_LONG tval,                 \
    DPIC_ARG_LONG ticlr,                \
    DPIC_ARG_LONG llbctl,               \
    DPIC_ARG_LONG tlbrentry,            \
    DPIC_ARG_LONG dmw0,                 \
    DPIC_ARG_LONG dmw1                  \
  )

  // v_difftest_GRegState
#define INTERFACE_GREG_STATE \
    DIFFTEST_DPIC_FUNC_DECL (GRegState) (     \
        DPIC_ARG_BYTE coreid,                \
        DPIC_ARG_LONG gpr_0,                 \
        DPIC_ARG_LONG gpr_1,                 \
        DPIC_ARG_LONG gpr_2,                 \
        DPIC_ARG_LONG gpr_3,                 \
        DPIC_ARG_LONG gpr_4,                 \
        DPIC_ARG_LONG gpr_5,                 \
        DPIC_ARG_LONG gpr_6,                 \
        DPIC_ARG_LONG gpr_7,                 \
        DPIC_ARG_LONG gpr_8,                 \
        DPIC_ARG_LONG gpr_9,                 \
        DPIC_ARG_LONG gpr_10,                \
        DPIC_ARG_LONG gpr_11,                \
        DPIC_ARG_LONG gpr_12,                \
        DPIC_ARG_LONG gpr_13,                \
        DPIC_ARG_LONG gpr_14,                \
        DPIC_ARG_LONG gpr_15,                \
        DPIC_ARG_LONG gpr_16,                \
        DPIC_ARG_LONG gpr_17,                \
        DPIC_ARG_LONG gpr_18,                \
        DPIC_ARG_LONG gpr_19,                \
        DPIC_ARG_LONG gpr_20,                \
        DPIC_ARG_LONG gpr_21,                \
        DPIC_ARG_LONG gpr_22,                \
        DPIC_ARG_LONG gpr_23,                \
        DPIC_ARG_LONG gpr_24,                \
        DPIC_ARG_LONG gpr_25,                \
        DPIC_ARG_LONG gpr_26,                \
        DPIC_ARG_LONG gpr_27,                \
        DPIC_ARG_LONG gpr_28,                \
        DPIC_ARG_LONG gpr_29,                \
        DPIC_ARG_LONG gpr_30,                \
        DPIC_ARG_LONG gpr_31                 \
    )



#endif






