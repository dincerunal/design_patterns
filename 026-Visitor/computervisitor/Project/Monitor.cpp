#include "Monitor.h"
#include "ComputerPartVisitor.h"

void Monitor::Accept(ComputerVisitor *pcv)
{
	//...
	pcv->Visit(this);
}

