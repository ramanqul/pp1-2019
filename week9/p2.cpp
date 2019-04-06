#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int **p; // = int a[][];
	p = (int **)malloc(5 * sizeof(int*));
	
	/*
	{
		{ .... }
		{ .... } 
		{ .... }
		{ .... }
		{ .... }
	}
	*/
	long x = 10;
	int y = (int) x;
	char c = 'a';
	int code = (int)c;
	
	for (int i=0;i<5;i++) {
		p[i] = (int *) malloc(5 * sizeof(int));
	}
	
	for (int i=0;i<5;i++) {
		for (int j=0;j<5;j++) {
			p[i][j] = (i + 1) * (j + 1);
			//p[i] = (i + 1);
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