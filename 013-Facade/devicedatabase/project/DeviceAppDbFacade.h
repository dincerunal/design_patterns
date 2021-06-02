#pragma once

#include <vector>
#include "DeviceInfo.h"
#include "PortInfo.h"

class DeviceAppDbFacade {	
public:
	bool InsertDevice(const DeviceInfo &d);
	std::vector<DeviceInfo> GetDevices();
	std::vector<DeviceInfo> GetDevices(size_t n);
	bool UpdateDevice(const DeviceInfo &d);
	bool DeleteDevice(const DeviceInfo &d);
	bool DeleteDeviceById(int deviceId);

	bool InsertPort(const PortInfo &d);
	std::vector<PortInfo> GetPorts();
	std::vector<PortInfo> GetPorts(size_t n);
	bool UpdatePort(const PortInfo &d);	
	bool DeletePortById(int portId);
	//...
};

