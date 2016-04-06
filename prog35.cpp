//based on program 3-25 from Gaddis
//using cin >> to read a word into a C-string

#include <iostream>
using namespace std;

int main() {
	const int SIZE = 12;
	char name[SIZE]; //this will be a char data type, called name. And it's a set of 12 memory cells.

	cout << "Enter your first name: " << endl;
	cin >> name;
	cout << "Howdy, " << name << endl;

	return 0;
}

