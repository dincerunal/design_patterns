#pragma once
#include <string>
#include "Logger.h"

class OptionalLogger : public Logger {
public:
	OptionalLogger(Logger *logger = nullptr) : m_log(logger) {}
public:
	void Information(const std::string &msg)  override;
	void Warning(const std::string &msg)  override;
private:
	Logger *m_log;
};



