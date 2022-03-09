#include "CheckSamplesRate.h"
#include <stdio.h>

int TotalNoOfSamples=0;
int CurrentSamples[7] = {3, 3, 5, 4, 10, 11, 12};
int TotalSamples=sizeof(CurrentSamples)/sizeof(CurrentSamples[0]);

void PrintonConsole(char * InputData)
{
  printf("%s",InputData);
}

void SendDataToPrint(int FromRange , int ToRange ,int TotalOccurance )
{
  char PrintData[80];
  sprintf(PrintData,"%d-%d,%d\n",FromRange,ToRange,TotalOccurance);
  PrintonConsole(PrintData);
}
  
int ReadNoofSamples(int *CurrentSamples , int TotalSamples ,int FromRange , int ToRange)
{
  int NoofOccurance=0;
  for(int i=0;i<TotalSamples;i++)
  {
    if((FromRange <= CurrentSamples[i]) && (ToRange >= CurrentSamples[i]))
    {
      NoofOccurance++;
    }
    else
    {
      /*do nothing */
    }
  }
  SendDataToPrint(FromRange ,ToRange ,NoofOccurance);
  return NoofOccurance;
}
