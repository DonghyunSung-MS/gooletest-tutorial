cmake_minimum_required(VERSION 3.10)

set(This Example)

project(${This} C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

enable_testing()
find_package(GTest REQUIRED)


#add_subdirectory(googletest)

set(Sources
    Example.cpp
)

set(Headers
    Example.hpp    
)

add_library(${This} STATIC ${Sources} ${Headers})

add_subdirectory(test)