#define CATCH_CONFIG_MAIN

#include "test/catch.hpp"
#include "CheckSamplesRate.h"
#include <stdio.h>
#include <string.h>

int TotalNoOfSamples=0;
#define INVALID_RANGE 0xFF

char Actual_Output[30]={'\0'};

/*Reading occurance betweeen 5-10 range */
TEST_CASE("Read No of samples from 5-10 range")
{
 char Expected_Output[30]="5-10,2";
 int Min_Range=5;
 int Max_Range=10;
 ReadNoofSamples(Min_Range,Max_Range,Actual_Output);
 REQUIRE(strcmp(Expected_Output,Actual_Output) == 0);
}

/*Reading occurance betweeen invalid range range */
/*Function should return invalid range*/
TEST_CASE("Test case invalid range")
{
 char Expected_Output[30];
 Expected_Output=ReadNoofSamples(12,3,Actual_Output);
 REQUIRE(strcmp("INVALID_RANGE" ,Expected_Output) == 0);
}


/*Reading occurance betweeen 3-5 range */
TEST_CASE("Read No of samples from 3-5 range")
{
 char Expected_Output[30]="3-5,4";
 ReadNoofSamples(3,5,Actual_Output);
 REQUIRE(strcmp(Expected_Output,Actual_Output) == 0);
}

/*Reading occurance betweeen 3-12 range */
TEST_CASE("Read No of samples from 3-12 range")
{
 char Expected_Output[30]="3-12,7";
 ReadNoofSamples(3,12,Actual_Output);
 REQUIRE(strcmp(Expected_Output,Actual_Output) == 0);
}



