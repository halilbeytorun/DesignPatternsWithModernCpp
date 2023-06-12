#pragma once
#include "Shape.h"
#include "AbstractVisitor.h"
#include "Visitor.h"
#include <iostream>

class Circle :
    public Shape
{
public:
    explicit Circle(double radius)
        : radius_(radius)
    {}

    void accept(AbstractVisitor const& v) override
    {
        std::cout << "In accept function, Circle\n";
        if (auto const* cv = dynamic_cast<Visitor<Circle> const*> (&v))
        {
            cv->visit(*this);
        }
    }

    double radius() const { return radius_; }
private:
    double radius_;
};

