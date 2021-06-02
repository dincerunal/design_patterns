#pragma once

#include <cmath>

enum PointInfo {CARTESIAN, POLAR};

struct Point {
	static Point GetCartesian(double x, double y)
	{
		return Point(x, y, CARTESIAN);
	}

	static Point GetPolar(double r, double theta)
	{
		return Point(r, theta, POLAR);
	}
	double X, Y;
private:
	Point(double x = 0, double y = 0, PointInfo pi = CARTESIAN)
	{
		if (pi == CARTESIAN) {
			X = x;
			Y = y;
		}
		else {
			X = x * cos(y);
			Y = y * sin(y);
		}
	}
};

