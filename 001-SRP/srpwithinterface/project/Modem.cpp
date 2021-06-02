#define TEST

#include "Modem.hpp"

#ifdef TEST
#include <iostream>
#endif

namespace Havelsan {
	void Modem::Connect()
	{
#ifdef TEST
		std::cout << "Modem::Connect" << std::endl;
#endif
	}

	void Modem::Disconnect()
	{
#ifdef TEST
		std::cout << "Modem::Disconnect" << std::endl;
#endif
	}

	size_t Modem::Send(const char *buf, size_t size)
	{
#ifdef TEST
		std::cout << "Modem::Send" << std::endl;
#endif
		return size;
	}
	size_t Modem::Receive(char *buf, size_t size)
	{
#ifdef TEST
		std::cout << "Modem::Receive" << std::endl;
#endif
		return size;
	}
}