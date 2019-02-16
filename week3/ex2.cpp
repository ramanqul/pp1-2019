#include <iostream>
using namespace std;
int main() {
	
	//bit manipulation
	//binary operations
	//13 = 1101
	//0  =^0000
	//------------
	//     1101
	     
	//binary AND will be 1 of both sides are 1 
	//otherwise 0
	//binary OR will be 1 if any is one otherwise 0
	//binary XOR will be 1 if any is not same otherwise 0
	//binary NOT will be 1 if one is 0 else 1
	
	int x = 13 & 0;
	cout << "x=" << x << endl;
	
	// 1101
	//&0111
	//-----
	// 0101=5
	int y = 13 & 7;
	cout << "y=" << y << endl;
	
	int a = 13 | 0; //OR cmp
	int b = 13 | 7;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	int n = 13 ^ 0; // XOR cmp
	int m = 13 ^ 7;

	cout << "n=" << n << endl;
	cout << "m=" << m << endl;
	
	int k = !0;    // NOT cmp
	cout << "k=" << k << endl;
	
	
	return 0;
}