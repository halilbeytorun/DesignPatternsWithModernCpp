#pragma once
#include "ShapeVisitor.h"
//#include "Circle.h"
//#include "Square.h"
#include <iostream>

class Draw :
    public ShapeVisitor
{
public:
    void visit(Circle const& c) const override {
        std::cout << " Circle operation visited\n";
    };
    void visit(Square const& s) const override {
        std::cout << " Square operation visited\n";
    };
};

