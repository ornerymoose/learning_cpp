/* 
	this program makes sure that the divsor is not equal to
	zero before it performs a divide operation.
*/
#include <iostream>
using namespace std;

int main() {
	double num1, num2, quotient;
	cout << "Enter two numbers: " << endl;
	cin >> num1 >> num2;

	//if num2 is not zero, perform the division;

	if (num2 != 0){
		quotient = num1/num2;
		cout << "the quotient of " << num1 << " divided by " << num2 << " is: " << endl;
		cout << quotient << endl;
	} else {
		cout << "you cannot divide by zero!" << endl;
	}
	return 0;
}