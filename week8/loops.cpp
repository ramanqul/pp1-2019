#include <iostream>

using namespace std;

//iterative loop
void loop1(int n) {
	for (int i=0;i<n;i++) {
		cout << "iterative " << i << endl;
	}
}

void loop2(int n) {
	if (n < 0) {
		return;
	}
	
	cout << "iterative " << n << endl;
	loop2(n-1);
}

int main() {
	loop2(10);

	return 0;
}