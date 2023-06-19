#pragma once
#include "Square.h"
#include "DrawStrategy.h"


class OpenGLSquareStrategy : public DrawStrategy<Square>
{
public:
	void draw(Square const& c) const override
	{

	}
};

