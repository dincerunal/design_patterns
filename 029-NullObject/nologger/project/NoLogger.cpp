#include "NoLogger.h"

void NoLogger::Information(const std::string &msg)
{
	if (m_log)
		m_log->Information(msg);
}
void NoLogger::Warning(const std::string &msg)
{
	if (m_log)
		m_log->Warning(msg);
}