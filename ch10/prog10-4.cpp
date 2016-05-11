//demonstrating the ability of a pointer to point to different variables
#include <iostream>
using namespace std;

int main(){
	int x = 25, y = 50, z = 75;
	int* ptr;

	cout << "x value: " << x << endl;
	cout << "y value: " << y << endl;
	cout << "z value: " << z << endl;

	ptr = &x;
	*ptr *= 2;

	ptr = &y;
	*ptr *= 2;

	ptr = &z;
	*ptr *= 2;

	cout << "x value is now: " << x << endl;
	cout << "y value is now: " << y << endl;
	cout << "z value is now: " << z << endl;
	return 0;
}