#include <iostream>
using namespace std;

void getSales(double*, int);
double totalSales(double*, int);

int main(){
	const int QUARTERS = 4;
	double sales[QUARTERS];
	getSales(sales, QUARTERS);
	cout << "total sales for 4 quarters was:\n";
	cout << totalSales(sales, QUARTERS) << endl;
	return 0;
}

void getSales(double* array, int size){
	for (int count = 0; count < size; count++){
		cout << "Enter the sales figure for quarter ";
		cout << (count + 1) << ": ";
		cin >> array[count];
	}
}

double totalSales(double* array, int size){
	double sum = 0;
	for (int count = 0; count < size; count++){
		sum += *array;
		array++;
	}
	return sum;
}