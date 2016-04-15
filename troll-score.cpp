#include <iostream>
using namespace std;

int main(){
	int score;
	cout << "What did you score?" << endl;
	cin >> score;
	if (score >= 90){
		cout << "Excellent" << endl;
	} else if (score >= 80 && score <= 89){
		cout << "Good" << endl;
	} else {
		cout << "Try Harder" << endl;
	}
	return 0;
}