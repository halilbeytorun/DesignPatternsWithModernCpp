#pragma once
#include <variant>
#include <Circle.h>
#include <Square.h>

// min C++17 required
using Shape = std::variant<Circle, Square>;
