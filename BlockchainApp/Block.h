#pragma once

#include <iostream>
#include "BlockHeader.h"
#include <vector>
#include "Transaction.h"
#include <algorithm>
#include <fstream>
#include <iterator>

class Block
{
private:
	unsigned int blockid;
	BlockHeader* header;
	std::vector<Transaction> *transactions;


public:
	Block(std::vector<Transaction> &transactions); // pass objects by reference
	~Block();

	unsigned int getBlockid();
	void getHeaderDetails();
	void printTransactions();
	void printBlockDetails();

	//override the cout << operator

};
