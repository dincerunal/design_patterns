#include "DeviceAppDAL.h"

int DeviceAppDAL::ms_counter;

DeviceAppDAL::DeviceAppDAL(const std::string &url)
	: m_url(url)
{
	control();
	//...
}


DeviceAppDAL::DeviceAppDAL(const char *url) : m_url(url)
{
	control();
	//...
}

void DeviceAppDAL::control()
{
	//Dikkat thread güvenli deðil
	++ms_counter;
	if (ms_counter > 1)
		throw std::exception("Can not create instance more than once");
}
