#include <iostream>

using namespace std;

//pass by value
void modifyMe(int n[]) {
	n[0] = 10;
}

void modifyMe2(int *n) {
	n[0] = 20;
}

int main() {
	int a[] = {1,2,3};
	modifyMe(a); //copy of a
	cout << a[0] << "," << a[1] << "," << a[2] << endl;
	modifyMe2(a); //copy of a
	cout << a[0] << "," << a[1] << "," << a[2] << endl;
	//why 10?
	return 0;
}