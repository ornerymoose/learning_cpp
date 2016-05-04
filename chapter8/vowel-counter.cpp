#include <iostream>
#include <cctype>
#include <string>
using namespace std;
//see how many vowels are in a sentence

int main(){
	char ch;
	int vowelCount = 0;
	string sentence;

	cout << "Enter a sentence and I will tell you\nhow many vowels there are." << endl;

	getline(cin, sentence);

	for (int pos = 0; pos < sentence.length(); pos++){
		ch = toupper(sentence[pos]);

		//if the character is a vowel, increment vowelCount
		switch(ch)
		{
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U': 
				vowelCount++;
		}
	}
	cout << "there are: " << vowelCount << " vowels in\n";
	cout << "\'"  << sentence << "\'"<< endl;
	return 0;
}