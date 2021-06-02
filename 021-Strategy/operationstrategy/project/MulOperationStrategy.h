#pragma once
#include "OperationStrategy.h"

class MulOperationStrategy : public OperationStrategy {
public:
	int DoOperation(int a, int b) override;	
};

