#include <iostream>
#include "ProductApp.h"
#include "ProductController.h"

using namespace std;

void ProductApp::displayMenu() const
{
	cout << "1.Ekle" << endl;
	cout << "2.G�ncelle" << endl;
	cout << "3.Sil" << endl;
	cout << "4.Listele" << endl;
	cout << "5.��k��" << endl;
	cout << "Se�enek:";	
}
void ProductApp::insertProc()
{
	ProductController pc;

	pc.InsertProduct();	
}

void ProductApp::deleteProc()
{
	cout << "Delete" << endl;
}
void ProductApp::updateProc()
{
	cout << "Delete" << endl;
}

void ProductApp::listProc()
{
	ProductController pc;

	pc.ListAllProducts();
}
void ProductApp::Run()
{
	int option;

	for (;;) {
		displayMenu();
		cin >> option;

		switch (option) {
		case 1:
			insertProc();
			break;
		case 2:
			updateProc();
			break;
		case 3:
			deleteProc();
			break;
		case 4:
			listProc();
			break;
		case 5:
			goto EXIT_APP;
		default:
			cout << "Ge�ersiz Se�enek" << endl;
		}
	}
EXIT_APP:
	cout << "Te�ekk�rler" << endl;	
}