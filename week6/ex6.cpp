#include <iostream>

using namespace std;


void printSelectMenu() {
	cout << "Please select one of the following:" << endl;
}

void printMenu(int items_size, string items[]) {
	for (int i=0;i<items_size;i++) {
		cout << i+1 << " - " << items[i] << endl;
	}
}

int main() {
	int n;
	cin >> n;
	
	int items_size = n;
	string items[n];
	for (int i=0;i<n;i++) {
		cin >> items[i];
	}

	printSelectMenu();
	printMenu(items_size, items);
	
	return 0;
}

