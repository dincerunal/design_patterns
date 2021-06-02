#pragma once

#include <string>
#include <vector>
#include <cstdint>
#include <cstddef>
#include <memory>

class DeviceInfoMemento;

class DeviceInfo { // Originator
public:
	DeviceInfo(const std::string &name, const std::string &url) 
		: m_name(name), m_url(url)
	{}
public:
	std::string GetName() const { return m_name; }
	std::string GetUrl() const { return m_url; }
	void AddPort(std::uint16_t port);
	//...
	size_t size() const { return m_ports.size();}
	std::uint16_t &operator [](size_t index);
	std::uint16_t operator [](size_t index) const;
public:
	std::shared_ptr<DeviceInfoMemento> GetMemento();
private:
	std::string m_name, m_url;
	std::vector<std::uint16_t> m_ports;
};

