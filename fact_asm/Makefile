CC = gcc
CFLAGS = -std=c18 -Wall -ggdb

test : tryFact
	./tryFact 5

tryFact : tryFact.c asm_func.s
	${CC} tryFact.c asm_func.s -o tryFact ${CFLAGS} -z noexecstack

clean :
	-rm tryFact
