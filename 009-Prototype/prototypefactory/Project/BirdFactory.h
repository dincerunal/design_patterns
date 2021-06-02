#pragma once

#include <map>
#include "Bird.h"
#include "NormalBird.h"
#include "ExplodedBird.h"

enum BirdType {NORMAL, EXPLODED};

class BirdFactory {
public:
	BirdFactory();
	~BirdFactory();
	BirdFactory(const BirdFactory &) = delete;
	BirdFactory &operator=(const BirdFactory &) = delete;
	BirdFactory(BirdFactory &&) = delete;
	BirdFactory &operator=(BirdFactory &&) = delete;
public:
	std::unique_ptr<Bird> GetRandomBird() const;
private:	
	std::map<int, Bird *> m_birds;
};


