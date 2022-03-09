#include "CheckSamplesRate.h"
#include <stdio.h>

int ReadNoofSamples(int *CurrentSamples , int TotalSamples ,int FromRange , int ToRange)
{
  int NoofOccurance=0;
  for(int i=0;i<TotalSamples;i++)
  {
    if((FromRange <= CurrentSamples[i]) && (ToRange >= CurrentSamples[i]))
    {
      printf("S=%d i=%d\n",CurrentSamples[i],i);
      NoofOccurance++;
    }
    else
    {
      /*do nothing */
    }
  }
  printf("TotalCurrentSamples= %d\n",TotalSamples);
  printf("Total Samples= %d\n",NoofOccurance);
  return NoofOccurance;
}
