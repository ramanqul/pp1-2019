#include <iostream>

using namespace std;

/*
Using substr function
*/


int main() {
	string input;
	
	getline(cin, input);
	
	int indexOfCaseWord = -1;
	
	indexOfCaseWord = input.find("case", 53);
	
	if (indexOfCaseWord != string::npos) {
		string caseWord = input.substr(indexOfCaseWord, 4);	
		cout << "Case word is starting at position " 
			 << indexOfCaseWord << endl;
	} else {
		cout << "No case word detected!" << endl;
	}
		
	return 0;
}