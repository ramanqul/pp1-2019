#include <iostream>

using namespace std;

int main() {
	string input;
	getline(cin, input);
	
	int count = 0;
	
	for(int prevIndex = 0; ; ) {
		int curIndex = input.find("case", prevIndex + 1);
		cout << "curIndex is " << curIndex << endl;
		
		if (curIndex != string::npos) {
			count++;
			prevIndex = curIndex;	
		} else {
			break;
		}
	}
	
	cout << "A case word has appeared in the input " 
		 << count << " times" << endl;
	
	return 0;
}