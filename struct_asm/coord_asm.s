	.global coord_set

coord_set:
	mov %esi,(%rdi)
	mov %edx, 4(%rdi)
	mov %ecx, 8(%rdi)
	ret
