cmake_minimum_required(VERSION 3.15)

project(ShapeVisitor VERSION 1.0)


SET(CMAKE_CXX_STANDARD 17)
SET(CMAKE_CXX_STANDARD_REQUIRED True)

configure_file(ShapeVisitorConfig.h.in ShapeVisitorConfig.h)

include_directories(${PROJECT_SOURCE_DIR})
include_directories(${PROJECT_BINARY_DIR})


SET(SOURCE Circle.cpp Draw.cpp Main.cpp Shape.cpp ShapeVisitor.cpp Square.cpp)


add_executable(ShapeVisitorTarget ${SOURCE})