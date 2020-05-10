cmake_minimum_required(VERSION 3.12.3)


project( RayTrace )

set( SOURCE 
      Vector3.cpp
      File.cpp
      ppm.cpp)


add_library(RayTrace STATIC ${SOURCE})

