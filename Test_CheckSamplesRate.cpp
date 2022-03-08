#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "test/catch.hpp"
#include "CheckSamplesRate.h"
TEST_CASE("Read No of samples from input range")
{
 REQUIRE(ReadNoofSamples(5,10) == 2);
}
