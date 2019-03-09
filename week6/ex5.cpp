#include <iostream>

using namespace std;


/*
D - don't repeate
R - repeat
Y - yourself
*/

void printSelectMenu() {
	cout << "Please select one of the following:" << endl;
}

void printMenu() {
	printSelectMenu();
	
	int items_size = 3;
	string items[] = {
		"Soup", "Steak", "Salad"
	};
	
	for (int i=0;i<items_size;i++) {
		cout << i+1 << " - " << items[i] << endl;
	}
}


//function doesn't return nothing
void printMessage(string s) {
	cout << s << endl;
}

int main() {
	printSelectMenu();
	printMenu();
	printSelectMenu();
	
	return 0;
}

