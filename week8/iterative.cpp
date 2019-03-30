#include <iostream>

using namespace std;

/*
Sum of number from 1 .. n: iterative
*/
int sumOfN(int n) {
	int sum = 0;
	for (int i=1;i<=n;i++) 
	{
		sum = sum + i;
	}		
	return sum;
}

int sumOfN2(int n) {
	if (n <= 0) {
		return 0;
	}
	
	cout << "input = " << n << ", " << n-1 << "+" << endl;
	
	return n + sumOfN2(n-1); //recursive call of itself
}

/*
  input = 10, 10 + 
         input = 9, 9 + 
            input = 8, 8 + ...		 
               ....
			      input = 0, 0

*/




int main() {
	
	int n = 10;
	int result = sumOfN2(n);
	cout << "sum of " << n << "=" << result << endl;
	
	return 0;
}