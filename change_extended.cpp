#include <iostream>
using namespace std;

//calculating change 

int main(){
	int quarters, dimes, nickels, pennies;
	int change, amount;
	cout << "Please enter an amount, in cents, less than or equal to 100." << endl;
	cin >> amount;
	if (amount >= 100){
		cout << "You entered an amount greater than or equal to 100. No change for you!!!" << endl;
		return 0;
	} else {
		//lets say amount is 99
		cout << "Ok, you entered an amount of: " << amount << endl;
		quarters = amount / 25; //amount here is 99, quarters will be 3
		change = amount % 25; //change here is 24, since 25 goes into 99 3 times with a remainder of 24
		dimes = change / 10; //dimes = 24 / 10, which will return 2;
		//need to set change again to get updated value...
		change = change % 10; //24 % 10 = 4;
		nickels = change / 5; // 4 / 5 = 0, so zero nickels;
		pennies = change % 5;
		cout << "You will get this many quarters: " << quarters << endl;
		cout << "You will get this many dimes: " << dimes << endl;
		cout << "You will get this many nickels: " << nickels << endl;
		cout << "You will get this many pennies: " << pennies << endl;
	}

	return 0;
}