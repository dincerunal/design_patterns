#pragma once

#include <memory>
#include "Connection.hpp"
#include "Transmission.hpp"

namespace Havelsan {
	class Modem {
	public:
		Modem();
	public:
		void Connect();
		void Disconnect();
		size_t Send(const char *buf, size_t size);
		size_t Receive(char *buf, size_t size);
	private:
		std::unique_ptr<Connection> m_con;
		std::unique_ptr<Transmission> m_transmission;
	};
}

