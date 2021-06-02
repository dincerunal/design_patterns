#include "OptionalLogger.h"

void OptionalLogger::Information(const std::string &msg)
{
	if (m_log)
		m_log->Information(msg);
}
void OptionalLogger::Warning(const std::string &msg)
{
	if (m_log)
		m_log->Warning(msg);
}