#include <iostream>
#include <cmath>
using namespace std;

class Circle {
	private:
		double radius;
	public:
		void setRadius(double);
		double getRadius();
		double getArea();
		Circle();
};

double Circle::getRadius(){
	return radius;
}

void Circle::setRadius(double r){
	if (r >= 0){
		radius = r;
	}
	radius = r;
}

double Circle::getArea(){
	return 3.14 * pow(radius, 2.0);
}

Circle::Circle(){
	radius = 1;
}

int main(){
	Circle circle1, circle2;
	cout << "circle1 rad: " << circle1.getRadius() << endl;
	cout << "circle1 area: " << circle1.getArea() << endl;

	circle2.setRadius(3);
	cout << "circle2 rad: " << circle2.getRadius() << endl;
	cout << "circle2 area: " << circle2.getArea() << endl;
	return 0;
}