#include <iostream>

using namespace std;


int findMin(int size, int a[], int i, int min) {
	//stop condition
	if (i >= size) {
		return min;
	}
	
	if (a[i] < min) {
		return findMin(size, a, i+1, a[i]);
	} else {
		return findMin(size, a, i+1, min);
	}
}
int findMax(int size, int a[], int i, 
			int max) {
	//stop condition
	if (i >= size) {
		return max;
	}
	if (a[i] > max) {
		return findMax(size, a, i+1, a[i]);
	} else {
		return findMax(size, a, i+1, max);
	}
}

int main() {
	int size = 10;
	int a[] = {
		4,3,-10,5,6,10,11,-1,10, 20
	};
	int minElement = findMin(size, a, 0, a[0]);
	cout << "minimum element is " << minElement << endl;
	int maxElement = findMax(size, a, 0, a[0]);
	cout << "maximum element is " << maxElement << endl;
	
	return 0;
}