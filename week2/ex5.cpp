#include <iostream>
using namespace std;


//#12
int main() {
	int n;
	cin >> n;
	
	long long sum = 0;
	for (int i=1;i<=n;i++) {
		sum = sum + i * i;
	}
	
	cout << sum << endl;
	
	
	return 0;
}