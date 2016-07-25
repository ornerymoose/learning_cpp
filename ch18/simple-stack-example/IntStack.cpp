#include "IntStack.hpp"

IntStack::IntStack(int cap){
	this->capacity = cap;
	stackArray = new int[capacity];
	top = 0;
}

void IntStack::push(int value){
	if (top == capacity){
		throw IntStack::Overflow();
	}
	stackArray[top] = value;
	top++;
}

bool IntStack::isEmpty() const {
	if (top == 0){
		return true;
	} else {
		return false;
	}
}

void IntStack::pop(int &value){
	if (isEmpty()){
		throw IntStack::Underflow();
	}
	top --;
	value = stackArray[top];
}