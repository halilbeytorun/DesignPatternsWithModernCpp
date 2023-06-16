#pragma once
#include<Shape.h>
#include<memory>
#include<DrawStrategy.h>
#include<utility>

class Square : public Shape
{
public:
	explicit Square(double side, std::unique_ptr<DrawStrategy> drawer)
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