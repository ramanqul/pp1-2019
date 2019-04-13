#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> v; // int v[]
	
	v.push_back(1); //v[0] = 1
	v.push_back(2);
	v.push_back(3);
	
	cout << v[0] << endl;	
	cout << v.at(0) << endl;
	cout << v.front() << endl;
	cout << v.back() << endl;
	cout << "vector's size = " << v.size() << endl;
	
	return 0;
}