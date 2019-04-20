#include <iostream>
#include <stack>

using namespace std;

int main() {
	
	string line;
	cin >> line;
	
	stack<char> brackets;
	
	
	for (int i=0;i<line.size();i++) {	
		char c = line[i];
		//(()())
		
		/*
		1: c = (, [] => [(]
		2: c = (, [(] => [(,(]
		3: c = ), [(, (] => [(]
		4: c = (, [(] => [(, (]		
		5: c = ), [(, (] => [(]
		6: c = ), [(] => []
		*/
		
		
		
		
		
		
		if (c == '(') {
			brackets.push(c);	
		} else if (c == ')' && brackets.top() == '(') {
			brackets.pop();
		}
		
	}
	
	if (brackets.empty()) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	
	return 0;
}