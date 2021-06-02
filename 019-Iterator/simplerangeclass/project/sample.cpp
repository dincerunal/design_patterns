#include <iostream>
#include <algorithm>
#include "IntRange.h"

using namespace std;

template  <typename T>
void display(const T &r)
{
	cout << r << " ";
}

#if 1
int main()
{
	IntRange r(10, 30, 2);

	for_each(r.begin(), r.end(), display<int>);

	cout << "\n*********" << endl;

	for (IntRange::iterator iter = r.begin(); iter != r.end(); ++iter)
		cout << *iter << endl;
	

	return 0;
}

#endif
