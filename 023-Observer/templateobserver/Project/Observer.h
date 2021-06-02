#pragma once

template <typename T>
class Observer {
public:	
	Observer(T *t) : m_t(t) {}
	virtual void Update() = 0;
protected:
	T *m_t;
};
