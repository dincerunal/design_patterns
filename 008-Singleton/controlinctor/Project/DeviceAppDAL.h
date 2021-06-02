#pragma once

#include <exception>
#include <string>

class DeviceAppDAL {
public:
	DeviceAppDAL(const std::string &url = "");
	DeviceAppDAL(const char *url);	
	DeviceAppDAL(const DeviceAppDAL &) = delete;
	DeviceAppDAL(DeviceAppDAL &&) = delete;
	DeviceAppDAL &operator =(const DeviceAppDAL &) = delete;
	DeviceAppDAL &operator =(DeviceAppDAL &&) = delete;
public:
	std::string GetUrl() const { return m_url; }
private:
	static void control();
private:
	static int ms_counter;
private:
	std::string m_url;
};

