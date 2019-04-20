#include <iostream>
#include <deque>

using namespace std;

int main() {
	deque<int> d;
	d.push_back(1);
	d.push_front(2);
	d.push_back(3);
	d.push_front(4);
	
	cout << "ordering is " << "4,2,1,3" << endl;
	
	cout << "the first element is " << d.front() << endl;
	cout << "calling pop_front " << endl;
	d.pop_front();
	cout << "the first element is " << d.front() << endl;
	
	cout << "the last element is " << d.back() << endl;
	d.pop_back();
	cout << "calling pop_back" << endl;
	cout << "the last element is " << d.back() << endl;
	
	cout << "size of the queue is " << d.size() << endl;
	
	return 0;
}