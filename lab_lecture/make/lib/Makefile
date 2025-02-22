SHELL := bash
CC = gcc
CFLAGS = -g

run: program
	./program.out < input1.txt > output1.txt
	./program.out < input2.txt > output2.txt

program: clean mylib.o main.o
	$(CC) $(CFLAGS) -o program.out mylib.o main.o

mylib.o: mylib.c
	$(CC) $(CFLAGS) -c mylib.c 

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

clean:
	rm -f *.o program.out