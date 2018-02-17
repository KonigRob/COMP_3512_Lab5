#pragma once
#include "Operation.hpp"

class AbstratOperation : public Operation
{
	char operation_type;
public:
	AbstratOperation() {};
	AbstratOperation(char sign) : operation_type{ sign } {};
	char get_code() override {return operation_type;}
	virtual ~AbstratOperation() {}
};