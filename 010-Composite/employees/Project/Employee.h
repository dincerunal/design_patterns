#pragma once

#include <string>
#include <vector>

class Employee {
public:
	Employee(const std::string &name, const std::string &department) : m_name(name), m_department(department)
	{}
	virtual ~Employee() {}
public:
	void AddEmployee(Employee &e);	
	size_t size() const { return m_employees.size(); }
	Employee *operator[](size_t index) const;
	virtual double CalculateInsurance() const = 0;
public:
	std::string GetName() const { return m_name; }
	std::string GetDepartment() const { return m_department; }
private:
	std::string m_name;
	std::string m_department;
	std::vector<Employee *> m_employees;
};

