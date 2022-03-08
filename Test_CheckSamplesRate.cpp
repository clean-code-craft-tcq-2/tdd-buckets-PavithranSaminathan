#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "test/catch.hpp"
#include "CheckSamplesRate.h"
TEST_CASE("Read No of samples from input range")
{
 int NoOfSamples=0;
 ReadNoofSamples(5,10,7,&NoOfSamples);
 //REQUIRE(NoOfSamples== 2);
}
