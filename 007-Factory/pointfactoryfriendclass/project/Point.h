#pragma once

#include <memory>
#include <cmath>

class PointFactory;

enum PointInfo {CARTESIAN, POLAR};

struct Point {
	friend PointFactory;
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

