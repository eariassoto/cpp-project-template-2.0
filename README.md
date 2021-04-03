# C/C++ project template 2.0

This is a basic template to create a C/C++ project. Compilation process is handled by [CMake](https://cmake.org/).

## Requirements
+ CMake
+ A C/C++ compiler, this template has the intention to be cross platform. Check the `build.bat` file for a example of Visual Studio solution generator.

## How to use this template
1. Source files go inside `src/`. Put all header files on the `src/include/` folder. 
2. Go into the `CMakeLists.txt` file and change the project name. Include all your source files in this file.
3. If you want, you can also modify the internal static library or remove it from the project.

## How to compile the project
For GNU/Linux, use the usual commands:
```bash
mkdir build
cd build
cmake ..
make
```

To create a Visual Studio solution, you can use the `build.bat` script:

```powershell
@ECHO ON

RMDIR /Q /S build
MKDIR build
PUSHD build

cmake -G "Visual Studio 16" ..

```

This script will compile a VS 2019 solution, replace 16 for other versions.

## How to run unit tests

The template provides an example for unit testing the static library. To run the tests, you can manually execute them from the `bin/ut` folder, or you can use `CTest` from the `build/` folder.

## Where are the executables?

The executable for the program and the unit tests will be in the `bin/` folder. The library is being saved in the `bin/libs` folder.

## TODO:

+ Add optional code coverage analysis
+ Verify that the project is ready to use out-of-the-box with CI/CD tools.