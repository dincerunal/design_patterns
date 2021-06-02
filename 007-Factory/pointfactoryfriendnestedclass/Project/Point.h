#pragma once

#include <memory>
#include <cmath>

class PointFactory;

enum PointInfo {CARTESIAN, POLAR};

struct Point {
	class PointFactory {
		//...
	public:
		std::unique_ptr<Point> GetCartesian(double x, double y);
		std::unique_ptr<Point> GetPolar(double r, double theta);
	};
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

