//this program reads employee work hours from a file
// and stores them in an int array. It uses one for loop
//to input the hours and another for loop to display them

#include <iostream>
#include <fstream>

using namespace std;

int main(){
	const int NUM_EMPLOYEES = 6;
	int hours[NUM_EMPLOYEES];
	ifstream datafile;
	int count;

	datafile.open("work.dat");

	if (!datafile)
		cout << "error opening file\n";
	else {
		for (count = 0; count < NUM_EMPLOYEES; count++){
			datafile >> hours[count];
		}
		datafile.close();

		for (count = 0; count < NUM_EMPLOYEES; count++){
			cout << "Employee #" << count+1 << ": " << hours[count] << " hours worked." << endl;
		}
	}

	return 0;
}