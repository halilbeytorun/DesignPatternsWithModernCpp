cmake_minimum_required(VERSION 3.15)

project(StrategyWithSeperateTemplateBaseClass VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

configure_file(StrategyWithSeperateTemplateBaseClass.h.in StrategyWithSeperateTemplateBaseClass.h)

include_directories(${PROJECT_SOURCE_DIR})
include_directories(${PROJECT_BINARY_DIR})

set(SOURCE Main.cpp Circle.h DrawStrategy.h OpenGLCircleStrategy.h OpenGLSquareStrategy.h Shape.h Square.h)

add_executable(StrategyWithSeperateTemplateBaseClassTarget ${SOURCE})
