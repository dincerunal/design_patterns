#pragma once

#include <exception>
#include <string>

class DeviceAppDAL {
public:	
	DeviceAppDAL(const DeviceAppDAL &) = delete;
	DeviceAppDAL(DeviceAppDAL &&) = delete;
	DeviceAppDAL &operator =(const DeviceAppDAL &) = delete;
	DeviceAppDAL &operator =(DeviceAppDAL &&) = delete;
public:
	static DeviceAppDAL &GetInstance();	
public:
	std::string GetUrl() const { return m_url; }
private:
	DeviceAppDAL(const std::string &url = "");
	DeviceAppDAL(const char *url);
private:
	std::string m_url;
};

