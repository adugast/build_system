cmake_minimum_required(VERSION 2.8.12.2)

project(testAPI)

set(BIN test_api)

#For the shared library:
set(PROJECT_LINK_LIBS libsapi.so)
#set (PROJECT_LINK_LIBS libsapi.a) if static

# after link directly with the shared lib
link_directories(../sAPI/build/)

#For the static library:
#set ( PROJECT_LINK_LIBS libtestStudent.a )
#link_directories( ~/exploringBB/extras/cmake/studentlib_static/build )

include_directories(../sAPI/export)

add_executable(${BIN} src/main.c)

target_link_libraries(${BIN} ${PROJECT_LINK_LIBS})
