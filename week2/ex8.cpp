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
			if (row == 0 
				|| row == n-1 
				|| col == 0 
				|| col == n-1) {
				cout << "#";	
			} else {
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}