# major version 2, minor version 8, and patch version 12
cmake_minimum_required(VERSION 2.8.12)

#########################
### CONFIGURABLE PART ###
#########################

# set project name
project(build_examples)

set(CMAKE_C_FLAGS "-W -Wall -pedantic -std=c99 -std=gnu99 -g")

link_directories(../build/)

# set readelf_example compilation
add_executable(
    readelf_example
    readelf.c
)
target_link_libraries(readelf_example libsapi.so)

# set timer_example compilation
add_executable(
    timer_example
    timer.c
)
target_link_libraries(timer_example libsapi.so)

