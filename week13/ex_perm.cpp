#include <iostream>
#include <algorithm>

using namespace std;


int main() {
	int myints[] = {4,2,3};

	sort(myints, myints+3); //must to sort
	reverse (myints,myints+3); //reverse array 

	cout << "The 3! possible permutations with 3 elements:\n";
	
	do {
		cout << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';
	} while ( prev_permutation(myints,myints+3) ); //generate permitation

	cout << "After loop: " << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';

	return 0;	
}