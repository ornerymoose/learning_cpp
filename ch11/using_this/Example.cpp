#include "Example.hpp"

void Example::printAddressesAndValue(){
	cout << "the address of this object is " << this << "\n";
	cout << "and has a value of " << this->x << endl;
}