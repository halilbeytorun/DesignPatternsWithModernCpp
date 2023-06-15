#pragma once
//#include "ShapeVisitor.h"

class ShapeVisitor;
class Shape
{
public:
	virtual ~Shape() = default;
	virtual void accept(ShapeVisitor const& v) = 0;
};

