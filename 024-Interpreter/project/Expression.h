#pragma once
#include <string>

class Expression {
public:
	virtual bool Interpret(const std::string &text) = 0;
};

