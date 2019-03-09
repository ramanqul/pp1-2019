#include <iostream>

using namespace std;

//function doesn't return nothing
void printMessage(string s) {
	cout << s << endl;
}

int main() {
	string name;
	getline(cin, name);
		
	printMessage(name);	
	
	return 0;
}

