#include <iostream>

using namespace std;
//lab4-e
int main() {
	
	int n;
	cin >> n;
	//solution a
	for (int row=1;row<=n;row++) {
		for (int col=1;col<=row;col++) {
			cout << "[*] ";
		}
		cout << endl;
	}

	//solution b
	for (int row=0;row<n;row++) {
		for (int col=0;col<n;col++) {
			if (col <= row) {	
				cout << "[*] ";
			} else {
				cout << " ";
			}
		}
		cout << endl;
	}
	
	return 0;
}