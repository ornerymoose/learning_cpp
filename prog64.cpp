#include <iostream>
using namespace std;

//seeing if someone qualifies for a credit card
/*
	1) they need to be at their current job for 2+ yrs
	2) they need to make at least 17k USD/year
*/

void qualify(){
	cout << "Nice, you qualify!" << endl;
}

void noQualify(){
	cout << "Unfortunately, you do not qualify." << endl;
}

int main(){
	double salary;
	int years;
	cout << "This program will see if you qualify for a credit card." << endl;
	cout << "What is your annual salary?\n";
	cin >> salary;
	cout << "How many years have you worked at your current job?\n";
	cin >> years;
	if (salary >= 17000 && years >= 2){
		qualify();
	} else {
		noQualify();
	}
	return 0;
}
