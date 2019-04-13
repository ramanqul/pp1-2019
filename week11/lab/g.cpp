#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPrime(int n) {
	for (int i = 2;i<n;i++) {
		if (n % i == 0) {
			return false;
		}
	}
	
	return true;
}

int main() {
	
	int n;
	cin >> n;
	
	vector<int> v;
	for (int i=0;i<n;i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}
	
	int k;
	cin >> k;
	
	int cnt = 0;
	
	for (int i=0;i<k;i++) {
		if (v[i] > k && isPrime(v[i])) {
			cnt++;
		}
	}
	
	cout << cnt;
	
	return 0;
}