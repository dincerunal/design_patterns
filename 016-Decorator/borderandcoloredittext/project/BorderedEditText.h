#pragma once

#include <string>
#include <cstddef>
#include "EditText.h"
#include "BorderedControl.h"

class BorderedEditText : public EditText, public BorderedControl {
public:
	BorderedEditText(const std::string &text, size_t width, size_t height, size_t borderWidth)
		: EditText(text, width, height), m_borderWidth(borderWidth) 
	{
		SetBorder(m_borderWidth);
	}
public:	
	size_t GetBorderWidth() const { return m_borderWidth; }	
	void SetBorderWidth(int borderWidth);
private:
	void SetBorder(size_t borderWidth) override;
private:	
	size_t m_borderWidth;
};

