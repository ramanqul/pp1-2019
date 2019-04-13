#include <iostream>
#include <vector>
using namespace std;

int main() {	
	vector<int> v;
	
	v.push_back(1);
	v.push_back(12);
	v.push_back(9);
	v.push_back(4);
	v.push_back(-1);
	v.push_back(0);
	
	for (int i=0;i<v.size();i++) {
		cout << "vector's " << i << "th element is " 
		     << v[i] << endl;
	}
	
	
	
	
	
	
	
	
	
	return 0;
}