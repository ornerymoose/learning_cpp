#include <iostream>
using namespace std;

//this program will take user input, and spit out the ASCII value

int main(){
	char userInput;
	cout << "Please enter the char of your choice.\n";
	cin >> userInput;	
	cout << "Ok, you entered: " << userInput << ". The associated ASCII value is: \n" << int (userInput) << endl;
	return 0;
}