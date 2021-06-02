#include "Employee.h"


void Employee::AddEmployee(Employee &e)
{
	//...
	m_employees.push_back(&e);
}

Employee *Employee::operator[](size_t index) const
{
	return m_employees[index];
}
