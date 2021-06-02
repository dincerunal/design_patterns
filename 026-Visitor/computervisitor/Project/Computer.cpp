#include "Computer.h"
#include "ComputerPartVisitor.h"

void Computer::AddPart(ComputerPart *pc)
{
	m_parts.push_back(pc);
}
void Computer::Accept(ComputerVisitor *pcv)
{
	for (auto cp : m_parts)
		cp->Accept(pcv);

	pcv->Visit(this);
}


