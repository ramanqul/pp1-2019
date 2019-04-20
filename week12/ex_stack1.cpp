#include <iostream>
#include <stack>

using namespace std;



int main() {
		
	int a;
	int b;
	
	stack<int> mystack; //FILO
	
	mystack.push(2010);
	mystack.push(2012);
	mystack.push(2014);
	mystack.push(2016);
	mystack.push(2018);
	
	//hierarchy
	/*
	2018 <- removed
	2016 <- removed
	2014 <- removed
	2012 <- top
	2010
	
	.pop - removing top element from stack
	.top - returning top elements value from stack
	*/
	/*
	mystack.pop();
	cout << mystack.top() << endl;
	mystack.pop();
	cout << mystack.top() << endl;
	mystack.pop();
	cout << mystack.top() << endl;
	*/
	
	while (!mystack.empty()) {
		int theTop = mystack.top();
		mystack.pop();
		
		cout << theTop << endl;
	}
	
	return 0;
}