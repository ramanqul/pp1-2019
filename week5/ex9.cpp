#include <iostream>
#include <sstream>

using namespace std;

int main() {
	
	stringstream ss;
	
	ss << 123;
	
	string myStr;
	ss >> myStr;
	
	cout << "number as string " << myStr << endl;
	
	return 0;
}