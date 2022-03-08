#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "test/catch.hpp"
#include "CheckSamplesRate.h"
TEST_CASE("Read No of samples from input range")
{
  int Total_samples=0;
  int FromRange=5;
  int ToRange=10;
  Total_samples=ReadNoofSamples(FromRange,ToRange);
  //REQUIRE(Total_samples == 3);
}
TEST_CASE("Read No of samples from 2-6 range")
{
  int Total_samples=0;
  int FromRange=2;
  int ToRange=6;
  Total_samples=ReadNoofSamples(FromRange,ToRange);
  REQUIRE(Total_samples == 4);
}
