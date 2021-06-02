#include <iostream>
#include <cstdio>

#include "CompanyApp.h"
#include "Worker.hpp"

using namespace std;

void CompanyApp::Run()
{	
	int option;

	for (;;) {
		displayMenu();
		cin >> option;

		if (option < 1 || option > 5) {
			cout << "Geçersiz seçenek" << endl;
			continue;
		}

		switch (option) {
		case 1:
			insertProc();
			break;
		case 2:
			deleteProc();
			break;
		case 3:
			updateProc();
			break;
		case 4:
			listProc();
			break;
		case 5:
			goto EXIT_LOOP;
			break;		
		}
	}
EXIT_LOOP:
	cout << "Teþekkür ederiz" << endl;
}

void CompanyApp::displayMenu() const
{
	cout << "Ýþçi iþlemleri" << endl;
	cout << "1. Ekle" << endl;
	cout << "2. Sil" << endl;
	cout << "3. Güncelle" << endl;
	cout << "4. Listele" << endl;
	cout << "5. Çýkýþ" << endl;
	cout << "Seçenek:";

	fflush(stdout);
}

void CompanyApp::insertProc()
{
	string name;
	int no;
	cout << "Ýsim giriniz:";
	fflush(stdout);
	cin >> name;

	cout << "Numara giriniz:";
	fflush(stdout);
	cin >> no;
	Shift shift = Shift::Morning;

	m_employees.push_back(make_unique<Worker>(name.data(), no, shift));
}

void CompanyApp::deleteProc()
{
	cout << "delete" << endl;
}

void CompanyApp::updateProc()
{
	cout << "update" << endl;
}

void CompanyApp::listProc()
{
	if (m_employees.empty()) {
		cout << "Hiç iþçi eklenmemiþ" << endl;
		return;
	}

	size_t size = m_employees.size();

	for (size_t i = 0; i < size; ++i)
		m_employees[i]->disp();
}
