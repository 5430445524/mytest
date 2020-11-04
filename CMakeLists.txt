PROJECT(mytest)
CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

SET(CMAKE_BUILD_TYPE Debug)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")



add_executable(mytest1 mytest1.cpp)


CMakeLists.txt
