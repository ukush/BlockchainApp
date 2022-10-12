#include "BlockHeader.h"


BlockHeader::BlockHeader(unsigned int version, unsigned int hash, unsigned int difficulty, unsigned int nonce)
	: version(version), previousBlockHash(hash), difficulty(difficulty), nonce(nonce)
{

}

BlockHeader::~BlockHeader()
{

}

int BlockHeader::getVersion()
{
	return version;
}

unsigned int BlockHeader::getPreviousBlockHash()
{
	return previousBlockHash;
}
unsigned int  BlockHeader::getDifficulty()
{
	return difficulty;
}
unsigned int  BlockHeader::getNonce()
{
	return nonce;
}