#pragma once

#include <memory>
#include "DeviceState.h"
#include "OffState.h"

class Device {
public:
	Device() : m_state(new OffState) {}
public:
	void SetState(DeviceState *state)
	{
		m_state = state;
	}
	void On()
	{
		m_state->On(this);
	}
	void Off()
	{
		m_state->Off(this);
	}
	void Pause()
	{
		m_state->Pause(this);
	}
public:
	DeviceState *m_state;	
};

