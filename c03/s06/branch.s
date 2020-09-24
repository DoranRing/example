	.text
	.file	"branch.c"
	.globl	absdiff                 # -- Begin function absdiff
	.p2align	4, 0x90
	.type	absdiff,@function
absdiff:                                # @absdiff
	.cfi_startproc
# %bb.0:
	movl	%edi, %eax
	subl	%esi, %eax
	jle	.LBB0_2
# %bb.1:
	retq
.LBB0_2:
	subl	%edi, %esi
	movl	%esi, %eax
	retq
.Lfunc_end0:
	.size	absdiff, .Lfunc_end0-absdiff
	.cfi_endproc
                                        # -- End function
	.globl	absdiff2                # -- Begin function absdiff2
	.p2align	4, 0x90
	.type	absdiff2,@function
absdiff2:                               # @absdiff2
	.cfi_startproc
# %bb.0:
	movl	%edi, %eax
	movl	%edi, %ecx
	subl	%esi, %ecx
	negl	%ecx
	subl	%esi, %eax
	cmovll	%ecx, %eax
	retq
.Lfunc_end1:
	.size	absdiff2, .Lfunc_end1-absdiff2
	.cfi_endproc
                                        # -- End function
	.ident	"clang version 10.0.0-4ubuntu1 "
	.section	".note.GNU-stack","",@progbits
	.addrsig
