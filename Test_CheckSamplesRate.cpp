#define CATCH_CONFIG_MAIN

#include "test/catch.hpp"
#include "CheckSamplesRate.h"

TEST_CASE("Read No of samples from input range")
{
 
 int TotalNoOfSamples=0;
 const int CurrentSamples[7] = {3, 3, 5, 4, 10, 11, 12};
 int TotalSamples=sizeof(CurrentSamples)/sizeof(CurrentSamples[0]);
 
 TotalNoOfSamples=ReadNoofSamples(CurrentSamples,TotalSamples,5,10);
 REQUIRE(TotalNoOfSamples == 2);
}
