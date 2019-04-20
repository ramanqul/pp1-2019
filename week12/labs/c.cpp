#include <iostream>
#include <map>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	
	map<int, int> rep;
	
	for (int i=0;i<n;i++) {
		int e;
		cin >> e;
		//2, 2, 2
		if (rep.find(e) != rep.end()) {
			rep[e] = rep[e] + 1;
		} else {
			rep[e] = 1;
		}
	}
	
	int cnt = 0;
	
	for (map<int, int>::iterator it = rep.begin();
		it != rep.end(); it++) {
	
		pair<int, int> p = *it;
		
		if (p.second > 1) {
			cnt++;	
		}
		
	}
	
	cout << cnt << endl;
}