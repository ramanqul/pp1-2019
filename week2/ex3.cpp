#include <iostream>

using namespace std;

int main() {
	int i = 0; // ?
	int j = 5;
	
	while (i < j) {
		cout << "While " << i << endl;	
		i = i + 2;
	}
	
	cout << "i=" << i << endl;
	
	return 0;
}