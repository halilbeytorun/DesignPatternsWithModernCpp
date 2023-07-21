cmake_minimum_required(VERSION 3.15)

project(AnimalExample VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(${PROJECT_SOURCE_DIR})

set(SOURCE Main.cpp Animal.h Sheep.h Sheep.cpp)

add_executable(AnimalExampleTarget ${SOURCE})