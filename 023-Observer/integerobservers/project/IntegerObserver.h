#pragma once

#include "Integer.h"
class IntegerObserver {
public:
	IntegerObserver(Integer *pi) : m_pi(pi) {}
	virtual void Update() = 0;
protected:
	Integer *m_pi;	
};

