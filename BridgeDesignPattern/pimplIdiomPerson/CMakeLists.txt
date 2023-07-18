cmake_minimum_required(VERSION 3.15)

project(pimplIdiomPerson VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)


include_directories(${PROJECT_SOURCE_DIR})

set(SOURCE Main.cpp Person.cpp Person.h)


add_executable(pimplIdiomPersonTarget ${SOURCE})
