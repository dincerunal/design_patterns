#include "Manager.h"

#include <iostream>

using namespace std;

double Manager::CalculateInsurance() const
{
	cout << "\tManager Insurance" << endl;

	return m_salary * 30;
}




