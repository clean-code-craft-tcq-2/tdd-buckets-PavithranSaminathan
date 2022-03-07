#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"
#include "typewise-alert.h"
#include <stdio.h>

TEST_CASE("Read No of samples from input range")
{
  int data;
  ReadNoofSamples(3,5,&data);
  REQUIRE(data == 3);
}
