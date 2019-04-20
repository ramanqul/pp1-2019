#include <iostream>
#include <queue>

using namespace std;

int main() {
	queue<int> q;
	
	q.push(2010);
	q.push(2012);
	q.push(2014);
	q.push(2016);
	q.push(2018);
	
	/*
	cout << q.front() << endl;
	q.pop();
	cout << q.front() << endl;
	q.pop();
	cout << q.front() << endl;
	q.pop();
	cout << q.front() << endl;
	*/
	
	while (!q.empty()) {
		int theTop = q.front();
		q.pop();
		
		cout << theTop << endl;
	}
	
}