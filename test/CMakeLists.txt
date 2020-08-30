cmake_minimum_required(VERSION 3.10)



set(Sources
    ExampleTests.cpp
)

include_directories(BEFORE ${GTEST_INCLUDE_DIRS})
add_executable(ExampleTests ${Sources})

target_link_libraries(ExampleTests PUBLIC
    Example
    GTest::GTest
    GTest::Main
)

add_test(
    NAME ${This}
    COMMAND  ${This}
)