#include <iostream>
using namespace std;

int main(){
	const int SIZE = 2;
	int myArray[SIZE];

	int count;

	for (count = 0; count < 7; count++){
		myArray[count] = 100;
		cout << myArray[count] << endl;
	}
	
	return 0;
}