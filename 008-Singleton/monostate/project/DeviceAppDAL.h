#pragma once

#include <exception>
#include <string>

class DeviceAppDAL {
public:
	void SetUrl(const char *url);
	std::string GetUrl() const { return m_url; }
private:
	static std::string m_url;
};

