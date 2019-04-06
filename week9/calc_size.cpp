#include <iostream>

using namespace std;



int main() {
	int a = 10;
	int *p = &a; //pointer p equals to reference of a
	string s = "hello";
	string *ps = &s;
	int arr[] = {12,3,4,5,56,6};
	int *pArr = arr;
	
	cout << "sizeof(a)=" << sizeof(a) << endl;
	cout << "sizeof(p)=" << sizeof(p) << endl;
	cout << "sizeof(ps)=" << sizeof(ps) << endl;
	cout << "sizeof(pArr)=" << sizeof(pArr) << endl;
	return 0;
}