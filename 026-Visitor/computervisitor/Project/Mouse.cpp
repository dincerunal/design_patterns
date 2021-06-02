#include "Mouse.h"
#include "ComputerPartVisitor.h"

void Mouse::Accept(ComputerVisitor *pcv)
{
	//...
	pcv->Visit(this);
}

