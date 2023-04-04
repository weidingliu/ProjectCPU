# 1 "n62_invtlb_0x0.S"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "n62_invtlb_0x0.S"
# 1 "../include/asm.h" 1



# 1 "../include/regdef.h" 1
# 5 "../include/asm.h" 2
# 1 "../include/sysdep.h" 1
# 6 "../include/asm.h" 2
# 2 "n62_invtlb_0x0.S" 2
# 1 "../include/regdef.h" 1
# 3 "n62_invtlb_0x0.S" 2
# 1 "../include/inst_test.h" 1

# 1 "../include/cpu_cde.h" 1
# 1 "../include/lab_config.h" 1
# 2 "../include/cpu_cde.h" 2
# 3 "../include/inst_test.h" 2
# 4 "n62_invtlb_0x0.S" 2

.text; .globl n62_invtlb_0x0_test; .align 3; .cfi_startproc ; .type n62_invtlb_0x0_test, @function; n62_invtlb_0x0_test:
    addi.w $r23, $r23, 0x1
    addi.w $r25, $r0, 0x0

    csrrd $r17, 0x11
    csrrd $r18, 0x12
    csrrd $r19, 0x13
    csrrd $r20, 0x10
    li.w $r12, 0x80000000
    or $r20, $r20, $r12
    srli.w $r20, $r20, 5

    invtlb 0x0, $r0, $r0

    li.w $r12, 0x0c000000
    addi.w $r16, $r12, 32

1:
    add.w $r0, $r0, $r0
    addi.w $r13, $r12, 0x0
    csrwr $r13, 0x10
    tlbrd
    csrrd $r13, 0x11
 #li $r14, 0x0
    bne $r13, $r0, inst_error
    csrrd $r13, 0x12
 #li $r14, 0x0
    bne $r13, $r0, inst_error
    csrrd $r13, 0x13
 #li $r14, 0x0
    bne $r13, $r0, inst_error
    li.w $r13, 0x3f000000
    csrxchg $r0, $r13, 0x10
    csrrd $r13, 0x10
 #li $r14, 0x04000000
    srli.w $r13, $r13, 5
    bne $r13, $r20, inst_error
    addi.w $r12, $r12, 0x1
    bne $r12, $r16, 1b

###detect exception
    bne $r25, $r0, inst_error
# 56 "n62_invtlb_0x0.S"
###score ++
    addi.w $r26, $r26, 1
###output ($r23<<24)|$r26
inst_error:
    slli.w $r13, $r23, 24
    or $r12, $r13, $r26
    st.w $r12, $r24, 0x0
    jirl $r0, $r1, 0x0
.cfi_endproc ; .size n62_invtlb_0x0_test,.-n62_invtlb_0x0_test;
