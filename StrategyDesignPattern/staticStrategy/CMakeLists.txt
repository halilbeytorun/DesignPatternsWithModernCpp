cmake_minimum_required(VERSION 3.15)

project(static_strategy VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)


include_directories(${PROJECT_SOURCE_DIR})

set(SOURCE main.cpp )


add_executable(static_strategy ${SOURCE})
