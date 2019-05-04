//account.h
#include <vector>
#include <iostream>

using namespace std;

struct transaction {
	double amount;
	struct account* receiver;
	struct account* sender;
};

struct account {
	long iban;
	string name;
	string surname;
	double money;
	vector<transaction> history;
};

void printTransaction(struct transaction t);
void printAccountInfo(struct account* acc);
void withdraw(struct account &acc, double amount);