CC=gcc
AR=ar
FLAGS= -Wall -g

all: stringProg

stringProg: main.o libstringfunc.a
	$(CC) $(FLAGS) -o stringProg main.o libstringfunc.a
libstringfunc.a: stringFunc.o
	$(AR) -rcs libstringfunc.a stringFunc.o
main.o: main.c stringFunc.h
	$(CC) $(FLAGS) -c main.c
stringFunc.o: stringFunc.c stringFunc.h
	$(CC) $(FLAGS) -c stringFunc.c



.PHONY: clean all
clean:
	rm -f *.o *.a *.so stringProg