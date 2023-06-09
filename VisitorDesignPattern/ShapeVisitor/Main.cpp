#include <vector>
#include <memory>
#include "Shape.h"
#include "Draw.h"
#include "Circle.h"
#include "Square.h"
#include <iostream>
#include <ShapeVisitorConfig.h>

void drawAllShapes(std::vector<std::unique_ptr<Shape>> const& shapes)
{
	for (auto const& shape : shapes)
		shape->accept(Draw{});
}

int main()
{
	std::cout << "Shape visitor version:" << ShapeVisitor_Version_Major << "." << ShapeVisitor_Version_Minor << "\n";
	
	std::vector<std::unique_ptr<Shape>> myShapes;
	myShapes.push_back(std::make_unique<Circle>(2.0));
	myShapes.push_back(std::make_unique<Square>(2.0));
	drawAllShapes(myShapes);

	return 0;
}