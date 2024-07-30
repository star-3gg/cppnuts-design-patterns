
cmake_minimum_required(VERSION 3.30.1)

project("FDP")

include_directories(include)

add_executable(${PROJECT_NAME}
  src/FDPDemo.cpp
  src/Toy.cpp
  src/Car.cpp
  src/Bike.cpp
  src/Plane.cpp
  src/ToyFactory.cpp
  include/Toy.h
  include/Car.h
  include/Bike.h
  include/Plane.h
  include/ToyFactory.h
)
