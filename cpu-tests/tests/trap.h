#include <stdbool.h>
extern void halt();
__attribute__((noinline))
void check(bool cond) {
  if (!cond) halt(1);
}
