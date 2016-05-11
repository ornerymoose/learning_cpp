//using the indirection operator
#include <iostream>
using namespace std;


int main(){
	int x = 25;
	int* ptr;
	ptr = &x;

	cout << "address of x is: " << *ptr << " using deferencing \nand using the actual variable name: " << x << endl;
	cout << "right now, the memory address of x is: " << ptr << endl;

	*ptr = 75; //this will assign 75 to x.
	
	cout << "\naddress of x is now: " << *ptr << " using deferencing \nand using the actual variable name: " << x << endl;
	cout << "and the memory address of x is still: " << ptr << endl;
	return 0;
}