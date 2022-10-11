#include "Block.h"


Block::Block(std::vector<Transaction> &transactions) : blockid(0), transactions(&transactions)
{
	header = new BlockHeader();
}

Block::~Block()
{

}

unsigned int Block::getBlockid()
{
	return blockid;
}

void Block::getHeaderDetails()
{
	std::cout << "Block Header" << "\n";
	std::cout << "Version: " << header->getVersion() << "\n";
	std::cout << "Previous Block Hash: " << header->getPreviousBlockHash() << "\n";
	std::cout << "Diificulty: " << header->getDifficulty() << "\n";
	std::cout << "Target Nonce: " << header->getNonce() << "\n";
}

void Block::printTransactions()
{
	std::cout << transactions; // will print the memory address of the vector
}

void Block::printBlockDetails()
{
	std::cout << "Block Id: " << blockid << "\n";
	getHeaderDetails();
	printTransactions();
}