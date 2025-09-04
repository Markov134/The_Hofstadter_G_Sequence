//
// Created by Steph on 9/3/2025.
//
#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/HGSequence.h"

TEST_CASE( "Naive Recursion Method" ) {
    BENCHMARK( "Test One" ) {
        Gsequence(0);
    };

    BENCHMARK( "Test Two" ) {
        Gsequence(1);
    };

    BENCHMARK( "Test Three" ) {
        Gsequence(2);
    };

    BENCHMARK( "Test Four" ) {
        Gsequence(10);
    };
}
int n;
std::vector<int> cache(n + 1, -1);
TEST_CASE( "Improved Recursion Method" ) {
    BENCHMARK( "Test One" ) {
        ImprovedGsequence(n = 0, cache);
    };

    BENCHMARK( "Test Two" ) {
        ImprovedGsequence(n = 1, cache);
    };

    BENCHMARK( "Test Three" ) {
        ImprovedGsequence(n = 2, cache);
    };

    BENCHMARK( "Test Four" ) {
        ImprovedGsequence(n = 10, cache);
    };
}