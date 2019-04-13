#include <iostream>
#include <set>

using namespace std;

int main() {
	
	set<int> s;
	
	cout << "size of set = " << s.size() << endl;
	
	s.insert(1);
	s.insert(2);
	s.insert(3);
	s.insert(4);
	
	
	set<int>::iterator iter = s.begin();
	
		

	return 0;
}