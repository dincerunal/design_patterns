#pragma once
#include "ComputerPart.h"

class Monitor : public ComputerPart {
public:
	void Accept(ComputerVisitor *pcv) override;
};

