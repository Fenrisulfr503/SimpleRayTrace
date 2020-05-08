cmake_minimum_required(VERSION 3.12.3)


project( RayTraceTest )

include_directories( "../raytrace" )

add_executable(RayTraceTest main.cpp)

target_link_libraries(RayTraceTest PUBLIC
            RayTrace
            gtest_main)