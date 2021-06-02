#pragma once

#include <memory>

#include "Creature.h"

class CreatureChain {
public:
	CreatureChain(std::shared_ptr<Creature> c) 
		: creature(c), next(nullptr) {}
public:
	void AddChain(CreatureChain *cc);
	void SetChain(CreatureChain *cc);	
	virtual void Handle();	
protected:
	CreatureChain *next;
protected:
	std::shared_ptr<Creature> creature;
};

