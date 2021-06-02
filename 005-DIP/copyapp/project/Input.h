#pragma once


class Input {
public:
	virtual size_t Read(char *buf, size_t startIndex, size_t size) ;
	virtual size_t Read() = 0;
};
