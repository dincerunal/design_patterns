#pragma once

namespace Havelsan {
	class Connection {
	public:
		virtual void Connect() = 0;
		virtual void Disconnect() = 0;	
	};
}
