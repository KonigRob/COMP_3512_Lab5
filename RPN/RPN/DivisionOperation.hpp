#pragma once

#include "AbstractOperation.hpp"

class DivisionOperation : public AbstratOperation
{
public:
	static const char OPERATION_CODE = '/';
	DivisionOperation() : AbstratOperation(OPERATION_CODE) {}
	int perform(int x, int y) { return y / x; }
	virtual ~DivisionOperation() {}
};