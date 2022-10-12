#include <iostream>
#include "Block.h"
#include "Transaction.h"
#include <vector>

/*
* TODO
* Make mempool a singleton class?
* Figure out how to use sha256 in c++
* Make a wallet class
* Learn how to use public key cryptography to digitally sign a transaction
* Make a chain singleton class
*/





int main()
{
	// Set the capacity of the transaction mempool
	const int MEMPOOL_MAX_CAPACITY = 20;

	// Transaction Mempool
	std::vector<Transaction> mempool;

	unsigned int version = 1;
	unsigned int difficulty = 83647273712;
	unsigned int nonce = 7126372;
	unsigned int genesisBlockHash = 1287361287313;
	
	// make some transactions
	Transaction* tx1 = new Transaction(5, 0.02, "sdvsdfsefsgin");
	Transaction* tx2 = new Transaction(5, 0.01, "23452sdfsdf");
	Transaction* tx3 = new Transaction(23, 0.11, "ghkjyu34");


	// add the transactions to the mempool
	mempool.push_back(*tx1);
	mempool.push_back(*tx2);
	mempool.push_back(*tx3);

	// construct a block
	
	// construct block header
	BlockHeader* header1 = new BlockHeader(version, genesisBlockHash, difficulty, nonce);

	// get the list of transactions from the mempool
	std::vector<Transaction> tx = mempool;
	
	// construct a block
	Block* block1 = new Block(header1, tx);

	block1->printBlockDetails();




	/*
	* 1. A transaction is made
	*	- Using the private key --> digitially sign a transaction
	* 2. Validate the transaction
	* 3. Goes into a mempool (singleton?)
	* 4. Once the mempool is full, construct a block
	* 5. Make a block header
	* 6. put all of the transactions in the mempool into the block
	* 7. validate the block
	* 8. Add the block to the blockchain (chain is a singleton)
	*/




	return 0;
}

