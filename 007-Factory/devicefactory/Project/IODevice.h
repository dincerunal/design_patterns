#pragma once

#include "Device.h"


class IODevice : public Device {
public:
	IODevice(int maxSlotNumber, const std::string &name, const std::string &protocol) : m_maxSlotNumber(maxSlotNumber), Device(name, protocol) {}
	void sendAlarm(const std::string &alarm) override;
private:
	int m_maxSlotNumber;
};
