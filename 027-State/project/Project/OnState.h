#pragma once
#include "DeviceState.h"

class Device;

class OnState : public DeviceState {
public:
	void On(Device *dev) override;
	void Off(Device *dev) override;
	void Pause(Device *dev) override;
};

