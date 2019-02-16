#include <iostream>

using namespace std;


void changeValue(int& a) {
	a = 10;
}

//unary operators
int main() {
	int a = 1;
	a = -a;
	
	//preincrement
	int b = 10;
	cout << "b=" << b++ << endl; //b = b +1; -> unary postincrement operation
	b = 10;
	cout << "b=" << ++b << endl; //b = b +1; -> unary preincrement operation
	
	int c = 20;
	cout << "c=" << c-- << endl; // 20
	c = 20;
	cout << "c=" << --c << endl; //19
	
	
	bool ok = false;
	
	ok = !ok;
	cout << "is ok=" << ok << endl;
	
	//address of -> &
	
	a = 0;
	changeValue(a);
	cout << "a=" << a << endl;
	//sizeof - returns size of type
	
	int ll_size = sizeof(unsigned long long);
	cout << "ll_size=" << ll_size << " bytes" << endl;
	
	return 0;
}