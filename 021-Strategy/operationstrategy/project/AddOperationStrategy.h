#pragma once
#include "OperationStrategy.h"

class AddOperationStrategy : public OperationStrategy {
public:
	int DoOperation(int a, int b) override;	
};

