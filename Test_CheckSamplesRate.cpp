#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"
#include "CheckSamplesRate.h"

TEST_CASE("Read No of samples from input range")
{
  int Total_samples=0;
  Total_samples=ReadNoofSamples(3,5);
  REQUIRE(Total_samples == 4);
}
