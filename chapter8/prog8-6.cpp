#include <iostream>
#include <string>
using namespace std;

//use array initialization to display the names of each month and number of day/month

int main(){
	const int SIZE = 12;
	int choice;
	string months[SIZE] = {
		"Jan", "Feb", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"
	};

	int days[SIZE] = {
		31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
	};

	cout << "Input a number to see how many days are in that month. Ie, December is represented by 12, November by 11, etc.\n";
	cin >> choice;

	cout << "the month of " << months[choice-1] << " has " << days[choice-1] << " days." << endl;

	return 0;
}