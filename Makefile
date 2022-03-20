CC = g++
CFLAGS= -Wall

clean:
	rm -rf *.o
	rm -rf main

main: matrix.o main.cpp
	$(CC) $(CFLAGS) -o main matrix.o main.cpp

matrix.o: matrix.cpp
	$(CC) $(CFLAGS) -c matrix.cpp