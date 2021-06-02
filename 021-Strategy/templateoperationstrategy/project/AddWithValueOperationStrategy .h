#pragma once
#include "OperationStrategy.h"

class AddWithValueOperationStrategy : public OperationStrategy<int> {
public:
	AddWithValueOperationStrategy(int val = 0) : m_val(val) {}
public:
	int DoOperation(int a, int b) override;	
private:
	int m_val;
};

