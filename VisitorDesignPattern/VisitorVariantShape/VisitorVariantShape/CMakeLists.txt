cmake_minimum_required(VERSION 3.15)

project(VisitorVariantShape VERSION 1.0)


SET(CMAKE_CXX_STANDARD 17)
SET(CMAKE_CXX_STANDARD_REQUIRED True)

configure_file(VisitorVariantShapeConfig.h.in VisitorVariantShapeConfig.h)

include_directories(${PROJECT_SOURCE_DIR})
include_directories(${PROJECT_BINARY_DIR})


SET(SOURCE Circle.cpp Main.cpp Point.cpp Square.cpp)


add_executable(VisitorVariantShapeTarget ${SOURCE})