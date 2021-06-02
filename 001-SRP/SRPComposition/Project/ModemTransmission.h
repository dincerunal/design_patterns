#pragma once

#include <cstddef>
#include "Transmission.hpp"

namespace Havelsan {
	class ModemTransmission : public Transmission {
	public:
		size_t Send(const char *buf, size_t size) override;
		size_t Receive(char *buf, size_t size) override;
	};
}

