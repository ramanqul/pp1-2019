#include <iostream>

using namespace std;

int main() {
	//arrays
	
	//int [10]scores; - wont work
	//is equal to 
	//int a;
	//int b;
	//int c;
	//...
	//int k;
	//always have to give type and size
	//static array declation
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
	//arrays in c++ lang doesn't set default values
	//instead set it manually
	
//	cout << scores[0] << " "
//	     << scores[1] << " "
//		 << scores[2];
	//dynamic way of array declation
	//int n;
	//cin >> n;
	//int *scores2 = new int[n];
	
	
	//search smth in array
	for (int i=0;i<n;++i) {
		if (scores[i] > 10) {
			cout << "more than 10 is " << scores[i] << endl;	
		} else {
			cout << "less than 10 is " << scores[i] << endl;
		}
	}
	
	return 0;
}