#include <iostream>
#include <vector>

using namespace std;

void modifyVector(vector<int> &v) {
	
	v[0] = 100; //same as in arrays
	v[v.size()-1] = 99;
	
}

void deleteFirstAndLast(vector<int> &v) {
	v.erase(v.begin());
	v.erase(v.begin() + v.size() - 1); // size - 1
}


int main() {
		
	int size = 7;	
	int *a = {1,2,3,4,5,6,10};
	
	int *p = a + size;
	
	vector<int> v(a, p);
	
	modifyVector(v);
	
	cout << "front " << v.front() << endl;
	cout << "back " << v.back() << endl;
	cout << "size = " << v.size() << endl;
	
	deleteFirstAndLast(v);
	
	cout << "front " << v.front() << endl;
	cout << "back " << v.back() << endl;
	cout << "size = " << v.size() << endl;
	return 0;
}