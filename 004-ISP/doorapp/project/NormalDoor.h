#pragma once
#include "Door.hpp"

class NormalDoor : public Door {
public:
	NormalDoor(bool isOpen = false) : m_isOpen(isOpen)
	{}
public:
	void Open() override;
	void Close() override;
	bool IsOpen() override;
	void SetOpen(bool isOpen)
	{
		//...
		m_isOpen = isOpen;
	}
	//...
private:
	bool m_isOpen;
};

