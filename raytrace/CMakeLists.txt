cmake_minimum_required(VERSION 3.12.3)


project( RayTrace )

set( SOURCE 
      Vector3.cpp
      File.cpp)


add_library(RayTrace STATIC ${SOURCE})

