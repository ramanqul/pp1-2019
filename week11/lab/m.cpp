#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main() {
	
	int n;
	cin >> n;
	
	set<int> s;
	
	for (int i=0;i<n;i++) {
		int x;
		cin >> x;
		s.insert(x);
	}

	int sum = 0;
	
	for (set<int>::iterator iter = s.begin();
		iter != s.end();
		iter++) {
	
		int val = *iter;
		sum = sum + val;
	
	}
	
	cout << sum << endl;
	
	return 0;
}







