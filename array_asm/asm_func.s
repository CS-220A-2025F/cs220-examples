	.global sum_asm

sum_asm:
	xor %rdx, %rdx
	xor %rax, %rax
	jmp .L1
.L2:
	add (%rdi, %rdx, 4), %eax
	add $1, %rdx
.L1:
	cmp %edx, %esi
	jg .L2
	ret
