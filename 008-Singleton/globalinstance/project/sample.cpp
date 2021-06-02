#include <iostream>
#include "DeviceAppDAL.h"

using namespace std;

#if 1
int main()
{
	DeviceAppDAL &dal1 = DeviceAppDAL::GetInstance("mysql://192.168.6.78/peopledb");
	DeviceAppDAL &dal2 = DeviceAppDAL::GetInstance("mysql://192.168.6.78/peopledb");

	cout << boolalpha << (&dal1 == &dal2) << endl;		
}

#endif

