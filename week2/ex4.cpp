#include <iostream>

using namespace std;

int main() {
	
	/*
		0 1
		   + = 1
		        += 2
				    += 3
					   += 5
	*/
	
	unsigned long long n1 = 0;
	unsigned long long n2 = 1;
	for (int i=0;i<100;i++) {
		unsigned long long t = n1 + n2;
		n1 = n2;
		n2 = t;
		cout << i << " is " << n2 << endl;
	}
	
	cout << "100th fib number =" << n2 << endl;
	
	return 0;
}








