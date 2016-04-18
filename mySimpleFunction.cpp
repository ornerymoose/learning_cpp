#include <iostream>
using namespace std;

int mySimpleFunction(){
	cout << "***running mySimpleFunction" << endl;
	return 1;
}

int main() {
	mySimpleFunction(); //function call

	int result;
	result = mySimpleFunction();
	
	int testData = 3;
	if (testData > mySimpleFunction()){
		cout << "in if statement of main...\n" << endl;
	}

	while (testData > mySimpleFunction()){
		cout << "in while loop...testData var = " << testData << endl;
		testData--;
	}

	return 0;
}
