#include "DoubleAttackChain.h"
#include <iostream>

using namespace std;

void DoubleAttackChain::Handle()
{
	creature->SetAttack(creature->GetAttack() * 2);
	cout << "DoubleAttackChain" << endl;

	CreatureChain::Handle(); //Dikkat zincirin devam etmesi için gerekli
}


