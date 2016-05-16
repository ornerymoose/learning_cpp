//a function that returns a pointer

#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;

int *getRandomNumbers(int);

int main(){
	int *numbers; //to point to the numbers

	numbers = getRandomNumbers(5);

	for (int count = 0; count < 5; count++){
		cout << numbers[count] << endl;
	}

	delete [] numbers;
	numbers = 0;
	return 0;
}

int *getRandomNumbers(int num){
	int *array; //array to hold the numbers

	//return null if num is zero or negative
	if (num <= 0)
		return NULL;

	//dynamically allocate the array.
	array = new int[num];

	//seed the random nmber generator by passing the return value of time(0) to srand.
	srand(time (0) );

	//populate the array
	for (int count = 0; count < num; count++){
		array[count] = rand();
	}

	//return a pointer to the array
	return array;

}