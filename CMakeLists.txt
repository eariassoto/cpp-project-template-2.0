# Copyright (c) 2021 Emmanuel Arias
cmake_minimum_required(VERSION 3.13.0)
project(ExampleProject)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(external/Catch2)

add_subdirectory(libs/calculator)
add_subdirectory(app)

add_subdirectory(tests)
enable_testing()
add_test (NAME CalculatorLibUT COMMAND calculator_lib_ut)