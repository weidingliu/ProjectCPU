
#include <common.h>

#if defined INTER_MEM
class Memory{
    public:

    uint8_t mem[PMEM_SIZE];
    int mem_size;
    void init_mem(char *file_path);
    void pmem_read(uint32_t addr, uint32_t *rdata);
    void pmem_write(uint32_t addr, uint32_t wdata, char wmask);
    // friend extern "C" void mem_read(uint32_t addr, uint32_t *rdata);
    // friend extern "C" void mem_write(uint32_t addr, uint32_t wdata, char wmask);

    Memory();
    ~Memory();
};
// int mem_size;

#else 

extern uint8_t mem[PMEM_SIZE];
extern uint8_t* pmem_start;
extern int mem_size;
void init_mem(char *file_path);
// void pmem_read(uint32_t addr, uint32_t *rdata);
// void pmem_write(uint32_t addr, uint32_t wdata, char wmask);

#endif
