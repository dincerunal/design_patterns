#pragma once

#include <cstddef>

namespace Havelsan {
	class Transmission {
	public:
		virtual size_t Send(const char *buf, size_t size) = 0;
		virtual size_t Receive(char *buf, size_t size) = 0;	
	};
}