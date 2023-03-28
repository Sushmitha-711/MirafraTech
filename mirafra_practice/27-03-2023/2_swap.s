	.file	"2_swap.c"
	.text
	.p2align 4,,15
	.globl	swap_bitwise
	.type	swap_bitwise, @function
swap_bitwise:
.LFB24:
	.cfi_startproc
	movl	(%rdi), %eax
	xorl	(%rsi), %eax
	movl	%eax, (%rdi)
	xorl	(%rsi), %eax
	movl	%eax, (%rsi)
	xorl	%eax, (%rdi)
	ret
	.cfi_endproc
.LFE24:
	.size	swap_bitwise, .-swap_bitwise
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"Enter two numbers"
.LC1:
	.string	"%d%d"
.LC2:
	.string	"a=%d\nb=%d"
	.section	.text.startup,"ax",@progbits
	.p2align 4,,15
	.globl	main
	.type	main, @function
main:
.LFB25:
	.cfi_startproc
	leaq	.LC0(%rip), %rdi
	subq	$24, %rsp
	.cfi_def_cfa_offset 32
	movq	%fs:40, %rax
	movq	%rax, 8(%rsp)
	xorl	%eax, %eax
	call	puts@PLT
	leaq	4(%rsp), %rdx
	leaq	.LC1(%rip), %rdi
	movq	%rsp, %rsi
	xorl	%eax, %eax
	call	__isoc99_scanf@PLT
	movl	(%rsp), %ecx
	movl	4(%rsp), %edx
	leaq	.LC2(%rip), %rsi
	movl	$1, %edi
	xorl	%eax, %eax
	movl	%ecx, 4(%rsp)
	movl	%edx, (%rsp)
	call	__printf_chk@PLT
	movl	(%rsp), %ecx
	movl	4(%rsp), %edx
	leaq	.LC2(%rip), %rsi
	movl	$1, %edi
	xorl	%eax, %eax
	movl	%ecx, 4(%rsp)
	movl	%edx, (%rsp)
	call	__printf_chk@PLT
	movq	8(%rsp), %rdi
	xorq	%fs:40, %rdi
	jne	.L6
	xorl	%eax, %eax
	addq	$24, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 8
	ret
.L6:
	.cfi_restore_state
	call	__stack_chk_fail@PLT
	.cfi_endproc
.LFE25:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
