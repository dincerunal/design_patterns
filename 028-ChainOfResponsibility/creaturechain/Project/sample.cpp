#include <iostream>
#include <memory>
#include "DoubleAttackChain.h"
#include "DefenceChain.h"
#include "Creature.h"

using namespace std;


#if 1
int main()
{
	shared_ptr<Creature> c = make_shared<Creature>(5, 6);
	DoubleAttackChain dac(c);
	DoubleAttackChain dac2(c);
	DefenceChain dc(c);
	DefenceChain dc2(c);

	dac.AddChain(&dc);
	dac.AddChain(&dac2);
	dac.AddChain(&dc2);	

	dac.Handle();

	cout << "Attack:" << c->GetAttack() << endl;
	cout << "Defence:" << c->GetDefence() << endl;

	return 0;
}

#endif
