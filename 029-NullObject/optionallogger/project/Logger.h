#pragma once

#include <string>

class Logger {
public:
	virtual void Information(const std::string &msg) = 0;
	virtual void Warning(const std::string &msg) = 0;
};