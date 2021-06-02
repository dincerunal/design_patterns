#include "BorderedEditText.h"

#include <iostream>

using namespace std;

void BorderedEditText::SetText(const string &text)
{
	//...
	m_editText.SetText(text);
}

void BorderedEditText::SetBorderWidth(int borderWidth)
{
	//...
	m_borderWidth = borderWidth;
	setBorder();
}

void BorderedEditText::setBorder()
{
	cout << "Setting border with Width:" << m_borderWidth << endl;
}