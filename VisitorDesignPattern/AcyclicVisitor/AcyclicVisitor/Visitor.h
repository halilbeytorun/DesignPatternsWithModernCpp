#pragma once
template <typename T>
class Visitor
{
protected:
	virtual ~Visitor() = default;
public:
	virtual void visit(T const&) const = 0;
};

