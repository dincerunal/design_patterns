#pragma once

#include <memory>
#include <cmath>

enum PointInfo {CARTESIAN, POLAR};

struct Point {
	static std::unique_ptr<Point> GetCartesian(double x, double y)
	{
		return std::make_unique<Point>(x, y, CARTESIAN);
	}

	static std::unique_ptr<Point>  GetPolar(double r, double theta)
	{
		return std::make_unique<Point>(r, theta, POLAR);
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

