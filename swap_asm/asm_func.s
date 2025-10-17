	.global swap_asm
	.global set_asm
swap_asm:
	mov (%rdi), %edx
	mov (%rsi), %ecx
	mov %edx, (%rsi)
	mov %ecx, (%rdi)
	ret

set_asm:
	movl $2, (%rdi)
	ret
