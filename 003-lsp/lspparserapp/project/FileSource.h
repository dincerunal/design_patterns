#pragma once

#include <cstdio>
#include "Source.hpp"

namespace Havelsan {
	class FileSource : public Source {
	public:
		FileSource(const char *fname);
	public:
		int GetNextChar() override;
	private:
		FILE *m_f;
	};
}

