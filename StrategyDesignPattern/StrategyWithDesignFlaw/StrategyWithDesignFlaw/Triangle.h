#pragma once
#include<Shape.h>
#include<memory>
#include<DrawStrategy.h>
#include<utility>

class Triangle : public Shape
{
public:
	explicit Triangle(double side, std::unique_ptr<DrawStrategy> drawer)
		:side_(side), drawer_(std::move(drawer))
	{
	}
	void draw() const override
	{
		drawer_->draw(*this);
	}
private:
	double side_;
	std::unique_ptr<DrawStrategy> drawer_;
};