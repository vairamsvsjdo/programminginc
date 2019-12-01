	.file	"numwords.c"
	.text
	.comm	szInput,256,32
	.section	.rodata
	.align 8
.LC0:
	.string	"Enter lines, when last one is entered\nprovide a End-Of-File (ctrl-Z on most systems)\nto end the program.\n"
.LC1:
	.string	"Words = %2d \342\200\230%.500s\342\200\231\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	leaq	.LC0(%rip), %rdi
	call	puts@PLT
	jmp	.L2
.L3:
	leaq	szInput(%rip), %rdi
	call	NumberWords
	leaq	szInput(%rip), %rdx
	movl	%eax, %esi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
.L2:
	leaq	szInput(%rip), %rdi
	movl	$0, %eax
	call	gets@PLT
	testl	%eax, %eax
	jne	.L3
	movl	$10, %edi
	call	putchar@PLT
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.globl	NumberWords
	.type	NumberWords, @function
NumberWords:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movl	$1, -8(%rbp)
	movl	$0, -4(%rbp)
	movl	$0, -12(%rbp)
	jmp	.L6
.L10:
	movl	-12(%rbp), %eax
	movslq	%eax, %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	cmpb	$32, %al
	je	.L7
	cmpl	$0, -8(%rbp)
	je	.L8
	addl	$1, -4(%rbp)
.L8:
	movl	$0, -8(%rbp)
	jmp	.L9
.L7:
	movl	$1, -8(%rbp)
.L9:
	addl	$1, -12(%rbp)
.L6:
	movl	-12(%rbp), %eax
	movslq	%eax, %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	jne	.L10
	movl	-4(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	NumberWords, .-NumberWords
	.ident	"GCC: (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0"
	.section	.note.GNU-stack,"",@progbits
