#include <iostream>
using namespace std;
void swapper(double& val1, double& val2);

//this program will take two numerical inputs and swap their values
int main(){
	double val1, val2;
	cout << "Please enter your first value:\n";
	cin >> val1;
	cout << "Please enter your second value:\n";
	cin >> val2;
	swapper(val1, val2);
   	cout << "first number: " << val1 << endl;
   	cout << "second number: " << val2 << endl;

   return 0;
	return 0;
}

void swapper(double& val1, double& val2){
	double temp = val1;
	val1 = val2;
	val2 = temp;
}