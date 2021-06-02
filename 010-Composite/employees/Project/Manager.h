#pragma once
#include "Employee.h"

class Manager : public Employee {
public:
	Manager(const std::string &name, const std::string &department, double salary)
		: Employee(name, department), m_salary(salary)
	{}
	double GetSalary() const { return m_salary; }
	double CalculateInsurance() const override;
private:	
	double m_salary;
};

