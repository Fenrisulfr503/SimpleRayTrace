cmake_minimum_required(VERSION 3.12.3)


project( Lib )

set( SRC 
    Vector3.cpp)


add_library(Lib STATIC ${SRC})

