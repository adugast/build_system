# build_system

Very simple build system to create API next to a main project.   
Provided directory structure to build a project that uses a shared API.
Uses CMAKE to build and Doxygene for the documentation.

## sAPI directory (build the API as shared lib)

This directory contains the build architecture to build a new API as shared library.   

In /sAPI/build   
Use "cmake .." to build the shared library containing the API.  

Choice of building a shared lib is to be common for multiples apps

## project directoy (build the main project with the shared lib)

In /project/build/   
Use "cmake .." to build the main project that uses the API.  

## Documenting the API

You can generate a documentation from the API in different format via Doxygen as following:    

In /sAPI/doxygen/
Use "doxygen doxygen.cfg" to generate the API documentation. (preconfigured for HTML and Latex)    

You can give additional information by providing example of the API usage as following:

In /sAPI/example/build/  
Use "cmake .." to build examples that uses the API.   
