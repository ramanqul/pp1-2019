#include <iostream>
#include <cstdlib>


using namespace std;

int main() {
	char buffer[33];
	
	string s = "123";
	int n;
	
	n = atoi(s.c_str());	
	string nAsString = itoa(n * 2, buffer, 10);
	
	cout << "n=" << n << endl;	
	cout << "n*2=" << nAsString << endl;		
	return 0;
}