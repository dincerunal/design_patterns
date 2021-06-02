#include "Point.h"

using namespace std;

unique_ptr<Point> Point::PointFactory::GetCartesian(double x, double y)
{
	return unique_ptr<Point>(new Point(x, y, CARTESIAN));
}

unique_ptr<Point>  Point::PointFactory::GetPolar(double r, double theta)
{
	return unique_ptr<Point>(new Point(r, theta, POLAR));
}
