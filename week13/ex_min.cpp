#include <iostream>
#include <algorithm>

using namespace std;


int main() {

	char a = 'a';
	char x = 'x';
	
	cout << "Min character is " << min(a, x) << endl;

	string s1 = "Almaty";
	string s2 = "Astana";
	
	cout << "Min string is " << min(s1, s2) << endl;

	

	return 0;
	
}