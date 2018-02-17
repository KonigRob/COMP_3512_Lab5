#pragma once

#include "AbstractOperation.hpp"

class AdditionOperation : public AbstratOperation
{
public:
	static const char OPERATION_CODE = '+';
	AdditionOperation() : AbstratOperation(OPERATION_CODE) {}
	int perform(int x, int y) { return x + y; }
	virtual ~AdditionOperation() {}
};