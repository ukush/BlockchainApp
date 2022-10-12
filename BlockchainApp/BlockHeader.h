#pragma once
#include <string>
#include <functional>


class BlockHeader
{
private:
	unsigned int version;
	unsigned int previousBlockHash;
	unsigned int difficulty;
	unsigned int nonce;


public:
	BlockHeader(unsigned int version, unsigned int hash, unsigned int difficulty, unsigned int nonce);
	~BlockHeader();

	int getVersion();
	unsigned int getPreviousBlockHash();
	unsigned int getDifficulty();
	unsigned int getNonce();

};