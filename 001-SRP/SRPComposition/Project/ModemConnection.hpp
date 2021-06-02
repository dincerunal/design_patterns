#pragma once

#include "Connection.hpp"
namespace Havelsan {
	class ModemConnection : public Connection {
	public:
		void Connect() override;
		void Disconnect() override;
	};
		
}


