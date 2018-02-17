#pragma once

#include "AdditionOperation.hpp"
#include "DivisionOperation.hpp"
#include "MultiplicationOperation.hpp"
#include "SubtractionOperation.hpp"
#include <stack>
#include <string>
#include <sstream>
#include <iostream>
#include <istream>



class RNPCalcuator
{
private:
	int result;
	std::stack<int> sttack;
	Operation* operation_type(int type) 
	{
		Operation * operation = NULL;
		switch (type)
		{
		case AdditionOperation::OPERATION_CODE:
			return new AdditionOperation;
			break;
		case DivisionOperation::OPERATION_CODE:
			return new DivisionOperation;
			break;
		case MultiplicationOperation::OPERATION_CODE:
			return new MultiplicationOperation;
			break;
		case SubtractionOperation::OPERATION_CODE:
			return new SubtractionOperation;
			break;
		}
	}
	void perform(Operation* oper) 
	{
		int x = sttack.top();
		sttack.pop();
		int y = sttack.top();
		sttack.pop();
		sttack.push(oper->perform(x, y));
	}
public:
	RNPCalcuator() {}
	int process_formula(std::string formula) {
		std::istringstream iss(formula);
		std::string token;
		while (iss >> token) {
			std::istringstream iss2(token);

			int n;
			if(iss2 >> n) {
				sttack.push(n);
			} else {
				perform(operation_type(token[0]));
			}
		}
		return sttack.top();
	}
};