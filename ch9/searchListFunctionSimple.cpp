#include <iostream>
using std::endl;
using std::cout;

int searchList(const int[], int, int); //prototype

int main(){
	int arrayToSearch[4] = {33, -45, 62, 101};

	int results; //holds search results

	results = searchList(arrayToSearch, 4, 101);

	if (results == -1){
		cout << "that number is not in your array" << endl;
	} else {
		cout << "Nice! that number is in the array!" << endl;
	}
	return 0;
}

int searchList(const int list[], int size, int value){
	/*********************************************
		list is the array, 
		size is the number of elements, 
		and value is the actual value in the array
	*********************************************/
	int index = 0;
	int position = -1; //an array subscript cannot be -1. Could also use a different negative number
	bool found = false; //flag

	while (index < size && !found){
		if (list[index] == value){
			found = true;
			position = index;
		}
		index++;
	}
	return position;
}