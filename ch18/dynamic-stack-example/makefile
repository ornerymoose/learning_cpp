all: main

main: main.o DynIntStack.o
	g++ main.o DynIntStack.o -o main

main.o: main.cpp
	g++ -c main.cpp

IntStack.o: DynIntStack.cpp
	g++ -c DynIntStack.cpp

debug:
	valgrind -v --leak-check=full ./main

clean:
	rm -f main *.o *~