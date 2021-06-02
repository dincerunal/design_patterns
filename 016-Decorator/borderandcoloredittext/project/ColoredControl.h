#pragma once

#include <cstdint>

class ColoredControl {
public:
	virtual void SetColor(uint8_t r, uint8_t g, uint8_t b) = 0;
};
