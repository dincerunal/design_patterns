#include "FileSource.h"

#include <exception>

using namespace std;

namespace Havelsan {
	FileSource::FileSource(const char *fname)	
	{
		if ((m_f = fopen(fname, "rt")) == NULL)
			throw exception("Can not open file");
	}

	int FileSource::GetNextChar()
	{
		int ch = fgetc(m_f);

		if (ferror(m_f))
			throw exception("read error");

		return ch == EOF ? -1 : ch;
	}
}

