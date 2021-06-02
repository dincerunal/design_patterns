#pragma once
#include "OperationStrategy.h"

class AddOperationStrategy : public OperationStrategy<int> {
public:
	int DoOperation(int a, int b) override;	
};

