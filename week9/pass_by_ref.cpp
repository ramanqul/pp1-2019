#include <iostream>

using namespace std;

//pass by value
void modifyMe(int n) {
	n = n + 10;
}
//pass by reference
void modifyMe2(int &n) {
	n = n + 10;
}

int main() {
	int a = 10;
	//modifyMe(a); //copy of a
	modifyMe2(a);
	cout << a << endl; //a=?
	//why 10?
	return 0;
}