#include "DeviceAppDAL.h"

DeviceAppDAL DeviceAppDAL::ms_instance;

DeviceAppDAL::DeviceAppDAL(const std::string &url)
	: m_url(url)
{
	
	//...
}


DeviceAppDAL::DeviceAppDAL(const char *url) : m_url(url)
{
	
	//...
}

DeviceAppDAL &DeviceAppDAL::GetInstance(const std::string &url)
{
	ms_instance.m_url = url;

	return ms_instance;
}

DeviceAppDAL &DeviceAppDAL::GetInstance(const char *url)
{
	ms_instance.m_url = url;

	return ms_instance;
}


