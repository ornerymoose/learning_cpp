#include <iostream>
using namespace std;

void showSum(int num1, int num2, int num3);

int main(){
	cout << "lets get 3 values and add them together" << endl;
	int val1, val2, val3;
	cin >> val1 >> val2 >> val3;
	showSum(val1, val2, val3);
	return 0;
}

void showSum(int num1, int num2, int num3){
	cout << "sum is " << (num1+num2+num3) << endl;
}
