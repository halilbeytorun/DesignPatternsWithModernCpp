#include<DrawOpenGL.h>
#include<Square.h>
#include<Circle.h>
#include<memory>
#include<vector>
#include<StrategyWithDesignFlaw.h>
#include<iostream>

// The main flaw in this design is that, it either allows, operation extension (Visitor) or type extension.
// By adding new Type (Triangle for example), we have to create the class and also update DrawStrategy base class, this will therefore result in recompiling of
// Circle and Square. Therefore, adding new type also is not perfect.

int main(void)
{
	std::cout << "Shape strategy with design flaw version:" << StrategyWithDesignFlaw_Version_Major << "." << StrategyWithDesignFlaw_Version_Minor << "\n";


	std::vector<std::unique_ptr<Shape>> myShapes;
	myShapes.push_back(std::make_unique<Circle>(2.0, std::make_unique<DrawOpenGL>()));
	myShapes.push_back(std::make_unique<Square>(2.0, std::make_unique<DrawOpenGL>()));
	
	for (auto const& shape : myShapes)
	{
		shape->draw();
	}

	return 0;
}