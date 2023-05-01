#include <stdbool.h>
#include <stdint.h>
#include <stddef.h>

#define ROUNDUP(a, sz)      ((((uintptr_t)a) + (sz) - 1) & ~((sz) - 1))
#define ROUNDDOWN(a, sz)    ((((uintptr_t)a)) & ~((sz) - 1))
#define LENGTH(arr)         (sizeof(arr) / sizeof((arr)[0]))
#define RANGE(st, ed)       (Area) { .start = (void *)(st), .end = (void *)(ed) }
#define IN_RANGE(ptr, area) ((area).start <= (ptr) && (ptr) < (area).end)

void     halt        (int code) __attribute__((__noreturn__));

extern void halt();
__attribute__((noinline))
void check(bool cond) {
  if (!cond) halt(1);
}
