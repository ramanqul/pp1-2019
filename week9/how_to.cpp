#include <iostream>

using namespace std;
int main() {
	
	int v = 10;
	//program asks for the memory MMU
	//then memory address is returned
	int *address; //how to declare pointer
	
	address = &v; //return address of the memory location
		
	cout << address << endl; //outs location	
	
	return 0;
}