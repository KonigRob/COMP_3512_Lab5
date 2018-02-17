#pragma once

#include "AbstractOperation.hpp"

class SubtractionOperation : public AbstratOperation
{
public:
	static const char OPERATION_CODE = '-';
	SubtractionOperation() : AbstratOperation(OPERATION_CODE) {}
	int perform(int x, int y) { return y - x; }
	virtual ~SubtractionOperation() {}
};