#include "BlockHeader.h"

BlockHeader::BlockHeader() : version(1.0), previousBlockHash(""), difficulty(12345), nonce(1234567)
{
}

BlockHeader::~BlockHeader()
{

}

int BlockHeader::getVersion()
{
	return version;
}

std::string  BlockHeader::getPreviousBlockHash()
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

std::string BlockHeader::getHeaderInputForHash()
{
	return std::to_string(version) + previousBlockHash + std::to_string(difficulty) + std::to_string(nonce);	
}

std::string BlockHeader::calculatePreviousBlockHash()
{
	std::string hashInput = getHeaderInputForHash();
	return hashInput + "sdocvnsud;swafaws";
}