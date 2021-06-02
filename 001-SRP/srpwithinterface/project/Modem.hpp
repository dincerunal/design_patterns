#pragma once

#include "Connection.hpp"
#include "Transmission.hpp"

namespace Havelsan {
	class Modem : public Connection, public Transmission {
	public:
		//...
		void Connect() override;
		void Disconnect() override;
		size_t Send(const char *buf, size_t size) override;
		size_t Receive(char *buf, size_t size) override;
	};
}

