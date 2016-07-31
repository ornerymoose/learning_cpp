#include "DynIntStack.hpp"

int main(){
	DynIntStack stack;
	int catchVar;

	cout << "pushing 5..." << endl;
	stack.push(5);
	cout << "pushing 10..." << endl;
	stack.push(10);
	cout << "pushing 15..." << endl;
	stack.push(15);

	cout << "Popping..." << endl;
	stack.pop(catchVar);
	cout << catchVar << endl;
	stack.pop(catchVar);
	cout << catchVar << endl;
	stack.pop(catchVar);
	cout << catchVar << endl;

	cout << "Attempting to pop again.." << endl;
	stack.pop(catchVar);
	return 0;
}