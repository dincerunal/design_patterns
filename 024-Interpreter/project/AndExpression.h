#pragma once
#include "Expression.h"
class AndExpression : public Expression {
public:
	AndExpression(Expression &exp1, Expression &exp2) 
		: m_exp1(exp1), m_exp2(exp2) {}
public:
	bool Interpret(const std::string &text) override;
private:
	Expression &m_exp1, &m_exp2;
};

