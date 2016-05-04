//stores employee work hours in an it array
//uses one for loop to input the hours and another for loop to display them
#include <iostream>
using namespace std;

int main(){
	const int NUM_EMPLOYEES = 6;
	int hours[NUM_EMPLOYEES];
	int count;
	cout << "enter the hours worked by " << NUM_EMPLOYEES << " employees:\n";

	for (count = 0; count < NUM_EMPLOYEES; count++){
		cin >> hours[count];
	}

	cout << "lets display the hours now...\n";

	for (count = 0; count < NUM_EMPLOYEES; count++){
		cout << hours[count] << endl;
	}
	return 0;
}