#pragma once

#include <cmath>

enum PointInfo {CARTESIAN, POLAR};

struct Point {
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

	double X, Y;
};

