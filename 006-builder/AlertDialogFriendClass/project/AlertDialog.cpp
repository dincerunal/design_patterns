#include "AlertDialog.h"

#include <iostream>
#include <string>

using namespace std;

void AlertDialog::Show()
{
	string icons[] = { "QUESTION", "WARNING", "CRITICAL" };
	string buttons[] = { "YESNO", "YESNOCANCEL", "OK" };

	cout << "Title:" << m_title << endl;
	cout << "Text:" << m_text << endl;
	cout << "Icon:" << icons[m_icon] << endl;
	cout << "Button:" << buttons[m_button] << endl;
}



