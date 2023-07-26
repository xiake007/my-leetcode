#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <cstdint>
#include <iostream>

int factorial(int num)
{
        return num <= 1 ? num : factorial(num - 1) * num;
}

TEST_CASE("Factorial are computed", "[factorial]")
{
        REQUIRE(factorial(1) == 1);
        REQUIRE(factorial(2) == 2);
        REQUIRE(factorial(3) == 6);
}