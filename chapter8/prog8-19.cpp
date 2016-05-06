#include <iostream>
using namespace std;

const int NUM_ROWS = 3;
const int NUM_COLUMNS = 3;

void showArray(int [][NUM_COLUMNS], int);

int main(){
	int myArray[NUM_ROWS][NUM_COLUMNS] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	showArray(myArray, NUM_ROWS);
	return 0;
}

void showArray(int nums[][NUM_COLUMNS], int numRows){
	for (int row = 0; row < numRows; row++){
		for (int col = 0; col < 3; col++){
			cout << nums[row][col] << " ";
		}
		cout << endl;
	}
}