all: main

main: main.o Example.o
	g++ main.o Example.o -o main

main.o: main.cpp
	g++ -c main.cpp

Example.o: Example.cpp
	g++ -c Example.cpp

clean:
	rm *o main