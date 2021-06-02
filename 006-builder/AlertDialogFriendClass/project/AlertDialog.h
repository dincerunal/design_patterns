#pragma once

#include <string>

class AlertDialogBuilder;

enum IconType {QUESTION, WARNING, CRITICAL};
enum ButtonType {YESNO, YESNOCANCEL, OK};

class AlertDialog {
	friend AlertDialogBuilder;
public:
	/*std::string GetTitle() const { return m_title; }
	std::string GetText() const { return m_text; }
	IconType GetIconType() const { return m_icon; }
	ButtonType GetButtonType() const { return m_button; }*/

	void Show();
private:
	AlertDialog(const std::string &title = std::string(), const std::string &text= std::string(),
		IconType icon = IconType::WARNING, ButtonType button = ButtonType::OK)
		: m_title(title), m_text(text), m_icon(icon), m_button(button)
	{}
private:
	std::string m_title, m_text;
	IconType m_icon;
	ButtonType m_button;
};

