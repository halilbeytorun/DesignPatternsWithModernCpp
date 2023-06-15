#pragma once
#include "Shape.h"
#include "AbstractVisitor.h"
#include "Visitor.h"
#include <iostream>

class Square : public  Shape
{
public:
    explicit Square(double side)
        :side_(side)
    {}
    void accept(AbstractVisitor const& v) override
    {
        std::cout << "In accept function, Square\n";
        if (auto const* cv = dynamic_cast<Visitor<Square> const*> (&v))
        {
            cv->visit(*this);
        }
    }
    double side() const { return side_; }
private:
    double side_;
};
