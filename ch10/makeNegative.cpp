#include <iostream>
using namespace std;


//take a number and make it negative

void makeNegative(int *); //a pointer variable will point to a data type of int

int main(){
	int userNum;
	cout << "Enter a positive number and I will make it negative:\n";
	cin >> userNum;
	makeNegative(&userNum);
	cout << userNum << endl;
	return 0;
}

void makeNegative(int *num){ //num variable points to an integer value, num is a pointer
	if (*num > 0)
		*num = -(*num);
}