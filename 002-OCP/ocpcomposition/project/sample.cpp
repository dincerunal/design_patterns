#include <iostream>
#include "IntNumberEx.h"

using namespace std;

#if 1
int main()
{
	IntNumberEx n(40000);
	short val = static_cast<short>(n); //n.GetShortVal();
	int a = static_cast<int>(n);

	cout << "a=" << a << endl;
	cout << "val=" << val << endl;

	return 0;
}

#endif
