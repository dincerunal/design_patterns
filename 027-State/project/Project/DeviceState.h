#pragma once

class Device;

class DeviceState {
public:
	virtual void On(Device *dev) = 0;
	virtual void Off(Device *dev) = 0;
	virtual void Pause(Device *dev) = 0;
};