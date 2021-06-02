#include <iostream>
#include "Point.h"
using namespace std;

#if 1
int main()
{
	unique_ptr<Point> p = Point::GetCartesian(100, 100);
	unique_ptr<Point> p2 = Point::GetPolar(3.4, 5.6);

	p->X = 10;

	//...

	
}

#endif
