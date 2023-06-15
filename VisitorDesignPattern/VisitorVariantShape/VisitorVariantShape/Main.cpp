// ---- <Main.cpp>----------
#include<Circle.h>
#include<Square.h>
#include<Shapes.h>
#include<Draw.h>
#include <VisitorVariantShapeConfig.h>

void drawAllShapes(Shapes const& shapes)
{
	for (auto const& shape : shapes)
	{
		std::visit(Draw{}, shape);
	}
}


int main()
{
	std::cout << "VisitorVariantShape version:" << VisitorVariantShape_Version_Major << "." << VisitorVariantShape_Version_Minor << "\n";

	Shapes shapes;
	
	shapes.emplace_back(Circle{ 2.3 });
	shapes.emplace_back(Square{ 1.2 });
	shapes.emplace_back(Circle{ 4.1 });

	drawAllShapes(shapes);

	return EXIT_SUCCESS;
}