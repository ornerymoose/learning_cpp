all: main

main: main.o K.o
	g++ main.cpp K.cpp -o main

main.o: main.cpp
	g++ -c main.cpp

K.o: K.cpp
	g++ -c K.cpp

clean:
	rm *o main
