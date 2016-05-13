//use pointers to get addresses of array values

#include <iostream>
using namespace std;

int main(){
	const int SIZE = 6;
	double numbers[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6};
	double* ptr; //a variable of ptr points to a double data type

	ptr = numbers; //this assigns the address of numbers to the variable ptr

	//this will print the values using pointers
	for (int i = 0; i < SIZE; i++){
		cout << *(numbers + i) << endl;
	}

	cout << "\n";

	//you could also print the values like this:
	for (int i = 0; i < SIZE; i++){
		cout << numbers[i] << endl;
	}

	cout << "\n";

	//or even like this
	for (int i = 0; i < SIZE; i++){
		cout << ptr[i] << endl;
	}

	cout << "\nthe addresses are:\n";	
	for (int i = 0; i < SIZE; i++){
		cout << &numbers[i] << endl;
	}

	cout << "\nto deference and get the values back, you could do this:\n";	
	for (int i = 0; i < SIZE; i++){
		cout << *(ptr + i) << endl;
	}

	return 0;
}