#include <iostream>
using namespace std;

class Rectangle
{
	private:
		double width;
		double length;
	public:
		void setLength(double);
		void setWidth(double);
		double getWidth();
		double getLength();
		double getArea();
};

void Rectangle::setLength(double l)
{
	length = l;
}

void Rectangle::setWidth(double w)
{
	width = w;
}

double Rectangle::getWidth()
{
	return width;
}

double Rectangle::getLength()
{
	return length;
}

double Rectangle::getArea(){
	return width * length;
}

int main(){
	Rectangle rec1;
	double userLength, userWidth;
	cout << "enter length:\n";
	cin >> userLength;
	rec1.setLength(userLength);
	cout << "enter width:\n";
	cin >> userWidth;
	rec1.setWidth(userWidth);
	cout << "length is: " << rec1.getLength() << endl;
	cout << "width is: " << rec1.getWidth() << endl;
	cout << "area of rectangle is: " << rec1.getArea() << endl;
	return 0;
}
