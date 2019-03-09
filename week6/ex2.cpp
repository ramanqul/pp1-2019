#include <iostream>

using namespace std;

int sum(int a, int b) {
	return a + b;
}

int main() {
	int x = 10;
	int y = 11;
	
	int res = sum(x, y);
	cout << res << endl;
	
	return 0;
}

