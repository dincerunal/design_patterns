#pragma once


#include "Cloneable.h"

struct Color {
	int r = 255, g = 255, b = 255;
};

class Bird : public Cloneable<Bird> {
public: 
	Bird(const Color &color = Color()) : m_color(color)
	{}
public:
	virtual std::unique_ptr<Bird> Clone() const = 0;
	virtual void Throw() = 0;
	Color GetColor() const { return m_color; }
	void SetColor(const Color&c)
	{
		m_color = c;
	}
	virtual ~Bird() {}
protected:
	Color m_color;
};

