#define TEST

#include "ModemConnection.hpp"

#ifdef TEST
#include <iostream>
#endif

namespace Havelsan {
	void ModemConnection::Connect()
	{
#ifdef TEST
		std::cout << "Modem::Connect" << std::endl;
#endif
	}

	void ModemConnection::Disconnect()
	{
#ifdef TEST
		std::cout << "Modem::Disconnect" << std::endl;
#endif
	}
}


