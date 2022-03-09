#define CATCH_CONFIG_MAIN

#include "test/catch.hpp"
#include "CheckSamplesRate.h"
#include <stdio.h>

TEST_CASE("Read No of samples from 5-10 range")
{
 TotalNoOfSamples=ReadNoofSamples(5,10);
 REQUIRE(TotalNoOfSamples == 2);
}

TEST_CASE("Read No of samples from 3-5 range")
{
 TotalNoOfSamples=ReadNoofSamples(3,5);
 REQUIRE(TotalNoOfSamples == 4);
}

TEST_CASE("Read No of samples from 3-12 range")
{
 TotalNoOfSamples=ReadNoofSamples(3,12);
 REQUIRE(TotalNoOfSamples == 7);
}
