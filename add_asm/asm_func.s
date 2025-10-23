.global add_asm
.global inc_asm
.global pow_asm
	
add_asm:
	mov %edi,%eax
	add %esi,%eax
	ret

inc_asm:
	mov %edi,%eax
	add $1,%eax
	ret

pow_asm:
	mov $1, %eax
	mov $0, %edx
	jmp .l1
.l2:
	imul %edi,%eax
	add $1,%edx
.l1:
	cmp %edx,%esi
	jg .l2
	ret
