#include <iostream>

using namespace std;

int main() {
	char letters[] = {'H', 'i'};
	
	string fromLetters(letters);
	
	string input;
	
	getline(cin, input);
	
	fromLetters = fromLetters + input;
	
	cout << fromLetters << endl;
	
	return 0;
}