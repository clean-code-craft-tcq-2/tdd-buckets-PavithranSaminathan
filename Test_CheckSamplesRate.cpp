#define CATCH_CONFIG_MAIN

#include "test/catch.hpp"
#include "CheckSamplesRate.h"

TEST_CASE("Read No of samples from input range")
{
 ReadNoofSamples(5,10,7);
 REQUIRE(NoOfSamples== 2);
}
