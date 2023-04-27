
//static const char mainargs[] = MAINARGS;

# define nemu_trap(code) asm volatile("or $s0,$zero,%0; break 1" : :"r"(code))

void halt(int code) {
  nemu_trap(code);

  // should not reach here
  while (1);
}


void _trm_init() {
 // int ret = main(mainargs);
 int ret = main();
  //printf("is here\n");
  halt(ret);
}
