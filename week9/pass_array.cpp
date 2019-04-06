#include <iostream>

using namespace std;

void passArray(int *a, int size) {
	cout << a << endl;
	for (int i=0;i<size;i++) {
		cout << a[i] << endl;
	}
}

int main() {
	int arr[] = {1,2,3,4,5};
	passArray(arr, 5);
	
	return 0;
}