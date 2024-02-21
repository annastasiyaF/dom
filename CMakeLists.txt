cmake minimum_required(VERSION 3.8)

progect(
    CPlusPlusBestC
    LANGUAGES CXXX)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGES} -std=c++17")

add_executable(main main.cpp)