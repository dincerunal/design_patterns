#include "FileInput.h"

#include <exception>

using namespace std;

FileInput &FileInput::operator = (FileInput &&r)
{	
	if (this == &r)
		return *this;

	m_f = r.m_f;
	r.m_f = NULL;

	return *this;
}

FileInput::FileInput(const char *name)
{
	if ((m_f = fopen(name, "rt")) == NULL)
		throw exception("can not open file");
}

size_t FileInput::Read()
{
	int ch = fgetc(m_f);

	return ch == EOF ? 0 : ch;
}


