#include <iostream>
using namespace std;

class SimpleStat
{
	private:
		int largest;
		int sum;
		int count;

		bool isNewLargest(int);
	public:
		SimpleStat(); //default constructor
		bool addNumber(int);
		double getAverage();

		int getLargest(){
			return largest;
		}

		int getCount(){
			return count;
		}
};

SimpleStat::SimpleStat(){
	largest = 0;
	sum = 0;
	count = 0;
	//just initializing the above values
}

bool SimpleStat::addNumber(int num){
	bool goodNum = true;
	if (num >= 0){
		sum = sum + num; //add it to the sum if valid number
		count++;
		if(isNewLargest(num)){
			largest = num; //the new largest number
		}
	} else {
		goodNum = false;
	}

	return goodNum;
}

bool SimpleStat::isNewLargest(int num){
	if (num > largest)
		return true;
	else
		return false;
}

double SimpleStat::getAverage(){
	if (count > 0)
		return static_cast<double>(sum) / count;
	else
		return 0;
}

int main(){
	int num;
	SimpleStat statHelper;
	cout << "enter the set of non-negative integer values \n";
	cout << "you want to average. Separate them with spaces\n";
	cout << "and enter -1 after the last value.\n\n";

	cin >> num;
	while (num >= 0){
		statHelper.addNumber(num);
		cin >> num;
	}

	cout << "you entered " << statHelper.getCount() << " values\n";
	cout << "the largest value was " << statHelper.getLargest() << endl;
	cout << "the average value was " << statHelper.getAverage() << endl;
	return 0;
}



