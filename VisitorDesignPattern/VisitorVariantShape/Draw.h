#pragma once
#include <Shape.h>
#include <iostream>
struct Draw
{
	void operator() (Circle const& c) const
	{
		std::cout << "Drawing Circle.\n";
	}
	void operator() (Square const& s) const
	{
		std::cout << "Drawing Square.\n";
	}
};
