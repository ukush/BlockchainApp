#include "Block.h"


Block::Block(BlockHeader *header, std::vector<Transaction> &transactions) : blockid(0), header(header), transactions(&transactions)
{
	// set timestamp as unix epoch time
	timestamp = std::chrono::system_clock::now().time_since_epoch().count();
}

Block::~Block()
{

}

unsigned int Block::getBlockid()
{
	return blockid;
}

uint64_t Block::getTimestamp()
{
	return timestamp;
}


void Block::printBlockDetails()
{
	std::cout << "Block Id: " << blockid << "\n";
	std::cout << "Time Created: " << getTimestamp() << "\n";
	std::cout << "Block Header" << "\n";
	std::cout << "Version: " << header->getVersion() << "\n";
	std::cout << "Previous Block Hash: " << header->getPreviousBlockHash() << "\n";
	std::cout << "Diificulty: " << header->getDifficulty() << "\n";
	std::cout << "Target Nonce: " << header->getNonce() << "\n";

	// print details of each transaction
	std::for_each(transactions->begin(), transactions->end(), [](Transaction& tx) {
		tx.getTransactionDetails();
		});
}

