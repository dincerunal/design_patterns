#include <iostream>
#include "Integer.h"

using namespace std;

#if 1
int main()
{
	int a = 10;

	shared_ptr<Integer> i1 = Integer::ValueOf(a);
	shared_ptr<Integer> i2 = Integer::ValueOf(10);

	shared_ptr<Integer> i3 = Integer::ValueOf(1000);
	shared_ptr<Integer> i4 = Integer::ValueOf(1000);

	cout << (i1 == i2) << endl;
	cout << (i3 == i4) << endl;

	return 0;
}

#endif
