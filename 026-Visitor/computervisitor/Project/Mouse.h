#pragma once

#include "ComputerPart.h"

class Mouse : public ComputerPart {
public:
	void Accept(ComputerVisitor *pcv) override;
};

