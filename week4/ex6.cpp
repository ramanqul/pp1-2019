#include <iostream>

using namespace std;
//lab4-m
int main() {
	
	int n;
	cin >> n;
	
	int a[n][n];
	
	int x=0,y=0;
	int nn = n;
	
	for (int i=0;i<n;i++) {
		
			if (i%4==0) {
				x++;
			} else if (i%4==1) {
				y++;
			} else if (i%4==2) {
				x--;
			} else if (i%4==3) {
				y--;
			}
			
			cout << "x=" << x << ",y=" << y << " ";
		
		cout << endl;
	}
	
	
	return 0;
}