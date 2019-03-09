#include <iostream>

using namespace std;


string hello(string name) {
	return "Hello, " + name; //must
}

int main() {
	string name;
	cin >> name;
	
	string res = hello(name);	
	cout << res << endl;
	
	return 0;
}

