// ---- <Main.cpp>----------
#include<Circle.h>
#include<Square.h>
#include<Shapes.h>
#include<Draw.h>

void drawAllShapes(Shapes const& shapes)
{
	for (auto const& shape : shapes)
	{
		std::visit(Draw{}, shape);
	}
}


int main()
{
	Shapes shapes;
	
	shapes.emplace_back(Circle{ 2.3 });
	shapes.emplace_back(Square{ 1.2 });
	shapes.emplace_back(Circle{ 4.1 });

	drawAllShapes(shapes);

	return EXIT_SUCCESS;
}