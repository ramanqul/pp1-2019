#include <iostream>

using namespace std;
//lab4-g
int main() {
	
	int n;
	cin >> n;
	
	
	//row=0,col=0, no
	//row=0,col=1, no
	//row=0,col=n-1, n-1==n-0-1, yes
	
	for (int row=0;row<n;row++) {
		for (int col=0;col<n;col++) {
			if (col == n-row-1) {
				cout << (row + 1); 
			} else {
				cout << ".";
			}
		}
		
		cout << endl;
	}

	
	return 0;
}