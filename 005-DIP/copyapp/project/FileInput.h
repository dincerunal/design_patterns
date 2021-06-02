#pragma once
#include "Input.h"

#include <cstdio>

class FileInput : public Input {
public:
	FileInput(const char *name);
	FileInput(const FileInput &) = delete;
	FileInput(FileInput &&r) : m_f(r.m_f)
	{
		r.m_f = NULL;
	}
	FileInput &operator = (const FileInput &) = delete;
	FileInput &operator = (FileInput &&r);	
	size_t Read() override;
	~FileInput() 
	{
		if (m_f != NULL)
			fclose(m_f);
	}
private:
	std::FILE *m_f;
};

