#include <iostream>
#include "AlertDialog.h"

using namespace std;

#if 1
int main()
{
	AlertDialog::Builder builder;

	unique_ptr<AlertDialog> up = builder.setTitle("Uyarý")
		.setText("Kaydetmek ister misiniz?")
		.setIcon(IconType::QUESTION)
		.setButton(ButtonType::YESNOCANCEL).build();

	up->Show();	
}

#endif
