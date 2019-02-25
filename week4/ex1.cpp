#include <iostream>

using namespace std;

int main() {
	int a[10]; //trash 
	int b[5][5];
	char c[5][5];
	
	int n = 5;
	
	int x[4][5][6];
	int y[5][5][5][5];
	int z[5][5][5][5][5];
	
	for (int i=0;i<n;i++) {
		
		for (int j=0;j<n;j++) {
		
			for (int k=0;k<n;k++) {
				
				x[i][j][k]++;
				
			}
		
			b[i][j] = 0;
		
		}
	}
	
	for (int i=0;i<n;i++) {
		
		for (int j=0;j<n;j++) {
		
			cout << b[i][j] << " ";
		
		}
		
		cout << endl;
	}
	
	n = 5;
	
	for (int i=0;i<n;i++) {
		
		for (int j=0;j<n;j++) {
		
			c[i][j] = 'a' + (i + 1)* (j+1);
		
		}
	}
	
	for (int i=0;i<n;i++) {
		
		for (int j=0;j<n;j++) {
		
			cout << c[i][j] << " ";
		
		}
		
		cout << endl;
	}
	
	
	return 0;
}