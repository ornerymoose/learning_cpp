#include <iostream>
using namespace std;

//prototype
bool isEven(int);

int main(){
	int userNum;
	cout << "enter a whole number..." << endl;
	cin >> userNum;
	if (isEven(userNum)){
		cout << "your number is even!" << endl;
	} else {
		cout << "your number is odd!" << endl;
	}
}

bool isEven(int num){
	if (num % 2 == 0){
		return true;
	} else {
		return false;
	}
}