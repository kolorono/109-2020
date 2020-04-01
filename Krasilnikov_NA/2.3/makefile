CC=gcc
CFLAGS=-g

all: do-test clean

simpson.o: simpson.c simpson.h
# gcc -c simpson.c

test.o: test.c simpson.h
# gcc -c test.c

a.out: test.o simpson.o
	gcc test.o simpson.o

do-test: a.out
	./a.out

clean: test.o simpson.o
	rm test.o simpson.o a.out leak.out
