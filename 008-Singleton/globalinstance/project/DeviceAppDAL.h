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
	static DeviceAppDAL &GetInstance(const std::string &url = "");
	static DeviceAppDAL &GetInstance(const char *url);
public:
	std::string GetUrl() const { return m_url; }

private:
	DeviceAppDAL(const std::string &url = "");
	DeviceAppDAL(const char *url);
private:	
	static DeviceAppDAL ms_instance;
private:
	std::string m_url;
};

