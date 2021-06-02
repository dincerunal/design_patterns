#pragma once

#include <memory>
#include "Point.h"

class PointFactory {
public:
	PointFactory() : m_numberOfPoints(0)
	{}
public:
	std::unique_ptr<Point> GetCartesian(double x, double y);
	std::unique_ptr<Point> GetPolar(double r, double theta);
	size_t GetNumberOfPoints() const { return m_numberOfPoints; }
private:
	size_t m_numberOfPoints;
};

