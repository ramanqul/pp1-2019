#include <iostream>
using namespace std;


//#13
int main() {
	int n;
	cin >> n;
	
	int total = 0;
	int sum = 0;
	for (int i=1;i<=n;i++) {
		sum = sum + i;
		total = total + sum;
	}
	
	cout << total << endl;
	
	
	return 0;
}