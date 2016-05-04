#include <iostream>
using namespace std;

int main(){
	const int SIZE = 100;
	int array[SIZE];
	int numValues = 0;

	int number;

	cout << "Enter a number or -1 to quit:\n";
	cin >> number;
	while (number != -1 && numValues < SIZE)
	{
		array[numValues] = number;
		numValues++;
		cout << "Enter a number or -1 to quit:\n";
		cin >> number;
	}
	for (int count = 0; count < numValues; count++)
		cout << array[count] << endl;
	
	return 0;
}