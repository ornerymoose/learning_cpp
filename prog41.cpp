//Gaddis 4-1, width of a rectangle calculation
//David Pardy, 1140pm EST 


#include <iostream>
using namespace std;

int main() {
	double length, width, area;
	cout << "We are going to find the area of a rectangle." << endl;
	cout << "Please enter a length of your choice:" << endl;
	cin >> length;
	cout << "Please enter a width of your choice:" << endl;
	cin >> width;
	area = length*width;
	cout << "The area of your rectangle, ignoring units, is:" << endl;
	cout << area << endl;
	return 0;
}
