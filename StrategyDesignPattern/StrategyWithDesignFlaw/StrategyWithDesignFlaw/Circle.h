#pragma once
#include<Shape.h>
#include<memory>
#include<DrawStrategy.h>
#include<utility>

class Circle : public Shape
{
public:
	explicit Circle(double radius, std::unique_ptr<DrawStrategy> drawer)
		:radius_(radius), drawer_(std::move(drawer))
	{
	}
	void draw() const override
	{
		drawer_->draw(*this);
	}
	double radius() const { return radius_; }
private:
	double radius_;
	std::unique_ptr<DrawStrategy> drawer_;
};