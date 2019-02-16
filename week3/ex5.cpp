#include <iostream>

using namespace std;
//sort bubble sort
int main() {
		
		int n = 10;
	int scores[n];
	scores[0] = 10;
	scores[1] = 11;
	scores[2] = 12;
	scores[3] = 8;
	scores[4] = 7;
	scores[5] = 0;
	scores[6] = 0;
	scores[6] = 0;
	scores[7] = 0;
	scores[8] = 0;
	scores[9] = 0;

	//nested loop
	for (int i=0;i<n;i++) {
	
		for (int j=i;j<n;j++) {
			
			if (scores[i] > scores[j]) {
				//swapping
				int t = scores[i];
				scores[i] = scores[j];
				scores[j] = t;
			}
		}
	}
	
	
	for (int i=0;i<n;i++) {
		cout << scores[i] << " ";
	}	
	cout << endl;
		
	return 0;
}