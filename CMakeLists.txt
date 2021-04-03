# Copyright (c) 2021 Emmanuel Arias
cmake_minimum_required(VERSION 3.13.0)
project(ExampleProject)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(external/Catch2)

add_subdirectory(libs/calculator)
add_subdirectory(app)

add_subdirectory(tests)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT cpp_project_template)

enable_testing()
add_test (NAME CalculatorLibUT COMMAND calculator_lib_ut)
