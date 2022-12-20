#pragma once
#include <iostream>
#include <vector>

class Transaction
{
private:
	uint32_t txid;
	int in_counter;
	vector<Input> vin;
	int out_count;
	vector<Output> vout;
	uint32_t lock_time;
	


public:
	Transaction(int amount, float fee, std::string sig);
	~Transaction();

	void getTransactionDetails();

};