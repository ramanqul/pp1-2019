#include <iostream>
#include <algorithm>
#include <vector>
#include "account.h"

using namespace std;


void printTransaction(struct transaction t) {
	cout << "Transaction ";
	cout << t.receiver->iban  << " ";
	cout << "Amount ";
	cout << t.amount << endl;
}

void printAccountInfo(struct account* acc) {
	cout << "Account Info:" << endl
		 << acc->name << " " 
		 << acc->surname << " "
		 << acc->money << endl;
	
	for_each(acc->history.begin(), 
			 acc->history.end(),
			 printTransaction);
		 
}


void withdraw(struct account &acc, double amount) {
	if (acc.money >= amount) {
		acc.money = acc.money - amount;
		struct transaction t;
		
		t.amount = -amount;
		t.receiver = &acc;
		
		acc.history.push_back(t);
	}	
}