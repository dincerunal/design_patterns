/*----------------------------------------------------------------------------------------------------------------------
	Aþaðýdaki örnekte int türden elemanlara iliþkin bilgile enum ve array sýnýfý kullanýlarak
	iþlenmiþtir
----------------------------------------------------------------------------------------------------------------------*/
#include <iostream>
#include <string>
#include <array>
#include <algorithm>

#include "Person.h"
using namespace std;

int main()
{	
	Person p("Oðuz", 123);

	cout << p.GetName() << endl;

	return 0;
}
