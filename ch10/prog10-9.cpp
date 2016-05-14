/* 
	use a pointer to display
	the contents of an array
*/
#include <iostream>
using namespace std;

int main(){
	const int SIZE = 8;

	int* ptr;


	int numbers[SIZE] = {
		20, 40, 60, 80,
		100, 200, 400, 600
	};

	ptr = numbers;

	//print the elements like this
	for (int i = 0; i < SIZE; i++){
		cout << *(ptr + i) << endl;
	}

	cout << "\n";

	//or like this...
	for (int i = 0; i < SIZE; i++){
		cout << *ptr << endl;
		ptr++;
	}

	cout << "\n";

	//backwards
	for (int i = 0; i < SIZE; i++){
		cout << *(ptr - i) << endl;
	}

	cout << "\n";

	//or go backwards like this
	for (int i = 0; i < SIZE; i++){
		cout << *ptr << endl;
		ptr--;
	}
	return 0;
}
