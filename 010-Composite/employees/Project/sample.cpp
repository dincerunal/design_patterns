#include <iostream>
#include "Worker.h"
#include "Manager.h"

using namespace std;

#if 1
void payInsurance(const Employee &e)
{
	cout << e.GetName() << ":" << e.CalculateInsurance() << endl;

	for (int i = 0; i < e.size(); ++i)
		cout << "\t" << e[i]->GetName() << ":"<<  e[i]->CalculateInsurance() << endl;
}
int main()
{
	Worker w1("Ali", "Software", MORNING);
	Worker w2("Veli", "Software", EVENING);	
	Manager m("Selami", "Software", 20000);

	m.AddEmployee(w1);
	m.AddEmployee(w2);

	payInsurance(m);

	return 0;
}

#endif
