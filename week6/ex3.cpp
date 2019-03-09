#include <iostream>

using namespace std;

int square(int n) {
	return n * n;
}

int cube(int n) {
	return n * square(n); //10 * square(10) => 10 * ( 10 * 10 ) = 1000
}

int main() {
	int a = 10;
	
	int res1 = square(a); //100
	int res2 = cube(a);   
	
	cout << "square = " << res1 << endl;
	cout << "cube = " << res2 << endl;
	
	return 0;
}

