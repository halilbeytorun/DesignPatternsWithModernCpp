cmake_minimum_required(VERSION 3.15)

project(proxy_design_pattern VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)


include_directories(${PROJECT_SOURCE_DIR})

set(SOURCE main.cpp )


add_executable(proxy_design_pattern ${SOURCE})
