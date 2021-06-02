#pragma once
#include "OperationStrategy.h"

class OperationContext {
public:
	OperationContext(int a, int b, OperationStrategy &strategy)
		: m_a(a), m_b(b), m_strategy(&strategy) {}

public:
	int execute();
public:
	void SetStrategy(OperationStrategy &strategy)
	{
		//...
		m_strategy = &strategy;
	}
	//...
private:
	int m_a, m_b;
	OperationStrategy *m_strategy;
};

