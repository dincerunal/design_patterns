#include "DefenceChain.h"
#include <iostream>

using namespace std;

void DefenceChain::Handle()
{
	creature->SetAttack(creature->GetAttack() - 1);
	cout << "DefenceChain" << endl;

	CreatureChain::Handle(); //Dikkat zincirin devam etmesi için gerekli
}


