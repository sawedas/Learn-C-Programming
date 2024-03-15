SHELL := bash
CC = gcc
CFLAGS = -g

run: main
	./main.out < input1.txt > output1.txt
	./main.out < input2.txt > output2.txt
	code output1.txt

main: clean mylib.o main.o
	$(CC) $(CFLAGS) main.o -o main.out -o main.out

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

mylib.o:
	$(CC) $(CFLAGS) -c mylib.c

clean:
	rm -f *.o main.out