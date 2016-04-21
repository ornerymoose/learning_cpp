#include <iostream>
#include <cmath>
using namespace std;

class Circle
{	private:
		double radius;
	public:
		void setRadius(double);
		double getRadius();
};


void Circle::setRadius(double r)
{
	radius = r;
}

double Circle::getRadius()
{
	return radius;
}

int main(){
	Circle circle1;
	circle1.setRadius(2);
	cout << "radius is: " << circle1.getRadius() << endl;
	return 0;
}
