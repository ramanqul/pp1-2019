#include <iostream>

using namespace std;

/*
Fibonacci sequence:
1 = 1
2 = 1
3 = 2
4 = 3
5 = 5
6 = 8
f(n) = f(n-1) + f(n-2)
*/
//fib(2) = fib(1) + fib(0) = 1
//fib(3) = fib(2) + fib(1) = 1 + 1 = 2
int fib(int n) {
	if (n <= 0) {
		return 0;
	} else if (n <= 1) {
		return 1;
	}
	return fib(n-1) + fib(n-2);
}

int main() {
	int n = 4;
	int result = fib(n);
	cout << "fib(" << n << ")=" << result << endl;
	
	
	return 0;
}