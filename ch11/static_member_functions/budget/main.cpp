#include "budget.h"

double Budget::corpBudget = 0;

int main(){
	const int N_DIVISIONS = 4;
	Budget divisions[N_DIVISIONS];

	//get budget request for each divsion
	for (int i = 0; i < N_DIVISIONS; i++){
		double bud;
		cout << "Enter the budget request for each division: ";
		cin >> bud;
		divisions[i].addBudget(bud);
	}

	//display budget requests
	cout << setprecision(2);
	cout << showpoint << fixed;
	cout << "\nHere are the division budget requests:\n";
	for (int i = 0; i < N_DIVISIONS; i++){
		cout << "Divsion " << (i + i) << ": ";
		cout << divisions[i].getDivBudget() << endl;
	}
	cout << "Total Budget: " << divisions[0].getCorpBudget() << endl;
	return 0;
}