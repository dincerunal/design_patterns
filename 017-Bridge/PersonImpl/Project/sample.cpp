/*----------------------------------------------------------------------------------------------------------------------
	A�a��daki �rnekte int t�rden elemanlara ili�kin bilgile enum ve array s�n�f� kullan�larak
	i�lenmi�tir
----------------------------------------------------------------------------------------------------------------------*/
#include <iostream>
#include <string>
#include <array>
#include <algorithm>

#include "Person.h"
using namespace std;

int main()
{	
	Person p("O�uz", 123);

	cout << p.GetName() << endl;

	return 0;
}
