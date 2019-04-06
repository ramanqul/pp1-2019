#include <iostream>

using namespace std;

void askString(string s) {
	s = s + "?";
}

void askString2(string &s) {
	s = s + "?";
}
//accepting address of s
void askString3(string *s) {
	for (int i=0;i<6;i++) {
		//print out all characters of string
		cout << s[i] << endl;
	}
}
//‭7339504‬
//‭7339544‬
//40 bytes

int main() {
	string s = "hello";
	string *address = &s;
	//askString(s);
	askString2(s);
	askString3(&s); //extract address of var s
	
	cout << s << endl;
	cout << address << endl;
	
	return 0;
}