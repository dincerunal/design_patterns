#include <iostream>
#include "DeviceAppDAL.h"

using namespace std;

#if 1
int main()
{
	DeviceAppDAL d1;	
	
	d1.SetUrl("test");

	cout << d1.GetUrl() << endl;

	DeviceAppDAL d2;

	cout << d2.GetUrl() << endl;

	d2 = d1;

	DeviceAppDAL d3(d1);

	cout << d3.GetUrl() << endl;
}

#endif
