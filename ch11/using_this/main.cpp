#include "Example.hpp"

int main(){
	cout << "hello example!" << endl;
	Example obj1(10);
	Example obj2(25);

	obj1.printAddressesAndValue();
	obj2.printAddressesAndValue();

}
