#include <iostream>
#include "DeviceAppDAL.h"

using namespace std;

#if 1
int main()
{
	DeviceAppDAL &dal1 = DeviceAppDAL::GetInstance();
	DeviceAppDAL &dal2 = DeviceAppDAL::GetInstance();

	cout << boolalpha << (&dal1 == &dal2) << endl;		
}

#endif

