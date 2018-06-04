# build_system

Very simple build system to create an API next to a project.   
Provides minimal directory architecture to build a project and it's API with documentation.    
Uses CMAKE to build and Doxygene for the documentation.    

## sAPI directory (build the API as shared lib)   

This directory contains the build architecture to build a new API as shared library.   
Choice of building a shared lib is to be common for multiples apps   

In /sAPI/build   
Use "cmake .." to build the shared library containing the API.  

In /sAPI/src   
Contains the sources of the API and local header files       

In /sAPI/export/   
Contains only the headers of the API that you want to export    

## project directoy (build the main project with the shared lib)    

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
