#pragma once

#include "IOontroller.h"
#include "DeviceFactory.h"

class IOControllerFactory : public DeviceFactory {
public:	
	virtual std::unique_ptr<Device> createIOController(const std::string &name, const std::string &protoco);
	std::unique_ptr<Device> requestDevice() override;
};
