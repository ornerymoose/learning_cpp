#include <iostream>
using namespace std;

int main(){
	cout << "Enter your favorite animals below. Press q to quit." << endl;
	int count = 0;
	string animal;
	while (count ++ < 50){
		cout << "Animal: ";
		cin >> animal;
		if (animal == "q")
			break;
	}
	return 0;
}
