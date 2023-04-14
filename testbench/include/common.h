#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "VTop.h"
#include <cstdint> 
#include <cstdlib>
#include <assert.h>

#define DIFFTEST

extern char* difftest_ref_so;

#define RESET_VECTOR 0x00000000 //pmem reset address
#define PMEM_SIZE 0x8000000



