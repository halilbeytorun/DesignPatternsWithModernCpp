#pragma once

class Circle;
class Square;
class Triangle;

class DrawStrategy
{
public:
	virtual ~DrawStrategy() = default;
	virtual void draw(Circle const& circle)
		const = 0;
	virtual void draw(Square const& square)
		const = 0;
	virtual void draw(Triangle const& square)
		const = 0;
};