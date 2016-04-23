#include <iostream>
using namespace std;

//two tax rates, one of 8%, and one of zero

class Sale {
	private:
		double taxRate;
	public:
		Sale();
		Sale(double);
		double calcSaleTotal(double);
};

Sale::Sale(){
	taxRate = 0;
}

Sale::Sale(double rate){
	taxRate = rate;
}

double Sale::calcSaleTotal(double cost){
	double total = cost + cost * taxRate;
	return total;
}

int main(){
	Sale cashier1(.06), cashier2;
	
	cout << "cashier1 sales total of $24.95: " << cashier1.calcSaleTotal(24.95) << endl;
	cout << "cashier1 sales total of $24.95: " << cashier2.calcSaleTotal(24.95) << endl;
	return 0;
}