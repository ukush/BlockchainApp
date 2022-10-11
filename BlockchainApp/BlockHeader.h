#pragma once
#include <string>

class BlockHeader
{
private:
	unsigned int version;
	std::string previousBlockHash;
	unsigned int difficulty;
	unsigned int nonce;


public:
	BlockHeader();
	~BlockHeader();

	int getVersion();
	std::string getPreviousBlockHash();
	unsigned int getDifficulty();
	unsigned int getNonce();

	std::string getHeaderInputForHash();
	std::string calculatePreviousBlockHash();
};