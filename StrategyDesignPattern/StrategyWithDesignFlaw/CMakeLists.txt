cmake_minimum_required(VERSION 3.15)

project(StrategyWithDesignFlaw VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

configure_file(StrategyWithDesignFlaw.h.in StrategyWithDesignFlaw.h)

include_directories(${PROJECT_SOURCE_DIR})
include_directories(${PROJECT_BINARY_DIR})

set(SOURCE Main.cpp)

add_executable(StrategyWithDesignFlawTarget ${SOURCE})
