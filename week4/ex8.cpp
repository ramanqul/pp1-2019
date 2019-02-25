#include <iostream>

using namespace std;


//lab4-q
int main() {
	
	int n;
	cin >> n;
			
	int i=0;
	
	int nn = 2 * n - 1;
	
	while (i<n) {
	
		int j=0;		
		while (j<nn) {

			if ((j >= n-i-1 && j < nn-(n-i-1))) {
					cout << "*";
				} else {
					cout << ".";
				}
		
			j++;
		}		
		cout << endl;
		
		i++;		
	}
		
	return 0;
}