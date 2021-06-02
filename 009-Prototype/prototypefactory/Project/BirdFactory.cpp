#include <cstdlib>
#include <memory>
#include "BirdFactory.h"


using namespace std;

BirdFactory::BirdFactory()
{
	m_birds[NORMAL] = new NormalBird(Color{ 123, 45, 176 });
	m_birds[EXPLODED] = new ExplodedBird(Color{ 255, 0, 0 });
}

BirdFactory::~BirdFactory()
{
	for (int i = 0; i < m_birds.size(); ++i)
		delete m_birds[i];
}

std::unique_ptr<Bird> BirdFactory::GetRandomBird() const
{
	static int birds[] = { NORMAL, EXPLODED };

	int index = rand() % m_birds.size();	

	return std::unique_ptr<Bird>(m_birds.at(birds[index])->Clone());
}


