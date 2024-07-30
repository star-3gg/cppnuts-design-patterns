
cmake_minimum_required(VERSION 3.30.1)

project("AFDP")

include_directories(include)

add_executable(${PROJECT_NAME}
  src/AFDPDemo.cpp
  src/CarFactory.cpp
  src/Car.cpp
)
