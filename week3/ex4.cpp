#include <iostream>

using namespace std;

int main() {
	//arrays
	
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
	
	int max_score = scores[0];
	int min_score = scores[0];
	int min_none_zero = scores[0];
	
	for (int i=1;i<n;i++) {
		if (max_score < scores[i]) {
			max_score = scores[i];
		}
		
		if (min_score > scores[i]) {
			min_score = scores[i];
		}
		
		if (min_none_zero > scores[i] 
		  && scores[i] != 0) {
			min_none_zero = scores[i];
		}
	}
	
	cout << "max score=" << max_score << endl;
	cout << "min score=" << min_score << endl;
	cout << "min non zero=" << min_none_zero << endl;
	
	return 0;
}