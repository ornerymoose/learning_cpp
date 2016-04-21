#include <iostream>
#include <cmath>
using namespace std;

class Circle
{
	private:
		double radius;
	public:
		void setRadius(double r)
		{
			radius = r;
		}

		double getArea()
		{
			return 3.14 * pow(radius, 2);
		}
};

int main(){
	//define two circle objects (creates two instances of Circle)
	Circle circle1, circle2;

	circle1.setRadius(1);
	circle2.setRadius(2.5);

	cout << "The area of circle1 is " << circle1.getArea() << endl;
	cout << "The area of circle2 is " << circle2.getArea() << endl;

	return 0;
}

