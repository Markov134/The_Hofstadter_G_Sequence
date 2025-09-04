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
        Gsequence(3);
    };

    BENCHMARK( "Test Five" ) {
        Gsequence(4);
    };

    BENCHMARK( "Test Six" ) {
        Gsequence(5);
    };

    BENCHMARK( "Test Seven" ) {
        Gsequence(6);
    };

    BENCHMARK( "Test Eight" ) {
        Gsequence(7);
    };

    BENCHMARK( "Test Nine" ) {
        Gsequence(8);
    };

    BENCHMARK( "Test Ten" ) {
        Gsequence(9);
    };
}

TEST_CASE( "Improved Recursion Method" ) {
    BENCHMARK( "Test One" ) {
        ImprovedGsequence(0);
    };

    BENCHMARK( "Test Two" ) {
        ImprovedGsequence(1);
    };

    BENCHMARK( "Test Three" ) {
        ImprovedGsequence(2);
    };

    BENCHMARK( "Test Four" ) {
        ImprovedGsequence(3);
    };

    BENCHMARK( "Test Five" ) {
        ImprovedGsequence(4);
    };

    BENCHMARK( "Test Six" ) {
        ImprovedGsequence(5);
    };

    BENCHMARK( "Test Seven" ) {
        ImprovedGsequence(6);
    };

    BENCHMARK( "Test Eight" ) {
        ImprovedGsequence(7);
    };

    BENCHMARK( "Test Nine" ) {
        ImprovedGsequence(8);
    };

    BENCHMARK( "Test Ten" ) {
        ImprovedGsequence(9);
    };
}