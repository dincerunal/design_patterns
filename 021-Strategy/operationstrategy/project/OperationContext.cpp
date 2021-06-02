#include "OperationContext.h"

int OperationContext::execute()
{
	return m_strategy->DoOperation(m_a, m_b);
}
