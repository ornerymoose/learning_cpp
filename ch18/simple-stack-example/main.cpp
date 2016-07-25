#include <iostream>
#include "IntStack.hpp"
using std::cout;
using std::endl;

int main(){
	cout << "Stack Fun" << endl;

	//create an instance of IntStack

	IntStack stack(5); //will have a capacity of 5

	//create an int array called values, this currently has nothing to do with the stack above
	int values[] = {5, 10, 15, 20, 25};
	int value;

	//push the values
	cout << "Pushing the values..." << endl;
	for (int i = 0; i < 5; i++){
		cout << values[i] << endl;
		stack.push(values[i]);
	}

	cout << "Popping the values..." << endl;

	//while the stack isnt empty
	while (!stack.isEmpty()){
		stack.pop(value);
		cout << value << endl;
	}
	return 0;
}