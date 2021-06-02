#pragma once

#include <memory>

template <typename T>
class Cloneable {
public:
	virtual std::unique_ptr<T> Clone() const = 0;
};
