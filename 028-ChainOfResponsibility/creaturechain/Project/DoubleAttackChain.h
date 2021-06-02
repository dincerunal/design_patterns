#pragma once

#include "CreatureChain.h"

class DoubleAttackChain : public CreatureChain {
public:
	using CreatureChain::CreatureChain;
public:
	void Handle() override;	
};

