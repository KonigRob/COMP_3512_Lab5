#pragma once

#include "AbstractOperation.hpp"

class MultiplicationOperation : public AbstratOperation
{
public:
	static const char OPERATION_CODE = '*';
	MultiplicationOperation() : AbstratOperation(OPERATION_CODE) {}
	int perform(int x, int y) { return x * y; }
	virtual ~MultiplicationOperation() {}
};