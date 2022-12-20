#pragma once
#include <vector>
#include "Output.h"

class Input
{
private:
	char32_t* Txid [32]; // pointer referencing the transaction that contains the UTXO being spent
	uint32_t vout_index; // the index of the UTXO from the transaction
	char* signature_script; // the script which satisfies the conditions in the output's pubkey
};

