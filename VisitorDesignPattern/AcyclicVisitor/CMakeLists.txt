cmake_minimum_required(VERSION 3.15)

project(AcyclicVisitor VERSION 1.0)


SET(CMAKE_CXX_STANDARD 17)
SET(CMAKE_CXX_STANDARD_REQUIRED True)

configure_file(AcyclicVisitorConfig.h.in AcyclicVisitorConfig.h)

include_directories(${PROJECT_SOURCE_DIR})
include_directories(${PROJECT_BINARY_DIR})


SET(SOURCE AbstractVisitor.cpp Calculate.cpp Circle.cpp Draw.cpp Main.cpp Shape.cpp Square.cpp Visitor.cpp)


add_executable(AcyclicVisitorTarget ${SOURCE})