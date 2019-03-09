#include <iostream>

using namespace std;

void generateNumbers(int a[], int n) {
	for (int i=0;i<n;i++) {
		if (i % 2 == 0) {
			a[i] = i * 5 + 1;
		} else {
			a[i] = i * 2 + 1;
		}
	}
}

int main() {
	int n = 5;
	int b[n];
	
	generateNumbers(b, n);
	
	for (int i=0;i<n;i++) {
		cout << b[i] << endl;
	}
	
	return 0;
}

