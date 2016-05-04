#include <iostream>
using namespace std;

//using a function to display the values of an array

//protoype
void showValues(int);

int main(){
	const int SIZE = 6;
	int numbers[SIZE] = {3, 6, 9, 12, 15, 18};
	for (int count = 0; count < SIZE; count++)
		showValues(numbers[count]);
	return 0;
}

void showValues(int num){
	cout << num << endl; 
}