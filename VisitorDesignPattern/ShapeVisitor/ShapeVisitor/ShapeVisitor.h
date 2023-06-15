#pragma once

//#include "Circle.h"
//#include "Square.h"

class Circle;
class Square;

class ShapeVisitor
{
public:
	virtual ~ShapeVisitor() = default;

	virtual void visit(Circle const&) const = 0;
	virtual void visit(Square const&) const = 0;
};

