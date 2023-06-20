#pragma once
#include "Shape.h"
#include "ShapeVisitor.h"
#include <iostream>

class Circle :
    public Shape
{
public:
    explicit Circle(double radius)
        :radius_(radius)
    {
    }
    void accept(ShapeVisitor const& v) override {
        std::cout << "Visiting Circle operation\n";
        v.visit(*this); }
    double radius() const { return radius_; }
private:
    double radius_;
};

