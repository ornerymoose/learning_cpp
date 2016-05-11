//shows an array being deferenced
#include <iostream>
using namespace std;

int main(){
	short numbers[] = {5, 10, 15, 20, 25};
	cout << "the first element of the array is: " << *numbers << endl;
	return 0;
}