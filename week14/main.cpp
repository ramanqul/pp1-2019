#include <iostream>
#include <algorithm>
#include <vector>
#include "account.h"

using namespace std;

int main() {
	struct account a1;
	
	a1.name = "Kaisar";
	a1.surname = "Zhanbolat";
	a1.iban = 123456789;
	a1.money = 100000;
	
	printAccountInfo(&a1);
	withdraw(a1, 1000);
	printAccountInfo(&a1);
	
	return 0;
}