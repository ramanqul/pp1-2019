#include <iostream>
using namespace std;


//#13
int main() {
	
	for (int h=1;h<=12;h=h+1) {
		for (int m=0;m<60;m=m+1) {
			if (h == 3 || h == 6 || h == 12) {
				cout << h << ":" << m << endl;
			}
		}
	}
	
	return 0;
}