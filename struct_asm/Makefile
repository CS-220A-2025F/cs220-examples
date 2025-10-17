CC = gcc
CFLAGS = -std=c18 -Wall -ggdb

test : coord
	./coord 1 2 3

coord : coord.c coord_asm.s
	${CC} coord.c coord_asm.s -o coord ${CFLAGS} -z noexecstack 

clean :
	-rm coord
