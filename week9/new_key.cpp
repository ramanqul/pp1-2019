#include <iostream>

using namespace std;

int main() {
	int **p;
	
	//initialize it?
	//new keyword for that
	p = new int*[5];
	
	for (int i=0;i<5;i++) {
		p[i] = new int[5];
	}	

	for (int i=0;i<5;i++) {
		for (int j=0;j<5;j++) {
			p[i][j] = (i + 1) * (j + 1);
		}
	}	
	
	for (int i=0;i<5;i++) {
		for (int j=0;j<5;j++) {
			cout << p[i][j]  << " ";
		}
		cout << endl;
	}
	
	
	free(p);
	
	return 0;
}