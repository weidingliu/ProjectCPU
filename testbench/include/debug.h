#include <stdio.h>
#include <common.h>

#define panic(fmt, ...) \
do{\
    printf(fmt, ## __VA_ARGS__);\
    printf("\n");\
    assert(0);\
}while(0)
