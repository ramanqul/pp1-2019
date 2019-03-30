#include <iostream>

using namespace std;


int sumArray(int size, int a[], int i) {
	if (i >= size) {
		return 0;
	}
	
	return a[i] + sumArray(size, a, i+1);
}

int main() {
	int size = 5;
	int a[] = {8,7,1,2,3};
	
	int result = sumArray(size, a, 0);
	cout << "result=" << result << endl;
	
	return 0;
}