#include <iostream>

using namespace std;


int maxSeq(int size, int a[], int i) {
	if (i >= size) {
		return 0;
	}
	
	if (a[i] > a[i-1]) {
		return 1 + maxSeq(size, a, i+1);
	} else {
		return 1;
	}
}

int main() {
	int size = 15;
	int a[] = {0,1,2,1,3,0,2,1,3,4,1,2,3,4,5};
	
	
	for (int i=1;i<size;i++) {
		int result = maxSeq(size, a, i);
		cout << "result=" << result << endl;
	}
	
	return 0;
}