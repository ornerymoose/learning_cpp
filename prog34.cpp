//reading information from a file

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
	ifstream inFile;
	string name;

	inFile.open("nba_stars.txt");
	cout << "Reading info from nba_stars.txt...\n\n";

	inFile >> name;
	cout << name << endl;

	inFile >> name;
	cout << name << endl;

	inFile >> name;
	cout << name << endl;

	inFile.close();
	cout << "\nDone.\n";

	return 0;
}