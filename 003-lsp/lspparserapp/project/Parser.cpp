#include <iostream>
#include <cctype>
#include "Parser.hpp"

using namespace std;

namespace Havelsan {
	void Parser::SetSource(Source *src)
	{
		//...
		m_src = src;
	}

	void Parser::DoParse()
	{
		int count = 0;
		int ch;

		while ((ch = m_src->GetNextChar()) != -1)
			if (isspace(ch))
				++count;

		cout << "Count:" << count << endl;
	}
}


