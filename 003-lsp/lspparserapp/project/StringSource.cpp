#include "StringSource.h"

namespace Havelsan {
	int StringSource::GetNextChar()
	{
		return m_index >= m_str.size() ? -1 : m_str[m_index++];	
	}
}