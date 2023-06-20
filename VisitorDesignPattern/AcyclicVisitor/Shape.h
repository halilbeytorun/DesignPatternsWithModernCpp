#pragma once

class AbstractVisitor;
class Shape
{
public:
	virtual ~Shape() = default;
	virtual void accept(AbstractVisitor const& v) = 0;
};

