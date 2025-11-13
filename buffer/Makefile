CC = gcc
CFLAGS = -ggdb -Wall -std=c18 -O0

test : buffer solution.txt
	setarch x86_64 -R ./buffer < solution.txt

buffer : buffer.c
	${CC} -o buffer buffer.c ${CFLAGS} -z execstack

solution.txt : mix mix_in.txt hack.o
	./mix < mix_in.txt > solution.txt

hack.o : hack.s
	gcc -c -o hack.o hack.s

clean :
	-rm buffer solution.txt mix *.o
