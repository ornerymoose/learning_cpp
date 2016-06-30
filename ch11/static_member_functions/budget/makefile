all: main

main: main.o budget.o
	g++ main.o budget.o -o main

main.o: main.cpp
	g++ -c main.cpp

budget.o: budget.cpp
	g++ -c budget.cpp

clean:
	rm *o main