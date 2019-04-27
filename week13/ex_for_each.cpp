#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

void displayOnlyLetters(string s) {
	for (int i=0;i<s.size();i++) {
		if (s[i] >='a' && s[i] <= 'z' 
			|| s[i] >='A' && s[i] <= 'Z') {
			
			cout << s[i];
		}
	}
	cout << endl;
}

int main() {
	vector<string> v;
	v.push_back(" 12abc");
	v.push_back("as asd 3");
	v.push_back("Hello 123");
	v.push_back("!@#");
	v.push_back("11+54");
	for_each(v.begin(), v.end(), displayOnlyLetters);

	return 0;
	
}