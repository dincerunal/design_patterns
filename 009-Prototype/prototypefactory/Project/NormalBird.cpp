#include <memory>
#include "NormalBird.h"

using namespace std;

unique_ptr<Bird> NormalBird::Clone() const
{
	return make_unique<NormalBird>(m_color);
}



