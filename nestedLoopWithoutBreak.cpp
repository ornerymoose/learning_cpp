#include <iostream>
using namespace std;


//same as nestedLoop.cpp but not using a break statement
int main() {
	int count = 0;
	string animalInput;
	bool continueInput = true;
	cout << "Enter your favorite animals below. Press q to quit the program at any time.\n";
	while (count++ <= 50 && continueInput){
		cout << "Animal: ";
		cin >> animalInput;
		if (animalInput == "q"){
			continueInput = false;
		}
	}
	return 0;
}
		
