//stores the address of a variable in a pointer
#include <iostream>
using namespace std;

int main(){
	int x = 25;
	int* ptr; //the variable ptr points to a variable that is of type int
	ptr = &x;

	cout << "memory address of x is: " << ptr << endl;


}