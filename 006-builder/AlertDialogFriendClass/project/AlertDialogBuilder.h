#pragma once

#include <string>

#include "AlertDialog.h"

class AlertDialogBuilder {
	//...
public:	
	AlertDialogBuilder &setTitle(const std::string &title);
	AlertDialogBuilder &setText(const std::string &text);
	AlertDialogBuilder &setIcon(IconType icon);
	AlertDialogBuilder &setButton(ButtonType button);
	AlertDialog build();	
private:
	AlertDialog m_dlg;	
};

