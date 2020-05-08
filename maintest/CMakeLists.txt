cmake_minimum_required(VERSION 3.12.3)


project( Exe )

include_directories( "../raytrace" )
add_executable(Exe main.cpp)

target_link_libraries(Exe PUBLIC
            Lib
            gtest_main)