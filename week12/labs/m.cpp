#include <iostream>
#include <queue>
#include <sstream>

using namespace std;

int main() {

	int n;
	cin >> n;
	
	queue<string> q;
	stringstream ss;
	
	for (int i=0;i<n;i++) {
		int action;
		cin >> action;
		
		if (action == 1) {
			string name;
			cin >> name;
			
			q.push(name);	
		} else if (action == 2) {
			q.pop();
		}
		
		if (!q.empty()) {
			string firstInTheQueue = q.front();
			ss << firstInTheQueue << endl;	
		} else {
			ss << "queue is empty" << endl;
		}
	}

	cout << ss.str() << endl;
	
	return 0;
}