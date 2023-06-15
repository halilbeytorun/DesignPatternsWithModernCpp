#pragma once
#include"AbstractVisitor.h"
#include"Visitor.h"
#include "Circle.h"
#include "Square.h"
#include <iostream>

class Draw : public AbstractVisitor, public Visitor<Circle>, public Visitor<Square>
{
public:
	void visit(Circle const& c) const override
	{
		std::cout << "In Draw Visit function, Circle\n";
	}
	void visit(Square const& s) const override
	{
		std::cout << "In Draw Visit function, Square\n";
	}
};

