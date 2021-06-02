#include "PointFactory.h"

using namespace std;

unique_ptr<Point> PointFactory::GetCartesian(double x, double y)
{
	++m_numberOfPoints;
	return unique_ptr<Point>(new Point(x, y, CARTESIAN));
}

unique_ptr<Point>  PointFactory::GetPolar(double r, double theta)
{
	++m_numberOfPoints;
	return unique_ptr<Point>(new Point(r, theta, POLAR));
}
