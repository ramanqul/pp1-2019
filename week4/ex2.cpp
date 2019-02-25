#include <iostream>

using namespace std;

int main() {
	int n;
    cin >> n;
	int a[n][n];
	
	for (int i=0;i<n;i++) {
		for (int j=0;j<n;j++) {
			cin >> a[i][j];
		}		
	}
	
	int minRowVal = a[0][0];
	
	//finding minimum in a row
	for (int i=0;i<n;i++) {
		for (int j=0;j<n;j++) {
			if (minRowVal > a[i][j]) {
				minRowVal = a[i][j];
			}
		}		
	}
	
	cout << "Minimum row value is " <<  minRowVal << endl;
	
	
	return 0;
}