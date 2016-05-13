//use pointers instead of subscripts to enter values into array
#include <iostream>
using namespace std;

int main(){
	int numOfInts;
	cout << "How many integers would you like to enter?\n";
	cin >> numOfInts;
	int numbers[numOfInts];

	cout << "Please enter " << numOfInts << " integers:\n";

	//enter values
	for (int i = 0; i < numOfInts; i++){
		cin >> *(numbers + i);
	}

	//display values
	for (int i = 0; i < numOfInts; i++){
		cout << *(numbers + i) << endl;
	}

}