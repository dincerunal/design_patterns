#include <string>
#include <iostream>

#include "InsertProductView.h"


using namespace std;

void InsertProductView::View()
{
	string name;
	size_t stock;
	double price;

	cout << "�r�n ad�n� giriniz" << endl;
	cin >> name;

	cout << "�r�n miktar�n� giriniz" << endl;
	cin >> stock;

	cout << "�r�n birim fiyat�n� giriniz" << endl;
	cin >> price;

	//...

	m_product = make_shared<Product>(name, stock, price);
}
