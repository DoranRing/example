	.file	"jump.c"
	.text
	.globl	gotoTest
	.type	gotoTest, @function
gotoTest:
.LFB23:
	.cfi_startproc
	endbr64
	testl	%edi, %edi
	jne	.L3
	movl	$4, %eax
	ret
.L3:
	movl	$6, %eax
	ret
	.cfi_endproc
.LFE23:
	.size	gotoTest, .-gotoTest
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"i = %d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB24:
	.cfi_startproc
	endbr64
	subq	$8, %rsp
	.cfi_def_cfa_offset 16
	movl	$0, %edi
	call	gotoTest
	movl	%eax, %edx
	leaq	.LC0(%rip), %rsi
	movl	$1, %edi
	movl	$0, %eax
	call	__printf_chk@PLT
	movl	$0, %eax
	addq	$8, %rsp
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE24:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 9.3.0-10ubuntu2) 9.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
