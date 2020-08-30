cmake_minimum_required(VERSION 3.10)



set(Sources
    ExampleTests.cpp
)

add_executable(ExampleTests ${Sources})

target_link_libraries(ExampleTests PUBLIC
    Example
    GTest::GTest
    GTest::Main
)
