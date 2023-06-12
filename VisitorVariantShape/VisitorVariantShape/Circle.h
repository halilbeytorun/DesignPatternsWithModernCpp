#pragma once
#include <Point.h>

class Circle
{
public:
	explicit Circle(double radius)
		:radius_(radius)
	{}
	double radius() const { return radius_; }
	Point center() const { return center_; }
private:
	double radius_;
	Point center_{};
};

