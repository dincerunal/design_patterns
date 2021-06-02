#pragma once

#include "Source.hpp"

namespace Havelsan {
	class Parser {
	public:
		Parser(Source *src) : m_src(src)
		{}
		Source *GetSource() const { return m_src; }
		void SetSource(Source *src);
		void DoParse();
	private:
		Source *m_src;
	};
}
