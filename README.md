# C/C++ project template 2.0

This is a basic template to create a C/C++ project. Compilation process is handled by [CMake](https://cmake.org/).

## Requirements
+ CMake
+ A C/C++ compiler, this template has the intention to be cross platform. Check the `build.bat` file for a example of Visual Studio solution generator.

## How to use this template
1. Source files go inside `src/`. Put all header files on the `src/include/` folder. 
2. Go into the `CMakeLists.txt` file and change the project name. Include all your source files in this file.
3. If you want, you can also modify the internal static library or remove it from the project.

## How to compile my project
Go into your project root folder and run these commands:
```bash
mkdir build
cd build
cmake ..
make
```

The executable for the program and the unit tests will be in the `bin/` folder.

## TODO:

+ Add unit testing to the project (Will probably choose Catch2)
+ Add optional code coverage analysis
+ Verify that the project is ready to use out-of-the-box with CI/CD tools.