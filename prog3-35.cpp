#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream inFile;
	int length, width;

	inFile.open("dimensions.txt");
	cout << "Reading the dimensions of 4 rectangles from the file.\n\n";

	//rectangle 1
	inFile >> length >> width;
	cout << "Area of rectangle 1: " << (length * width) << endl;

	inFile >> length >> width;
	cout << "Area of rectangle 2: " << (length * width) << endl;

	inFile >> length >> width;
	cout << "Area of rectangle 3: " << (length * width) << endl;

	inFile >> length >> width;
	cout << "Area of rectangle 4: " << (length * width) << endl;

	inFile.close();

	cout << "Done.\n";

	return 0;
}