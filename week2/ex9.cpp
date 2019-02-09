#include <iostream>
using namespace std;


//#17
int main() {
	int n;
	cin >> n;
	//row loop
	for (int row = 0;row < n;row++) {
		//column loop
		for (int col = 0;col < n; col++) {
			if (row == n-1 
				|| col == 0
				|| row == col) {
				cout << "#";	
			} else {
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}