#pragma once
#include <string>
#include <iostream>

class Transaction
{
private:
	int txid;
	int amount;
	int fee;
	std::string sig;

public:
	Transaction(int amount, float fee, std::string sig);
	~Transaction();

	void getTransactionDetails();

};