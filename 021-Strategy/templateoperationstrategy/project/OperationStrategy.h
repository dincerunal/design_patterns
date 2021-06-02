#pragma once

template <typename T>
class OperationStrategy {
public:
	virtual T DoOperation(T t1, T t2) = 0;
};
