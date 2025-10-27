	.global fact_asm

fact_asm:
	mov $1, %rsi
	call fact_acc
	ret

fact_acc:
	test %edi, %edi
	jz .L1
	imul %rdi, %rsi
	sub $1, %rdi
	call fact_acc
.L1:
	mov %rsi, %rax
	ret
