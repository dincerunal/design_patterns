#include <cstdio>
#include "HexObserver.h"

using namespace std;

void HexObserver::Update(int oldVal)
{
	printf("Old Value:%X\n", oldVal);
	printf("New Value:%X\n", m_pi->GetVal());
}

