# Copyright (c) 2021 Emmanuel Arias
set (PROJECT_NAME calculator_lib)

project (${PROJECT_NAME} CXX)

# Header files folder
include_directories (${PROJECT_SOURCE_DIR}/src/include)

# Output folder
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY  "${CMAKE_SOURCE_DIR}/bin/libs/calculator")

# Add the executable for the program
add_library (${PROJECT_NAME} STATIC)

target_sources(${PROJECT_NAME}
    PRIVATE
      src/sum.cpp

      src/include/calculator/sum.h
)

# Set default compile flags for GCC
if(CMAKE_COMPILER_IS_GNUCXX)
    message(STATUS "GCC detected, adding compile flags")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pedantic -Wall -Wextra")
endif(CMAKE_COMPILER_IS_GNUCXX)

