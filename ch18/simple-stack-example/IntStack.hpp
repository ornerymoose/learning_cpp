#ifndef INTSTACK_HPP
#define INTSTACK_HPP

class IntStack {
private:
	int* stackArray; //array of pointers to integers
	int capacity; //how many ints the stack can hold
	int top; //top fo the stack

public:
	IntStack(int); //constructor, param is capacity
	~IntStack(){
		delete[] stackArray;
	}
	void push(int);
	void pop(int &);
	bool isEmpty() const;

	//Stack Exceptions
	class Overflow {};
	class Underflow {};
};

#endif