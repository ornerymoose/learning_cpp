all: main

main: main.o IntStack.o
	g++ main.o IntStack.o -o main

main.o: main.cpp
	g++ -c main.cpp

IntStack.o: IntStack.cpp
	g++ -c IntStack.cpp

debug:
	valgrind -v --leak-check=full ./main

clean:
	rm -f main *.o *~