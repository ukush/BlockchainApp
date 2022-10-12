#pragma once

#include <iostream>
#include "BlockHeader.h"
#include <vector>
#include "Transaction.h"
#include <algorithm>
#include <stdint.h>
#include <chrono>

class Block
{
private:
	unsigned int blockid;
	BlockHeader* header;
	std::vector<Transaction> *transactions;
	uint64_t timestamp;


public:
	Block(BlockHeader* header, std::vector<Transaction>& transactions);
	~Block();

	unsigned int getBlockid();
	void printBlockDetails();
	uint64_t getTimestamp();
};

