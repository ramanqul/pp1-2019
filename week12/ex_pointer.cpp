#include <iostream>

using namespace std;

int main() {
	
	int a;
	a = 100;
	
	//pointer and reference
	int *p;
    p = &a;
	cout << "pointer to address of a equals to " << p << endl;
	
	int b = *p;
	
	cout << "b equals to " << b << endl;
	
}