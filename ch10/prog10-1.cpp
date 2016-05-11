//uses the & operator to determine a variable's address

#include <iostream>
using namespace std;

char letter;
short number;
float amount;
double profit;
char ch;

int main(){
	cout << "address of letter is: " << long(&letter) << endl;
	cout << "address of number is: " << long(&number) << endl;
	cout << "address of amount is: " << long(&amount) << endl;
	cout << "address of profit is: " << long(&profit) << endl;
	cout << "address of ch is: " << long(&ch) << endl;
}