#include <iostream>

using namespace std;
/*
Display number of occurences of each letter in the text, ex.:
Apple

A-1
p-2
l-1
e-1


*/
//Apple -> convert to array of chars
//['A', 'p', 'p', 'l', 'e'];

int main() {
	string input;
	getline(cin, input);
	//By default the element of array are not 
	//initilized, so for int array it is not equals to 0
	
	int uppercaseArray[26];
	int lowercaseArray[26];
	
	for (int i=0;i<26;i++) {
		uppercaseArray[i] = 0;
		lowercaseArray[i] = 0;
	}
	
	for (int index = 0;index<input.size();index++) {
		char c = input[index];
		if (c >= 'A' && c <= 'Z') {
			int positionOfLetter = c - 'A';
			cout << "Position of " << c 
				 << " is " << positionOfLetter << endl;
				 
			uppercaseArray[positionOfLetter]++;			
		} else if (c >= 'a' && c <= 'z') {
			int positionOfLetter = c - 'a';
			cout << "Position of " << c 
				 << " is " << positionOfLetter << endl;
				 
			lowercaseArray[positionOfLetter]++;
		}
	}	
	
	
	//Display occurences
	
	for (int i=0;i<26;i++) {
		char c = 'A' + i;
		
		int n = uppercaseArray[i];
		if (n > 0) {
			cout << c << " occured " << n << " times" << endl;
		}
	}
	
	for (int i=0;i<26;i++) {
		char c = 'a' + i;
		
		int n = lowercaseArray[i];
		if (n > 0) {
			cout << c << " occured " << n << " times" << endl;
		}
	}
	
	return 0;
}