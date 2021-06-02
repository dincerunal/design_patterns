#pragma once

#include <memory>
#include "DeviceInfo.h"

class DeviceInfoMemento { //Memento
	friend class DeviceInfo;
public:
	DeviceInfoMemento(const DeviceInfo &device)
		: m_device(device) {}
	DeviceInfo GetDeviceInfo() const { return m_device; }	
private:
	DeviceInfo m_device;
	//...
};

