#include <string>
#include <iostream>

#include "InsertProductView.h"


using namespace std;

void InsertProductView::View()
{
	string name;
	size_t stock;
	double price;

	cout << "Ürün adýný giriniz" << endl;
	cin >> name;

	cout << "Ürün miktarýný giriniz" << endl;
	cin >> stock;

	cout << "Ürün birim fiyatýný giriniz" << endl;
	cin >> price;

	//...

	m_product = make_shared<Product>(name, stock, price);
}
