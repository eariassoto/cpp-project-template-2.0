cmake_minimum_required (VERSION 3.13.0)

set (PROJECT_NAME cpp-project-template)

project (${PROJECT_NAME} CXX)

# Header files folder
include_directories (${PROJECT_SOURCE_DIR}/src/include)

# Output folder
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")

add_subdirectory(libs/calculator)
include_directories(${calculator_lib_SOURCE_DIR}/src/include)

# Add the executable for the program
add_executable (${PROJECT_NAME})

target_sources(${PROJECT_NAME}
    PRIVATE
      src/main.cpp

      # Add header files here
)

TARGET_LINK_LIBRARIES(${PROJECT_NAME} calculator_lib)

# Set default compile flags for GCC
if(CMAKE_COMPILER_IS_GNUCXX)
    message(STATUS "GCC detected, adding compile flags")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pedantic -Wall -Wextra")
endif(CMAKE_COMPILER_IS_GNUCXX)

set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 17)
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD_REQUIRED ON)
