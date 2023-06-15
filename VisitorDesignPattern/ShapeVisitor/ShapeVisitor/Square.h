#pragma once
#include "Shape.h"
#include "ShapeVisitor.h"
#include <iostream>

class Square : public  Shape
{
public:
    explicit Square(double side)
        :side_(side)
    {}
    void accept(ShapeVisitor const& v) override { 
        std::cout << "Visiting Square operation\n";
        v.visit(*this); }
    double side() const { return side_; }
private:
    double side_;
};

