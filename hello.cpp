//get user's name
//Author: David Pardy, April 4th, 2016

#include <iostream>
#include <string>

using namespace std;

int main() {
	string name;
	int age;
	cout << "Hello there, what is your name?" << endl;
	cin >> name;
	cout << "Ah I see, and what is your age?" << endl;
	cin >> age;
	cout << "Well very nice to meet you, " << name << "!" << endl;
	if (age <= 30){
		cout << "You are " << age << " years old? Not that old I guess :)" << endl;
	} else {
		cout << "Haha wow! " << age << " years old? HAHAHAHA!" << endl;
	}
	return 0;
}

