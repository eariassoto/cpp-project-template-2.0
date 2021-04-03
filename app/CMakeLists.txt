set (PROJECT_NAME cpp_project_template)

project (${PROJECT_NAME} CXX)

# Header files folder
include_directories (${PROJECT_SOURCE_DIR}/src/include)

# Output folder
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin/app")

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
