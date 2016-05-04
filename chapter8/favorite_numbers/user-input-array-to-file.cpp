#include <fstream>
#include <iostream>
using namespace std;

//create an array, get a user's favorite numbers, and save them to a file. 

int main(){
	const int FAVE_NUMS = 4;
	int numbers[FAVE_NUMS];
	ofstream outputFile;

	int count;

	outputFile.open("favorite_numbers.txt");
	for (count = 0; count < FAVE_NUMS; count++){
		cin >> numbers[count];
		outputFile << numbers[count] << endl;
	}
	outputFile.close();




	return 0;
}