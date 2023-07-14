cmake_minimum_required(VERSION 3.15)

project(ElectricCarBridge VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)


include_directories(${PROJECT_SOURCE_DIR})

set(SOURCE Main.cpp Engine.cpp Engine.h ElectricCar.cpp ElectricCar.h ElectricEngine.cpp ElectricEngine.h)


add_executable(ElectricCarBridgeTarget ${SOURCE})
