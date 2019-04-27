#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;


bool isPrime(int n) {
	if (n == 1) {
		return false;
	}
	
	int d = n % 10;
	
	
	if (n > 9 && (d == 0 || d == 2 || d == 5 || d == 6 || d == 8)) {
		return false;
	}
	
	int root = sqrt(n);
	
	for (int i=2;i<=root;i++) {
		if (n % i == 0) {
			return false;
		}
	}
	
	return true;
}


int main() {

	vector<int> v;
	v.push_back(1);
	v.push_back(10);
	v.push_back(12);
	v.push_back(103);
	v.push_back(107);
	v.push_back(13);
	
	
	int cnt = count_if(v.begin(), v.end(), isPrime);
	
	cout << "there are " << cnt << " prime numbers" << endl; 

	return 0;
	
}