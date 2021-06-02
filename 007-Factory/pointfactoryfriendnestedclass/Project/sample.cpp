#include <iostream>

#include "Point.h"

using namespace std;

#if 1
int main()
{
	Point::PointFactory pf;

	unique_ptr<Point> p = pf.GetCartesian(100, 100);
	unique_ptr<Point> p2 = pf.GetPolar(3.4, 5.6);

	p->X = 10;

	//...

	
}

#endif
