#include <iostream>
using namespace std;

int main () {
	char choice;
	cout << "Enter A, B, or C: \n";
	cin >> choice;

	switch (choice) {
		case 'A':
			cout << "you entereed A.\n";
			break;
		case 'B':
			cout << "you entered B.\n";
			break;
		case 'C':
			cout << "you entered C.\n";
			break;
		default:
			cout << "you didnt enter A, B, or C.\n";
	}
	return 0;

}
