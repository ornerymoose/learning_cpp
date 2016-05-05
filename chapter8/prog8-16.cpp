#include <iostream>
using namespace std;

//passing different arrays to a function

//declare arrayType to be an alias for an array of integers
typedef int arrayType[];

void showValues(arrayType, int);

int main(){

	const int SIZE1 = 8;
	const int SIZE2 = 5;
	int set1[] = {3, 4, 99, 2, 22, 1, 3, 40};
	int set2[] = {3, 5, 7, 9, 11};

	cout << "set1 array contains \n";
	showValues(set1, SIZE1);
	cout << "\nset2 array contains \n";
	showValues(set2, SIZE2);

	return 0;
}

void showValues(arrayType nums, int size){
	for (int index = 0; index < size; index++){
		cout << nums[index] << endl;
	}
}