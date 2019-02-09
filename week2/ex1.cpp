#include <iostream>

using namespace std;

int main() {
	int i;
	
	for (i=0;i<10;i = i + 1) {
		cout << "Hello " << i << endl;
	}
	
	cout << "i=" << i << endl;
	
	return 0;
}