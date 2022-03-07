#include "CheckSamplesRate.h"

CurrentSamples[7] = {3, 3, 5, 4, 10, 11, 12};

void ReadNoofSamples(int FromRange , int ToRange , int* TotalSamples)
{
  int TotalCurrentSamples = sizeof(CurrentSamples)/CurrentSamples[0];
  for(int i=0;i<TotalCurrentSamples;i++)
  {
    if(FromRange <= CurrentSamples[i] && ToRange >= CurrentSamples[i])
    {
      TotalSamples++;
    }
  }
}
