#include <iostream>
using namespace std;

//double the value of each element in an array

//arrayType is an alias for an array of ints
typedef int arrayType[];

void doubleArray(arrayType, int);
void showValues(arrayType, int);

int main(){
	int myNumbers[] = {2, 4, 6, 8, 10, 30};

	//below is just a way to get the size of the array without explicity stating it in functions.
	int arrayBytes = sizeof(myNumbers);
	int oneElement = sizeof(myNumbers[0]);
	int size = arrayBytes/oneElement;

	doubleArray(myNumbers, size);
	showValues(myNumbers, 6);
	return 0;
}

void doubleArray(arrayType nums, int size){
	for (int index = 0; index < size; index++)
		nums[index] *= 2; // = nums[index] = nums[index] * 2
}

void showValues(arrayType nums, int size){
	for (int index = 0; index < size; index++)
		cout << nums[index] << endl;
}