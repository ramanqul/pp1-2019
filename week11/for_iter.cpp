#include <iostream>
#include <vector>

using namespace std;


int main() {	
	vector<int> v;
	
	int x;
	
	while (cin >> x) {
		v.push_back(x);
	}
	
	cout << "size of vector = " 
	     << v.size() << endl;
	
	for (vector<int>::iterator iter = v.begin();
	     iter != v.end();
		 iter++) {
				
		int val = *iter;		
		
		cout << val << endl;		
				
	}
	
	
	
	return 0;
}