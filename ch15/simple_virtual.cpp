#include <iostream>
using namespace std;

class B {
	public:
		virtual void mfun(){
			cout << "Base class version" << endl;
		}
};

class D: public B {
	public:
		void mfun(){
			cout << "Derived class version" << endl;
		}
};


int main(){
	cout << "in main" << endl;
	B* ptr = new D();
	ptr->mfun();
	return 0;
}