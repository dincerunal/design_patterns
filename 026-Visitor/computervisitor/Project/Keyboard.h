#pragma once
#include "ComputerPart.h"

class Keyboard : public ComputerPart {
public:
	void Accept(ComputerVisitor *pcv) override;
};

