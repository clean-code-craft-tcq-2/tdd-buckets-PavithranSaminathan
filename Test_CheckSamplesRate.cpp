#define CATCH_CONFIG_MAIN

#include "test/catch.hpp"
#include "CheckSamplesRate.h"
#include <stdio.h>

TEST_CASE("Read No of samples from 5-10 range")
{
 int TotalNoOfSamples=0;
 int CurrentSamples[7] = {3, 3, 5, 4, 10, 11, 12};
 int TotalSamples=sizeof(CurrentSamples)/sizeof(CurrentSamples[0]);
 TotalNoOfSamples=ReadNoofSamples(CurrentSamples,TotalSamples,5,10);
 REQUIRE(TotalNoOfSamples == 2);
}

TEST_CASE("Read No of samples from 3-5 range")
{
 int TotalNoOfSamples=0;
 int CurrentSamples[7] = {3, 3, 5, 4, 10, 11, 12};
 int TotalSamples=sizeof(CurrentSamples)/sizeof(CurrentSamples[0]);
 TotalNoOfSamples=ReadNoofSamples(CurrentSamples,TotalSamples,3,5);
 REQUIRE(TotalNoOfSamples == 4);
}

TEST_CASE("Read No of samples from 3-12 range")
{
 int TotalNoOfSamples=0;
 int CurrentSamples[7] = {3, 3, 5, 4, 10, 11, 12};
 int TotalSamples=sizeof(CurrentSamples)/sizeof(CurrentSamples[0]);
 TotalNoOfSamples=ReadNoofSamples(CurrentSamples,TotalSamples,3,5);
 REQUIRE(TotalNoOfSamples == 7);
}
