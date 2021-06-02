#include <iostream>
#include "DeviceAppDbFacade.h"
#include "DeviceInfo.h"

using namespace std;

#if 1
int main()
{
	DeviceAppDbFacade db;

	DeviceInfo di(0, "test");

	db.InsertDevice(di);

	PortInfo pi(0, 3467, di.GetId());

	db.InsertPort(pi);

	vector<DeviceInfo> devices = db.GetDevices();

	for (int i = 0; i < devices.size(); ++i)
		cout << devices[i].GetName() << endl;
	
	return 0;
}

#endif
