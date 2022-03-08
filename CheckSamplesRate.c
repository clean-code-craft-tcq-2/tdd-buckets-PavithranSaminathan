#include "CheckSamplesRate.h"
#include <stdio.h>
const int CurrentSamples[7] = {3, 3, 5, 4, 10, 11, 12};
int ReadNoofSamples(int FromRange , int ToRange,int TotalCurrentSamples)
{
  int TotalSamples=0;
  for(int i=0;i<TotalCurrentSamples;i++)
  {
    if((FromRange <= CurrentSamples[i]) && (ToRange >= CurrentSamples[i]))
    {
      printf("S=%d i=%d\n",CurrentSamples[i],i);
      TotalSamples++;
    }
    else
    {
      /*do nothing */
    }
  }
  printf("TotalCurrentSamples= %d\n",TotalCurrentSamples);
  printf("Total Samples= %d\n",TotalSamples);
  return TotalSamples;
}
