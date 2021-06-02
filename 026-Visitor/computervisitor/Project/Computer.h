#pragma once
#include <vector>

#include "ComputerPart.h"

class Computer : public ComputerPart {
public:
	void AddPart(ComputerPart *pc);	
public:
	void Accept(ComputerVisitor *pcv);
private:
	std::vector<ComputerPart *> m_parts;
};

