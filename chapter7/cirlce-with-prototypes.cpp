#include <iostream>
#include <cmath>
using namespace std;

class Circle
{
	private:
		double radius;
	public:
		void setRadius(double);
		double getRadius();
		double getArea();
};

void Circle::setRadius(double r)
{
	radius = r;
}

double Circle::getRadius()
{
	return radius;
}

double Circle::getArea()
{
	return 3.14 * pow(radius, 2);
}

int main(){
	Circle circle1;
	double myRadius;
	cin >> myRadius;
	circle1.setRadius(myRadius);
	cout << "you chose a radius of: " << circle1.getRadius() << "\n";
	cout << "the area is: " << circle1.getArea() << endl;
	return 0;
}