#include "DynIntStack.hpp"

void DynIntStack::push(int num){
	top = new StackNode(num, top);
}

void DynIntStack::pop(int &num){
	StackNode* temp;
	if (isEmpty()){
		cout << "the stack is empty" << endl;
		exit(1);
	} else {
		num = top->value;
		temp = top;
		top = top->next;
		delete temp;
	}
}

bool DynIntStack::isEmpty() const {
	if (!top){
		return true;
	} else {
		return false;
	}
}