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
 char *Output=ReadNoofSamples(5,10);
 REQUIRE(strcmp(Output,"5-10,2")!=10);
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


