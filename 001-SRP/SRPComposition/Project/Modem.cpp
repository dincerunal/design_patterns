#define TEST

#include "Modem.hpp"
#include "ModemConnection.hpp"
#include "ModemTransmission.h"

#ifdef TEST
#include <iostream>
#endif

namespace Havelsan {	
	Modem::Modem()
		: m_con(std::make_unique<ModemConnection>()),
		m_transmission(std::make_unique<ModemTransmission>())
	{}	

	void Modem::Connect()
	{
		m_con->Connect();		
	}
	void Modem::Disconnect()
	{
		m_con->Disconnect();
	}
	size_t Modem::Send(const char *buf, size_t size)
	{
		return m_transmission->Send(buf, size);
	}

	size_t Modem::Receive(char *buf, size_t size)
	{
		return m_transmission->Receive(buf, size);
	}
}