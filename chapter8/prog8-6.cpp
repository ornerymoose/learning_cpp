#include <iostream>
#include <string>
using namespace std;

//use array initialization to display the names of each month and number of day/month

int main(){
	const int SIZE = 12;

	string months[SIZE] = {
		"Jan", "Feb", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"
	};

	int days[SIZE] = {
		31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
	};

	for (int count = 0; count < SIZE; count++){
		cout << "The month of " << months[count] << " has " << days[count] << " days." << endl;
	}
	return 0;
}