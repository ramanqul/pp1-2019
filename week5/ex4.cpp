#include <iostream>

using namespace std;

/*
Find any upper case letter presence in the 
string variable

*/

int main() {
	string input;
	
	getline(cin, input);
	
	int letterA = (int)'A';
		
	cout << "ASCII code " << letterA << endl;	
	
	bool present = false;
	
	for (char letter = 'A';letter <= 'Z';letter++) {
		if (input.find(letter) != string::npos) {
			cout << "Uppercase letter present!" << endl;
			present = true;
			break;
		}			
	}

	if (!present) {
		cout << "No upper case letters" << endl;
	}		
	
	
		
	return 0;
}