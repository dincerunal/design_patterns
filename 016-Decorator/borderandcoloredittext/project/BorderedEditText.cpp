#include "BorderedEditText.h"

#include <iostream>

using namespace std;


void BorderedEditText::SetBorderWidth(int borderWidth)
{
	//...
	m_borderWidth = borderWidth;
	SetBorder(m_borderWidth);
}



void BorderedEditText::SetBorder(size_t borderWidth)
{
	cout << "Setting border with Width:" << m_borderWidth << endl;
}