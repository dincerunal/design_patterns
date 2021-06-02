#include <memory>
#include "ExplodedBird.h"

using namespace std;

unique_ptr<Bird> ExplodedBird::Clone() const
{
	return make_unique<ExplodedBird>(m_color);
}
