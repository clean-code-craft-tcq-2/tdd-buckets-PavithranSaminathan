#include "CheckSamplesRate.h"
#include <stdio.h>

void PrintonConsole(char * InputData)
{
  Printf("%s",InputData);
}

void SendDataToPrint(int FromRange , int ToRange ,int TotalOccurance )
{
  char *PrintData;
  sprintf(PrintData,"Ranges= %d-%d  Occurance=%d",FromRange,ToRange,TotalOccurance);
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
