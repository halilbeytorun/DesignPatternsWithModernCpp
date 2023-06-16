#pragma once
#include<DrawStrategy.h>
//#include<Circle.h>
class DrawOpenGL : public DrawStrategy
{
	virtual void draw(Circle const& circle)
		const
	{
		//circle.radius();
	}
	virtual void draw(Square const& square)
		const
	{
	}
	virtual void draw(Triangle const& square)
		const
	{
	}
};