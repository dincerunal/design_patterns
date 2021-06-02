#include <iostream>
#include "AlertDialog.h"
#include "AlertDialogBuilder.h"

using namespace std;

#if 1
int main()
{
	AlertDialogBuilder builder;

	AlertDialog dlg = builder.setTitle("Uyarý")
		.setText("Kaydetmek ister misiniz?")
		.setIcon(IconType::QUESTION)
		.setButton(ButtonType::YESNOCANCEL).build();

	dlg.Show();	
}

#endif
