#include "CreatureChain.h"


void CreatureChain::AddChain(CreatureChain *cc)
{
	if (next != nullptr)
		next->AddChain(cc);
	else
		next = cc;
}

void CreatureChain::SetChain(CreatureChain *cc)
{
	next = cc;
}
void CreatureChain::Handle()
{
	if (next != nullptr)
		next->Handle();
}

