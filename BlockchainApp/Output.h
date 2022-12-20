#pragma once
#include <cstdint>
class Output
{

private:
	uint64_t value; //number of satoshis spent
	char* pk_locking_script; // locking script defining conditions that must be satisfied to spend transaction

public:
	Output(uint64_t value, char* pk_script);
	~Output();

};

