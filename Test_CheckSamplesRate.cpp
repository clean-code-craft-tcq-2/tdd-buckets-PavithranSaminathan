#define CATCH_CONFIG_MAIN

#include "test/catch.hpp"
#include "CheckSamplesRate.h"
#include "ADC_TEST.h"
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
 ReadNoofSamples(12,3,Actual_Output);
 strcpy(Expected_Output,Actual_Output);
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

/*Reading occurance betweeen 2-12 range */
TEST_CASE("Read No of samples from 2-12 range")
{
 char Expected_Output[30];
 ReadNoofSamples(-1,12,Actual_Output);
 strcpy(Expected_Output,Actual_Output);
 REQUIRE(strcmp("INVALID_RANGE" ,Expected_Output) == 0);
}

/*Reading occurance betweeen 3-13 range */
TEST_CASE("Read No of samples from 3-13 range")
{
 char Expected_Output[30];
 ReadNoofSamples(3,-1,Actual_Output);
 strcpy(Expected_Output,Actual_Output);
 REQUIRE(strcmp("INVALID_RANGE" ,Expected_Output) == 0);
}


TEST_CASE("Writing integer of array with 12bit Sensor Value and compare with ADC result")
{
   int size =8;
   int *ActualOutput;
   int SensorValue[size] = {500 , 700 , 1500 , 3200 , 2500 , 966 , 3600 , 4000};
   int ExpectedOutput[10] = {1 ,2 , 4, 7 , 6 , 2 ,9 ,10 };
   
   CalculationADCValue(SensorValue , ActualOutput ,size);
   for(int index=0; size > index ; index++)
   {
     REQUIRE(ActualOutput[index] == ExpectedOutput[index]);
   }
}

