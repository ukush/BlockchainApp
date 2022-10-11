#pragma once
#include <string>

class Transaction
{
private:
	int txid;
	int amount;
	std::string sig;

public:
	Transaction(int amount, std::string sig);
	~Transaction();

	int getTxid();

};