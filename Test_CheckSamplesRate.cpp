#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "CheckSamplesRate.h"

TEST_CASE("Read No of samples from input range")
{
  int CurrentSamples[]= {3, 3, 5, 4, 10, 11, 12};
  int Total_samples=0;
  int FromRange=3;
  int ToRange=5;
  Total_samples=ReadNoofSamples(FromRange,ToRange);
  //REQUIRE(Total_samples == 4);
}
