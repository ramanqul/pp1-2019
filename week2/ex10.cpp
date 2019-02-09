#include <iostream>
using namespace std;

int main() {
	/*	
	for (int i=0;i<10;i++) {
		
		if (i == 5) {
			continue;
		} else {
			cout << i << endl;
		}
		cout << " - " << endl;
	}		
	*/
	bool breakAll = false;
	for (int i=0;i<10;i++) {
		for (int j=0;j<3;j++) {
			if (i == 5) {
				breakAll = true;
				break;
			} else {
				cout << i << endl;
			}
		}
		if (breakAll) {
			break;
		}
		cout << " - " << endl;
	}		
		
	
	
	return 0;
}