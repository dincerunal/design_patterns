#pragma once
#include "Logger.h"

class ConsoleLogger : public Logger {
public:
	void Information(const std::string &msg)  override;
	void Warning(const std::string &msg)  override;
};

