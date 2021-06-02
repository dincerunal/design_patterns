#pragma once

#include <cstddef>

class BorderedControl {
public:
	virtual void SetBorder(size_t borderWidth) = 0;
};
