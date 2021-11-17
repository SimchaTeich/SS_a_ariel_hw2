all: libmy_mat.a main.o
	gcc -o connections main.o libmy_mat.a

libmy_mat.a: my_mat.o
	ar -rcs libmy_mat.a my_mat.o

my_mat.o: my_mat.c my_mat.h
	gcc -c my_mat.c

main.o: main.c
	gcc -c main.c

clean:
	rm -f *.o *.a connections

.PHONY: all clean
