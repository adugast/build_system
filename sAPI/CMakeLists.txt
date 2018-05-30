# major version 2, minor version 8, and patch version 12
cmake_minimum_required(VERSION 2.8.12)

#########################
### CONFIGURABLE PART ###
#########################

# set project name
project(sAPI)

# Specifies the build type on single-configuration generators.
# Possible values are empty, Debug, Release, RelWithDebInfo and MinSizeRel.
set(CMAKE_BUILD_TYPE Release)

# set useful project variables
set(LIBNAME sapi)
set(LIBTYPE SHARED) # or STATIC
set(INSTALL_FOLDER .)
# current install folder is '.' local
# but should be set to /usr/lib to set the lib as system shared lib
# -> need root for automatic installation as system shared lib

###################
### STATIC PART ###
###################

# set library source file location
file(GLOB SOURCES "src/*.c")
# set(SOURCES src/main.c src/api1.c) -> file by file
# include_directories(.) -> include a whole dir

# generate the library
add_library(${LIBNAME} ${LIBTYPE} ${SOURCES})

# install the library
install(TARGETS ${LIBNAME} DESTINATION ${INSTALL_FOLDER})

