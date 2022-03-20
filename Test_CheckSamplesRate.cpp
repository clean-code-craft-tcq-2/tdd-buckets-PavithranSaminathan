#define CATCH_CONFIG_MAIN

#include "test/catch.hpp"
#include "CheckSamplesRate.h"
#include <stdio.h>
#include <string.h>

int TotalNoOfSamples=0;
#define INVALID_RANGE 0xFF

/*Reading occurance betweeen 5-10 range */
TEST_CASE("Read No of samples from 5-10 range")
{
 char Output[30]={'\0'};
 char Expected_Output[30]="5-10,2";
 int Min_Range=5;
 int Max_Range=10;
  
 ReadNoofSamples(Min_Range,Max_Range,Output);
// REQUIRE(strcmp(Expected_Output,Output) == 0);
}

#if 0

/*Reading occurance betweeen invalid range range */
/*Function should return invalid range*/
TEST_CASE("Test case invalid range")
{
 TotalNoOfSamples=ReadNoofSamples(12,3);
 REQUIRE(TotalNoOfSamples == INVALID_RANGE);
}

/*Reading occurance betweeen 3-5 range */
TEST_CASE("Read No of samples from 3-5 range")
{
 TotalNoOfSamples=ReadNoofSamples(3,5);
 REQUIRE(TotalNoOfSamples == 4);
}

/*Reading occurance betweeen 3-12 range */
TEST_CASE("Read No of samples from 3-12 range")
{
 TotalNoOfSamples=ReadNoofSamples(3,12);
 REQUIRE(TotalNoOfSamples == 7);
}
#endif


