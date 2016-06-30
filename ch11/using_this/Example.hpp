#ifndef EXAMPLE_HPP
#define EXAMPLE_HPP

#include <iostream>
using std::cout;
using std::endl;

class Example {
	int x;
	public:
		Example(int a){
			x = a;
		}
		void printAddressesAndValue();
};

#endif