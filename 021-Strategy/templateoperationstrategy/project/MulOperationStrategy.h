#pragma once
#include "OperationStrategy.h"

class MulOperationStrategy : public OperationStrategy<int> {
public:
	int DoOperation(int a, int b) override;	
};

