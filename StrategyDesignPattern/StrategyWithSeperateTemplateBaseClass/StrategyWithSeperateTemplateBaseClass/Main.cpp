#include <Circle.h>
#include <Square.h>
#include <OpenGLCircleStrategy.h>
#include <OpenGLSquareStrategy.h>
#include <memory>
#include <vector>

int main()
{
	using Shapes = std::vector<std::unique_ptr<Shape>>;

	Shapes shapes{};
	shapes.emplace_back(
		std::make_unique<Circle>(2.3, std::make_unique<OpenGLCircleStrategy>())
	);
	//shapes.emplace_back(
	//	std::make_unique<Square>(1.2, std::make_unique<OpenGLSquareStrategy>())
	//);
	//shapes.emplace_back(
	//	std::make_unique<Circle>(4.1, std::make_unique<OpenGLCircleStrategy>())
	//);

	//for (auto const& shape : shapes)
	//{
	//	shape->draw();
	//}

}