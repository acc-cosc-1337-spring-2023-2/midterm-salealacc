#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include <math.h>
#include "catch.hpp"
#include "question1.h"

using std::round;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Validate sales commision", "validation")
{
	REQUIRE(round(get_sales_commission(100)) == 5);
	REQUIRE(round(get_sales_commission(750)) == 45);
	REQUIRE(round(get_sales_commission(1100)) == 77);
	REQUIRE(round(get_sales_commission(1750)) == 140);
}
