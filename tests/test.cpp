// Copyright (c) 2021 Emmanuel Arias
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include <catch2/catch_test_macros.hpp>
#include <calculator/sum.h>


TEST_CASE( "Sum are computed", "[calculator_lib]" ) {
    REQUIRE( calculator::sum(1, 1) == 2 );
    REQUIRE( calculator::sum(0, 0) == 0 );
    REQUIRE( calculator::sum(-90, 90) == 0 );
    REQUIRE( calculator::sum(10, -20) == -10 );
}
