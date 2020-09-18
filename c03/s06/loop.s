	.file	"loop.c"
	.text
	.globl	add
	.type	add, @function
add:
.LFB0:
	.cfi_startproc
	endbr64
	movl	$1, %eax
.L2:
	addq	%rdi, %rax
	subq	$1, %rdi
	cmpq	$10, %rdi
	jg	.L2
	ret
	.cfi_endproc
.LFE0:
	.size	add, .-add
	.globl	addn
	.type	addn, @function
addn:
.LFB1:
	.cfi_startproc
	endbr64
	movl	$1, %eax
.L4:
	cmpq	$10, %rdi
	jle	.L6
	addq	%rdi, %rax
	subq	$1, %rdi
	jmp	.L4
.L6:
	ret
	.cfi_endproc
.LFE1:
	.size	addn, .-addn
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
