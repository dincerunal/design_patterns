#include <iostream>

#include "DeviceAppDbFacade.h"

using namespace std;

bool DeviceAppDbFacade::InsertDevice(const DeviceInfo &d)
{
	cout << "InsertDevice" << endl;
	return true;
}
vector<DeviceInfo> DeviceAppDbFacade::GetDevices()
{
	cout << "GetDevices()" << endl;

	return vector<DeviceInfo>();
}
vector<DeviceInfo> DeviceAppDbFacade::GetDevices(size_t n)
{
	cout << "GetDevices(size_t)" << endl;

	return vector<DeviceInfo>();
}
bool DeviceAppDbFacade::UpdateDevice(const DeviceInfo &d)
{
	cout << "UpdateDevice" << endl;

	return true;
}
bool DeviceAppDbFacade::DeleteDevice(const DeviceInfo &d)
{
	cout << "DeleteDevice" << endl;

	return true;
}

bool DeviceAppDbFacade::DeleteDeviceById(int deviceId)
{
	cout << "DeleteDevice" << endl;

	return true;
}

bool DeviceAppDbFacade::InsertPort(const PortInfo &d)
{
	cout << "InsertPort" << endl;

	return true;
}

vector<PortInfo> DeviceAppDbFacade::GetPorts()
{
	return vector<PortInfo>();
}

vector<PortInfo> DeviceAppDbFacade::GetPorts(size_t n)
{
	return vector<PortInfo>();
}
bool DeviceAppDbFacade::UpdatePort(const PortInfo &d)
{
	return true;
}
bool DeviceAppDbFacade::DeletePortById(int portId)
{
	return true;
}