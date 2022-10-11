#include <iostream>
#include "Block.h"
#include "Transaction.h"

int main()
{
	
	// new keyword creates pointers to the newly created objects
	Transaction* tx1 = new Transaction(5, "sdvsdfsefsgin");
	Transaction* tx2 = new Transaction(5, "23452sdfsdf");
	Transaction* tx3 = new Transaction(23, "ghkjyu34");

	// create a vector of transaction objects (not pointers to objects)
	std::vector<Transaction> tx;

	// add the dereferenced transaction objects to the vector
	tx.push_back(*tx1);
	tx.push_back(*tx2);
	tx.push_back(*tx3);

	Block* block = new Block(tx);

	block->printBlockDetails();


	return 0;
}