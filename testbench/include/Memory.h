
#include <common.h>


class Memory{
    public:

    uint8_t mem[PMEM_SIZE];
    int mem_size;
    void init_mem(char *file_path);
    void pmem_read(uint32_t addr, uint32_t *rdata);
    void pmem_write(uint32_t addr, uint32_t wdata, char wmask);
    Memory();
    ~Memory();
};