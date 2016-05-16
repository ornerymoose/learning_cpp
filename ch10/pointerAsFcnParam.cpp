#include <iostream>
using namespace std;

void getNumber(int*);
void doubleVal(int*);

int main(){
	int userInput;
	getNumber(&userInput);
	doubleVal(&userInput);
	cout << "val is now: " << userInput << endl;
	return 0;
}

void getNumber(int* number){
	cout << "enter a number please:\n";
	cin >> *number;
}

void doubleVal(int* val){
	*val *= 2;
}