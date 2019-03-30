#include <iostream>

using namespace std;

/*

1! = 1
2! = 2
3! = 6
n! = n * n-1 * n-2 * ... *1
*/

//iterative solution
int fact1(int n) {
	int f = 1;
	for (int i=1;i<=n;i++) 
	{
		f = f * i;
	}

	return f;		
}

/*
    1:n=5, 5 * step 2
    2:n=4, 5 * 4 * step 3
	3:n=3, 5 * 4 * 3 * step 4
	4:n=2, ...
	5:n=1, 5 * 4 * 3 * 2 * 1 (is stop condition)  = 120

*/
int fact2(int n) {
	if (n <=1) {
		return 1;
	}
	
	cout << "input = " << n << ", " << n-1 << " * " << endl;
	
	return n * fact2(n-1);		
}

int main() {
	
	int n = 5;
	int result = fact2(n);
	cout << "fact(" << n << ")=" << result << endl;
	
	return 0;
}