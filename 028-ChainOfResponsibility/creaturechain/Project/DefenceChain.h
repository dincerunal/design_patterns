#pragma once

#include "CreatureChain.h"

class DefenceChain : public CreatureChain {
public:
	using CreatureChain::CreatureChain;
public:
	void Handle() override;	
};

