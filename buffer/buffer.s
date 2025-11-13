
./buffer:     file format elf64-x86-64


Disassembly of section .text:

00000000000010a0 <_start>:
    10a0:	31 ed                	xor    %ebp,%ebp
    10a2:	49 89 d1             	mov    %rdx,%r9
    10a5:	5e                   	pop    %rsi
    10a6:	48 89 e2             	mov    %rsp,%rdx
    10a9:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
    10ad:	50                   	push   %rax
    10ae:	54                   	push   %rsp
    10af:	45 31 c0             	xor    %r8d,%r8d
    10b2:	31 c9                	xor    %ecx,%ecx
    10b4:	48 8d 3d 38 01 00 00 	lea    0x138(%rip),%rdi        # 11f3 <main>
    10bb:	ff 15 ff 2e 00 00    	call   *0x2eff(%rip)        # 3fc0 <__libc_start_main@GLIBC_2.34>
    10c1:	f4                   	hlt
    10c2:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
    10c9:	00 00 00 
    10cc:	0f 1f 40 00          	nopl   0x0(%rax)

00000000000010d0 <deregister_tm_clones>:
    10d0:	48 8d 3d 71 2f 00 00 	lea    0x2f71(%rip),%rdi        # 4048 <__TMC_END__>
    10d7:	48 8d 05 6a 2f 00 00 	lea    0x2f6a(%rip),%rax        # 4048 <__TMC_END__>
    10de:	48 39 f8             	cmp    %rdi,%rax
    10e1:	74 15                	je     10f8 <deregister_tm_clones+0x28>
    10e3:	48 8b 05 de 2e 00 00 	mov    0x2ede(%rip),%rax        # 3fc8 <_ITM_deregisterTMCloneTable@Base>
    10ea:	48 85 c0             	test   %rax,%rax
    10ed:	74 09                	je     10f8 <deregister_tm_clones+0x28>
    10ef:	ff e0                	jmp    *%rax
    10f1:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    10f8:	c3                   	ret
    10f9:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000001100 <register_tm_clones>:
    1100:	48 8d 3d 41 2f 00 00 	lea    0x2f41(%rip),%rdi        # 4048 <__TMC_END__>
    1107:	48 8d 35 3a 2f 00 00 	lea    0x2f3a(%rip),%rsi        # 4048 <__TMC_END__>
    110e:	48 29 fe             	sub    %rdi,%rsi
    1111:	48 89 f0             	mov    %rsi,%rax
    1114:	48 c1 ee 3f          	shr    $0x3f,%rsi
    1118:	48 c1 f8 03          	sar    $0x3,%rax
    111c:	48 01 c6             	add    %rax,%rsi
    111f:	48 d1 fe             	sar    %rsi
    1122:	74 14                	je     1138 <register_tm_clones+0x38>
    1124:	48 8b 05 ad 2e 00 00 	mov    0x2ead(%rip),%rax        # 3fd8 <_ITM_registerTMCloneTable@Base>
    112b:	48 85 c0             	test   %rax,%rax
    112e:	74 08                	je     1138 <register_tm_clones+0x38>
    1130:	ff e0                	jmp    *%rax
    1132:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
    1138:	c3                   	ret
    1139:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000001140 <__do_global_dtors_aux>:
    1140:	f3 0f 1e fa          	endbr64
    1144:	80 3d f9 2e 00 00 00 	cmpb   $0x0,0x2ef9(%rip)        # 4044 <completed.0>
    114b:	75 2b                	jne    1178 <__do_global_dtors_aux+0x38>
    114d:	55                   	push   %rbp
    114e:	48 83 3d 8a 2e 00 00 	cmpq   $0x0,0x2e8a(%rip)        # 3fe0 <__cxa_finalize@GLIBC_2.2.5>
    1155:	00 
    1156:	48 89 e5             	mov    %rsp,%rbp
    1159:	74 0c                	je     1167 <__do_global_dtors_aux+0x27>
    115b:	48 8b 3d d6 2e 00 00 	mov    0x2ed6(%rip),%rdi        # 4038 <__dso_handle>
    1162:	e8 29 ff ff ff       	call   1090 <__cxa_finalize@plt>
    1167:	e8 64 ff ff ff       	call   10d0 <deregister_tm_clones>
    116c:	c6 05 d1 2e 00 00 01 	movb   $0x1,0x2ed1(%rip)        # 4044 <completed.0>
    1173:	5d                   	pop    %rbp
    1174:	c3                   	ret
    1175:	0f 1f 00             	nopl   (%rax)
    1178:	c3                   	ret
    1179:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000001180 <frame_dummy>:
    1180:	f3 0f 1e fa          	endbr64
    1184:	e9 77 ff ff ff       	jmp    1100 <register_tm_clones>

0000000000001189 <getString>:
    1189:	55                   	push   %rbp
    118a:	48 89 e5             	mov    %rsp,%rbp
    118d:	48 83 ec 70          	sub    $0x70,%rsp
    1191:	48 8d 45 90          	lea    -0x70(%rbp),%rax
    1195:	48 89 c6             	mov    %rax,%rsi
    1198:	48 8d 05 65 0e 00 00 	lea    0xe65(%rip),%rax        # 2004 <_IO_stdin_used+0x4>
    119f:	48 89 c7             	mov    %rax,%rdi
    11a2:	b8 00 00 00 00       	mov    $0x0,%eax
    11a7:	e8 b4 fe ff ff       	call   1060 <printf@plt>
    11ac:	48 8d 05 5d 0e 00 00 	lea    0xe5d(%rip),%rax        # 2010 <_IO_stdin_used+0x10>
    11b3:	48 89 c7             	mov    %rax,%rdi
    11b6:	e8 95 fe ff ff       	call   1050 <puts@plt>
    11bb:	48 8d 45 90          	lea    -0x70(%rbp),%rax
    11bf:	48 89 c7             	mov    %rax,%rdi
    11c2:	b8 00 00 00 00       	mov    $0x0,%eax
    11c7:	e8 a4 fe ff ff       	call   1070 <gets@plt>
    11cc:	bf 14 00 00 00       	mov    $0x14,%edi
    11d1:	e8 aa fe ff ff       	call   1080 <malloc@plt>
    11d6:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
    11da:	48 8d 55 90          	lea    -0x70(%rbp),%rdx
    11de:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    11e2:	48 89 d6             	mov    %rdx,%rsi
    11e5:	48 89 c7             	mov    %rax,%rdi
    11e8:	e8 53 fe ff ff       	call   1040 <strcpy@plt>
    11ed:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    11f1:	c9                   	leave
    11f2:	c3                   	ret

00000000000011f3 <main>:
    11f3:	55                   	push   %rbp
    11f4:	48 89 e5             	mov    %rsp,%rbp
    11f7:	48 83 ec 10          	sub    $0x10,%rsp
    11fb:	b8 00 00 00 00       	mov    $0x0,%eax
    1200:	e8 84 ff ff ff       	call   1189 <getString>
    1205:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
    1209:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    120d:	48 89 c6             	mov    %rax,%rsi
    1210:	48 8d 05 0a 0e 00 00 	lea    0xe0a(%rip),%rax        # 2021 <_IO_stdin_used+0x21>
    1217:	48 89 c7             	mov    %rax,%rdi
    121a:	b8 00 00 00 00       	mov    $0x0,%eax
    121f:	e8 3c fe ff ff       	call   1060 <printf@plt>
    1224:	8b 05 16 2e 00 00    	mov    0x2e16(%rip),%eax        # 4040 <value>
    122a:	89 c6                	mov    %eax,%esi
    122c:	48 8d 05 fb 0d 00 00 	lea    0xdfb(%rip),%rax        # 202e <_IO_stdin_used+0x2e>
    1233:	48 89 c7             	mov    %rax,%rdi
    1236:	b8 00 00 00 00       	mov    $0x0,%eax
    123b:	e8 20 fe ff ff       	call   1060 <printf@plt>
    1240:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    1244:	48 89 c7             	mov    %rax,%rdi
    1247:	e8 e4 fd ff ff       	call   1030 <free@plt>
    124c:	b8 00 00 00 00       	mov    $0x0,%eax
    1251:	c9                   	leave
    1252:	c3                   	ret
