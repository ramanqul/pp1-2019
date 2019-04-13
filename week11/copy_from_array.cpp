#include <iostream>
#include <vector>

using namespace std;

int main() {
		
	int size = 7;	
	int a[] = {1,2,3,4,5,6,10};
	
	vector<int> v(a, a + size);
	
	
	cout << "front " << v.front() << endl;
	cout << "back " << v.back() << endl;
	
	
	return 0;
}