# Build System [![Builder: CMake](https://img.shields.io/badge/Builder-CMake-brightgreen.svg)](https://cmake.org/) [![Documentation: Doxygen](https://img.shields.io/badge/Documentation-Doxygen-brightgreen.svg)](http://www.stack.nl/~dimitri/doxygen/index.html)

- This repo is a very simple build system architecture to create an API next to a project.   
- Provides a minimal directory architecture to build a project and its API with the needed documentation.    
- It uses CMAKE to build and Doxygene for the documentation.   
- Currently used for a C Project/API but can be adapted to use C++ or even both. ((1) C++ wrapper around C API or (2) A part of the API that uses C and another part that used C++)

## sAPI directory (build the API as shared lib)   

The sAPI directory contains the build architecture to build a new API as shared library.   

In /sAPI/build   
Use "cmake .." to build the shared library containing the API.  

In /sAPI/src   
Contains the sources of the API and local header files       

In /sAPI/export/   
Contains only the headers of the API that you want to export    

## Project directory (build the main project with the shared lib)    

In /project/build/    
Use "cmake .." to build the main project that uses the API.   

In /project/src/    
Contains the sources for the project   

## Documenting the API
    
You can generate a documentation from the API in different format via Doxygen as following:    

In /sAPI/doxygen/    
Use "doxygen doxygen.cfg" to generate the API documentation. (pre-configured for HTML and Latex)    

Then just open the generated document.    
I.E firefox /html/index.html    

You can also give additional information by providing examples of the API usage as following:    

In /sAPI/example/build/   
Use "cmake .." to build examples that uses the API.    

/!\ Obviously the API should be the first part to be compiled before being able to use it in the project or in the examples.    

Take a look at the Doxygen documentation to understand how the syntax works to create neat documentations.

* [Doxygen](http://www.stack.nl/~dimitri/doxygen/index.html) - Documentation generator

## Tree view of the build system

```
    .
    |-- LICENSE
    |-- project
    |      |-- build
    |      |-- CMakeLists.txt
    |      |-- src
    |           |-- main.c
    |-- README.md
    |-- sAPI
          |-- build
          |-- CMakeLists.txt
          |-- doxygen
          |      |-- doxygen.cfg
          |      |-- README
          |      |-- sAPI.jpg
          |-- examples
          |      |-- build
          |      |-- CMakeLists.txt
          |      |-- readelf.c
          |      |-- timer.c
          |-- export
          |      |-- sprint.h
          |      |-- sreadelf.h
          |      |-- stimer.h
          |-- main.c
          |-- src
               |-- sprint.c
               |-- sreadelf.c
               |-- stimer.c
               |-- toolbox.c

```

## Ideas for improvements

* Create a build system version mixed with buildroot for embedded systems project (and to go further, even extend it with qemu virtualizer).
* Add option in CMake to be able to build the library also as a static lib.
