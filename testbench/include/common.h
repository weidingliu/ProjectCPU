#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "VTop.h"
#include <cstdint> 
#include <cstdlib>
#include <assert.h>

#define DIFFTEST
// #define MTRACE
#define DIFFTEST_TRACE

extern char* difftest_ref_so;
#ifndef FIRST_INST_ADDRESS
#define FIRST_INST_ADDRESS 0x1c000000
#endif


#define RESET_VECTOR 0x1c000000 //pmem reset address
#define PMEM_SIZE 0x8000000



