#include <common.h>
#include <testbench.h>

int main(int argc, char** argv){
    CpuTestBench *testbench = new CpuTestBench;
    testbench->init_testbench(argc, argv);
    testbench->reset_rtl();
    testbench->eval();
    testbench->end_testbench();

    delete(testbench);
    return 0;
}
