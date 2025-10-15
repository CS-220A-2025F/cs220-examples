.global add_asm
.global inc_asm

add_asm:
	mov %edi,%eax
	add %esi,%eax
	ret

inc_asm:
	mov %edi,%eax
	add $1,%eax
	ret
