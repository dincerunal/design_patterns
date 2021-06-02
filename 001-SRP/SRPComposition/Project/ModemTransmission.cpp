#define TEST

#include "ModemTransmission.h"


#ifdef TEST
#include <iostream>
#endif

namespace Havelsan {
	size_t ModemTransmission::Send(const char *buf, size_t size)
	{
#ifdef TEST
		std::cout << "Modem::Send" << std::endl;
#endif
		return size;
	}
	size_t ModemTransmission::Receive(char *buf, size_t size)
	{
#ifdef TEST
		std::cout << "Modem::Receive" << std::endl;
#endif
		return size;
	}
}


