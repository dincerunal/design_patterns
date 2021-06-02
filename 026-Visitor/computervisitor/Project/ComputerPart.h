#pragma once

class ComputerVisitor;

class ComputerPart {
public:
	virtual void Accept(ComputerVisitor *pcv) = 0;
};

