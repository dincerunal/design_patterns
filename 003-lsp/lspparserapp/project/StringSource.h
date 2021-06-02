#pragma once

#include <string>
#include <cstddef>
#include "Source.hpp"

namespace Havelsan {
	class StringSource : public Source {
	public:
		StringSource(const std::string &r) : StringSource(r.data())
		{}
		StringSource(const char *s) : m_str(s), m_index(0)
		{}
	public:
		int GetNextChar() override;
	private:
		std::string m_str;
		size_t m_index;
	};
}

