#include <gtest/gtest.h>
#include "../Example.hpp"

TEST(ExampleTests, DemonstratesGTestMacros)
{
    EXPECT_EQ(true, true);
    ASSERT_TRUE(true);
    EXPECT_TRUE(true);
}

TEST(ExampleTests, SquareFunctionTest)
{
    int input = 10;
    int expect = 100;
    EXPECT_EQ(expect, squareF(input));
}
