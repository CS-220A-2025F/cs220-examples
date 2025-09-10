CC = gcc
CFLAGS = -std=c18 -Wall -ggdb

X = 6
Y = 2

test : arithTest
	./arithTest ${X} ${Y}

arithTest : arithTest.c arith.c arith.h
	${CC} -o arithTest arithTest.c arith.c ${CFLAGS}

clean :
	-rm arithTest
