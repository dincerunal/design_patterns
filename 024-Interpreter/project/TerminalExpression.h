#pragma once
#include "Expression.h"

class TerminalExpression : public Expression {
public: 
	TerminalExpression(const char *str) : m_str(str) {}
public:
	bool Interpret(const std::string &text) override;
private:
	std::string m_str;
};

