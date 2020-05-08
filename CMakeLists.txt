cmake_minimum_required(VERSION 3.12.3)


project( Main )

set(CMAKE_C_STANDARD C99)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

add_subdirectory(raytrace)
add_subdirectory(googletest)

add_subdirectory(maintest)