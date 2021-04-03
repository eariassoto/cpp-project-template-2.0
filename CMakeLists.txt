cmake_minimum_required(VERSION 3.13.0)
project(ExampleProject)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(libs/calculator)
add_subdirectory(app)
