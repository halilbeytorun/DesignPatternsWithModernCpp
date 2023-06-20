#pragma once
#include"AbstractVisitor.h"
#include"Visitor.h"
#include "Circle.h"
#include "Square.h"
#include <iostream>


class Calculate : public AbstractVisitor, public Visitor<Circle>
{
public:
	void visit(Circle const& c) const override
	{
		std::cout << "In Calculate Visit function, Circle\n";
	}
};

