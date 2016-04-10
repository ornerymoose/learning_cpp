#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ofstream outputFile;
	outputFile.open("nba_stars.txt");
	cout << "Lets write some data to a file.\n";
	outputFile << "Here are some NBA stars...\n";
	outputFile << "Larry Bird\n";
	outputFile << "Magic Johnson\n";
	outputFile << "Allen Iverson\n";
	outputFile.close();
	cout << "Closing the file." << endl;
	return 0;
}