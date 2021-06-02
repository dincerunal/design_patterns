#pragma once
#include <string>
#include "Logger.h"

class NoLogger : public Logger {
public:
	void Information(const std::string &msg)  override;
	void Warning(const std::string &msg)  override;
private:
	Logger *m_log{ nullptr };
};



