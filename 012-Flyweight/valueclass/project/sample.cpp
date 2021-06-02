#include <iostream>
#include "Value.h"

using namespace std;

#if 1
int main()
{	
	std::shared_ptr<Value<int,-128, 127>> val = Value<int, -128, 127>::ValueOf(10);

	return 0;
}

#endif
