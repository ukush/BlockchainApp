#include "Transaction.h"

Transaction::Transaction(int amount, float fee, std::string sig) : amount(amount), fee(fee), sig(sig), txid(0)
{

}

Transaction::~Transaction()
{

}

void Transaction::getTransactionDetails()
{
	std::cout << "Transactions:" << "\n";
	std::cout << "Txid: " << txid << "\n";
	std::cout << "Amount: " << amount << "\n";
	std::cout << "Transaction Fee: " << fee << "\n";
	std::cout << "Signature: " << sig << "\n";
}