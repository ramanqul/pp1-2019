#include <iostream>
#include <vector>

using namespace std;

//int findMax(int v[]) {
int findMax(vector<int> v) {
	
	int max = v[0]; //v.front(); or v.at(0)
	for (int i=0;i<v.size();i++) {
		if (v[i] > max) {
			max = v[i];
		}
	}
	
	return max;
}

int main() {
	
	vector<int> v;
	
	v.push_back(1);
	v.push_back(12);
	v.push_back(9);
	v.push_back(4);
	v.push_back(-1);
	v.push_back(0);
	
	
	cout << "maximum is " << findMax(v) << endl;
	
	
	return 0;
}