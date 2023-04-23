.section entry, "ax"
.globl _start
.type _start, @function

_start:
  add.w $s0,$zero,$zero
  la.abs $sp, _stack_pointer
  la.abs $s1, _trm_init
  jr $s1
