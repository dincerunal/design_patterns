#pragma once
#include "Door.hpp"
#include "Timer.hpp"
#include "TimerClient.hpp"

class TimerDoor : public Door, public Timer, public TimerClient {
public: 
	void Open() override;
	void Close() override;
	bool IsOpen() override;
	void Timeout() override;
	void Register() override;
};

