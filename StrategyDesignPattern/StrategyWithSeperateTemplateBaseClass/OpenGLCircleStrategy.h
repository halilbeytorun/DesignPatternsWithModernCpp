#pragma once
#include "Circle.h"
#include "DrawStrategy.h"


class OpenGLCircleStrategy : public DrawStrategy<Circle>
{
public:
	void draw(Circle const& c) const override
	{
	
	}
};

