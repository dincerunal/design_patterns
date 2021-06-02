#include "Keyboard.h"
#include "ComputerPartVisitor.h"

void Keyboard::Accept(ComputerVisitor *pcv)
{
	//...
	pcv->Visit(this);
}
