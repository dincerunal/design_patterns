#include <iostream>
#include "DeviceCareTaker.h"
#include "devicecommon.h"

using namespace std;

#if 1
int main()
{
	DeviceInfo di("test", "//123.56.78.78");
	DeviceCareTaker dc;

	di.AddPort(6767);

	dc.AddDeviceMemento(di.GetMemento());

	di.AddPort(2323);

	dc.AddDeviceMemento(di.GetMemento());	

	shared_ptr<DeviceInfoMemento> mem1 = dc[0];

	for (size_t i = 0; i < mem1->GetDeviceInfo().size(); ++i)
		cout << mem1->GetDeviceInfo()[i] << endl;

	cout << "**********" << endl;

	shared_ptr<DeviceInfoMemento> mem2 = dc[1];

	for (size_t i = 0; i < mem2->GetDeviceInfo().size(); ++i)
		cout << mem2->GetDeviceInfo()[i] << endl;

	return 0;
}

#endif
