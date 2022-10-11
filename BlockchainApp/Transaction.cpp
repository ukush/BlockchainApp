#include "Transaction.h"

Transaction::Transaction(int amount, std::string sig) : amount(amount), sig(sig), txid(0)
{

}

Transaction::~Transaction()
{

}

int Transaction::getTxid()
{
	return txid;
}