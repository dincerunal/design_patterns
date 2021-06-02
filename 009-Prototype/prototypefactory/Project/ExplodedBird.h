#pragma once

#include <iostream>
#include <memory>
#include "Bird.h"

class ExplodedBird : public Bird {
	//...
public:
	using Bird::Bird;
public:
	std::unique_ptr<Bird> Clone() const override;
	void Throw() override
	{
		std::cout << "Exploded Bird" << std::endl;
	}
};

