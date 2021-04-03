# Copyright (c) 2021 Emmanuel Arias
set (PROJECT_NAME calculator_lib_ut)

project (${PROJECT_NAME} CXX)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin/ut")

include_directories(${calculator_lib_SOURCE_DIR}/src/include)

add_executable(${PROJECT_NAME} test.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE calculator_lib Catch2::Catch2WithMain)
